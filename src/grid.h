#pragma once
#include<vector>
#include<raylib.h>
using namespace std;
class Grid{
    public:
        Grid();
        void Initialize();
        void Print();
        void Draw();
        int grid[30][10];
        bool IsCellEmpty(int row,int column);
        bool IsCellOutside(int row,int column);
        int ClearFullRows();
    private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row,int numRows);
    int numRows,numCols,cellsize;
    vector<Color> colors;
};