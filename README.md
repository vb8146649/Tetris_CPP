# Tetris Game

Welcome to my Tetris game! This is a classic Tetris game created using C++ and the Raylib library. The project is designed to help beginners get started with C++ programming and game development.

## About the Game

This Tetris game replicates the classic tile-matching puzzle game where the player must rotate, move, and drop Tetriminos within a matrix. The objective is to clear as many lines as possible by completing horizontal rows of blocks without any gaps. As the game progresses, the Tetriminos fall faster, increasing the challenge for the player.

## Getting Started

To download and run this project, follow these steps:

### Prerequisites

- Install a C++ compiler (like g++).
- Install Raylib. You can download it from the [official Raylib website](https://www.raylib.com/) or use your package manager.

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/vb8146649/Tetris_CPP.git
    cd Tetris_CPP
    ```

2. Create a `tasks.json` file in the `.vscode` folder with the following content:

    ```json
    {
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build debug",
            "type": "process",
            "command": "make",
            "args": [
                "PLATFORM=PLATFORM_DESKTOP",
                "BUILD_MODE=DEBUG"
            ],
            "windows": {
                "command": "C:/raylib/w64devkit/bin/mingw32-make.exe",
                "args": [
                    "RAYLIB_PATH=C:/raylib/raylib",
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "OBJS=src/*.cpp",
                    "BUILD_MODE=DEBUG"
                ]
            },
            "osx": {
                "args": [
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "OBJS=src/*.cpp",
                    "BUILD_MODE=DEBUG"
                ]
            },
            "linux": {
                "args": [
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "DESTDIR=/home/linuxbrew/.linuxbrew",
                    "RAYLIB_LIBTYPE=SHARED",
                    "EXAMPLE_RUNTIME_PATH=/home/linuxbrew/.linuxbrew/lib",
                    "OBJS=src/*.cpp",
                    "BUILD_MODE=DEBUG"
                ]
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [
                "$gcc"
            ]
        },
        {
            "label": "build release",
            "type": "process",
            "command": "make",
            "args": [
                "PLATFORM=PLATFORM_DESKTOP"
            ],
            "windows": {
                "command": "C:/raylib/w64devkit/bin/mingw32-make.exe",
                "args": [
                    "RAYLIB_PATH=C:/raylib/raylib",
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "OBJS=*.cpp"
                ]
            },
            "osx": {
                "args": [
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "OBJS=*.cpp"
                ]
            },
            "linux": {
                "args": [
                    "PROJECT_NAME=${fileBasenameNoExtension}",
                    "DESTDIR=/home/linuxbrew/.linuxbrew",
                    "RAYLIB_LIBTYPE=SHARED",
                    "EXAMPLE_RUNTIME_PATH=/home/linuxbrew/.linuxbrew/lib",
                    "OBJS=*.cpp"
                ]
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            },
            "detail": "compiler: C:\\raylib\\mingw\\bin\\g++.exe"
        }
        ]
    }
    ```

3. Build and run the game in VS Code:
    - Use Shortcut Key **F5** or just run the program normally.


### Screenshot

![Tetris Game](https://github.com/vb8146649/Tetris_CPP/blob/main/game_preview.png)

## Why Tetris?

This project is a great starting point for beginners in C++ for several reasons:
- **Classes and Inheritance**: Understand how to structure your code using classes and inheritance.
- **Code Modularity**: Learn to separate your code into different files and modules for better organization.
- **Graphics in C++**: Get hands-on experience with creating graphics using the Raylib library.
- **Keyboard Input**: Handle keyboard inputs for controlling game elements.
- **Adding Music**: Implement background music and sound effects to enhance the gaming experience.

This is my first project in C++ and my first time using Raylib. Through this project, I've learned a lot about game development, C++ programming, and working with graphical libraries. I hope this game helps others who are just starting their journey in C++ and game development.
