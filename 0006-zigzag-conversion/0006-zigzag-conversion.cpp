class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<vector<char>> mat(numRows,vector<char>(1000,' '));
        int k=0,j=0,i=0, sign=1;
        while(j<1000 && k<s.length()){
            if(sign==1){
                if(i==numRows){
                    sign=-1;
                    i-=2;
                    j++;
                }
                else{
                    mat[i][j]=s[k];
                    k++;
                    i++;
                }
            }
            else{
                if(i==-1){
                    i=1;
                    sign=1;
                    j--;
                }
                else{
                    mat[i][j]=s[k];
                    k++;
                    i--;
                    j++;
                }
            }
        }
        string ns="";
        for(auto it: mat){
            for(auto ele: it)
                if(ele!=' ') ns+=ele;
        }
        return ns;
    }
};