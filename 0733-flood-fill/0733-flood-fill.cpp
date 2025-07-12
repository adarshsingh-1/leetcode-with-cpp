class Solution {
public:
    void bfs(vector<vector<int>>& image, int x, int y,int oldClr, int newClr){
        int rows = image.size();
        int cols = image[0].size();
        
        queue<pair<int, int>> q;
        q.push({x, y});
        image[x][y] = newClr;

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();


            int drow[] = {-1, 0, 1, 0};
            int dcol[] = {0, 1, 0, -1};

            for(int i = 0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];
                            if(nrow >= 0 && nrow < rows && ncol >= 0 && ncol < cols && image[nrow][ncol] == oldClr){
                image[nrow][ncol] = newClr;
                q.push({nrow, ncol});
            }


            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldClr = image[sr][sc];
        if(oldClr!=color){
            bfs(image, sr, sc,oldClr,color);
        }
        return image;
    }
};