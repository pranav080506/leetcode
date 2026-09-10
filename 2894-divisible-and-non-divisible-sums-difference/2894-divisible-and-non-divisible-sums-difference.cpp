class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,sumM=0,sumN;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        for(int i=1;i<=n;i++){
            if(i%m==0){
                sumM+=i;
            }
        }
        sumN=sum-sumM;
        return (sumN-sumM);
        
    }
};