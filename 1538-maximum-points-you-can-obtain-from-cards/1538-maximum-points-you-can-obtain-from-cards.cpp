class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for(int i=0; i<k; i++)
        {
            sum += cardPoints[i];
        }
        int temp = sum;
        int x = k;
        for(int i=n-1; i>n-k-1; i--)
        {
            temp = temp - cardPoints[x-1];
            temp += cardPoints[i];
            sum = max(sum, temp);
            x--;
        }
        return sum;
    }
};