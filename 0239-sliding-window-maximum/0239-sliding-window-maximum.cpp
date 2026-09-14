class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {

        if (n.size() == 0 || k <= 0) {
            return {};
        }

        int a = n.size();
        vector<int> r(a - k + 1);
        int ri = 0;

        deque<int> q;

        for (int i = 0; i < a; i++) {

            // Window ke bahar wale elements remove karo
            while (!q.empty() && q.front() < i - k + 1) {
                q.pop_front();
            }

            // Chhote elements ko rear se remove karo
            while (!q.empty() && n[q.back()] < n[i]) {
                q.pop_back();
            }

            q.push_back(i);

            // Window complete hone par maximum store karo
            if (i >= k - 1) {
                r[ri++] = n[q.front()];
            }
        }

        return r;
    }
};