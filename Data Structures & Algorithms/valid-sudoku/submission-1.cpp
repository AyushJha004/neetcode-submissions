class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Rows + Columns
        for(int i = 0; i < 9; i++)
        {
            unordered_set<char> row;
            unordered_set<char> column;

            for(int j = 0; j < 9; j++)
            {
                // Row Check
                if(board[i][j] != '.')
                {
                    if(row.find(board[i][j]) != row.end())
                    {
                        return false;
                    }

                    row.insert(board[i][j]);
                }

                // Column Check
                if(board[j][i] != '.')
                {
                    if(column.find(board[j][i]) != column.end())
                    {
                        return false;
                    }

                    column.insert(board[j][i]);
                }
            }
        }

        // 3x3 Boxes
        for(int row = 0; row < 9; row += 3)
        {
            for(int col = 0; col < 9; col += 3)
            {
                unordered_set<char> box;

                for(int i = row; i < row + 3; i++)
                {
                    for(int j = col; j < col + 3; j++)
                    {
                        if(board[i][j] == '.')
                        {
                            continue;
                        }

                        if(box.find(board[i][j]) != box.end())
                        {
                            return false;
                        }

                        box.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};