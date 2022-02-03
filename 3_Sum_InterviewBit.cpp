int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    sort(A.begin(), A.end());
    long long res=INT_MAX;
    for(int i=0; i<n-2; i++){
        int low=i+1, high=n-1;
        while(low<high){
            long long sum=A[i]+A[low]+A[high];
            if(abs(sum-B) < abs(res-B)){
                res=sum;
            }
            if(sum>B){
                high--;
            }
            else{
                low++;
            } 
        }
    }
    return res;
}