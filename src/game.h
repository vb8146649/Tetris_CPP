#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game{
    public:
        Game();
        Block GetRandomBlock();
        vector<Block> GetAllBlocks();
        void Draw();
        void HandleInput();
        void MoveBlockLeft();
        void MoveBlockRight();
        void MoveBlockDown();
        Grid grid;
        bool gameOver;

    private:
        void LockBlock();
        bool IsBlockOutside();
        void RotateBlock();
        bool BlockFits();
        void Reset();
        vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
};