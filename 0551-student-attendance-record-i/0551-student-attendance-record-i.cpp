class Solution {
public:
    bool checkRecord(string s) {
        int late=0,absent=0;
        for(char ch:s){
            if(ch=='A'){
                absent++;
                late=0;
                
                if(absent>=2){
                    return false;
                }
            }else if(ch=='L'){
                late++;
                if(late>=3){
                    return false;
                }

            }else{
                late=0;
            }
        }
        return true;
    }
};