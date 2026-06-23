class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> Rows; 
        unordered_set<int> Columns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    Rows.insert(i);
                    Columns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(Rows.count(i) > 0 || Columns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};