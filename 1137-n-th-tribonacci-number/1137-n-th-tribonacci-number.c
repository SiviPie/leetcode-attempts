

int tribonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    int prev1=0, prev2=1, prev3=1;
    for(int i=4; i<=n; i++) {
        int aux=prev1;
        prev1 = prev2;
        prev2 = prev3;
        prev3 = aux+prev1+prev2;
    }
    return prev1+prev2+prev3;
}