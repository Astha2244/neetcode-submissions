class Solution {
public:
    int maxArea(vector<int>& h) {
        int h1 = 0;
        int h2 = h.size() - 1;
        int max = 0;

        while (h1 < h2) {
            int area = min(h[h1], h[h2]) * (h2 - h1);

            if (area > max)
                max = area;

            if (h[h1] < h[h2])
                h1++;
            else
                h2--;
        }

        return max;
    }
};

