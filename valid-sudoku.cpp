class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> mp;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.')
                mp[board[i][j]]++;
            }
            for(auto x : mp){
                if(x.second > 1)
                return false;
            }
            mp.clear();
        }

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[j][i] != '.')
                mp[board[j][i]]++;
            }
            for(auto x : mp){
                if(x.second > 1)
                return false;
            }
            mp.clear();
        }
        for(int m=0; m<9; m+=3){
            for(int i=0; i<9; i+=3){
                for(int j=m; j<m+3; j++){
                    for(int k=i; k<i+3; k++){
                        if(board[j][k] != '.')
                        mp[board[j][k]]++;
                    }
                }
                for(auto x : mp){
                    if(x.second > 1)
                    return false;
                }
                mp.clear();
            }
        }
        return true;
    }
};