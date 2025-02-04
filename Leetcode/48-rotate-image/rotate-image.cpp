class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int row= matrix.size();
        int col= matrix[0].size();
        vector<int>arr;
        for(int i=row-1; i>=0; i--){
            for(int j=0; j<col; j++){
                arr.push_back(matrix[i][j]);
            }
        }
        // for(int i=0; i<arr.size();i++){
        //     cout<<arr[i]<<",";
        // }
        int x=0;
        while(x<arr.size()){
            for(int i=0;i<col;i++){
                for(int j=0;j<row;j++){
                    matrix[j][i]=arr[x];
                    x++;
                }
            }
        }
    }
};