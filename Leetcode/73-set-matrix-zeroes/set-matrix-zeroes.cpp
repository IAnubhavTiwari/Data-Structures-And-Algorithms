class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int col=matrix[0].size();
        int row=matrix.size();
        // std:: cout<<row<<"X"<<col;
        // int arr[row][col];
        for(int i=0; i<row; i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    // int k=i;
                    //
                    for(int h=0; h<col; h++){
                        if(matrix[i][h]!=0){
                        matrix[i][h]=-999;
                        }
                    }
                    for(int h=0; h<row; h++){
                        if(matrix[h][j]!=0){
                        matrix[h][j]=-999;
                        }
                    }


                }
            }
        }
        
        
        for(int i=0; i<row;i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==-999){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};