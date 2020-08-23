class Solution{
public:
  int numberOfSteps (int num){
    if (num == 0) return 0;
    if (num == 1) return 1;
    else{
	  int dp[num + 1];
	  dp[0] = dp[1] = 1;
    for (int i = 2; i <= num; i++){
	    if (i % 2 == 0)   dp[i] = dp[i / 2] + 1;
	    else if (i % 2 != 0) dp[i] = dp[i - 1] + 1;    
	       }
	return dp[num];
      }
   }
};
