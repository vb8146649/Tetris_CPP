#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game{
    public:
        Game();
        ~Game();
        Block GetRandomBlock();
        vector<Block> GetAllBlocks();
        void Draw();
        void HandleInput();
        bool gameOver;
        int score;
        void MoveBlockDown();
        bool spaceKey;
        Music music;

    private:
        void MoveBlockLeft();
        void LockBlock();
        void MoveBlockRight();
        bool IsBlockOutside();
        void RotateBlock();
        bool BlockFits();
        void UpdateScore(int linesCleared,int moveDownPoints);
        void Reset();
        Grid grid;
        vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        Sound rotateSound;
        Sound clearSound;
};