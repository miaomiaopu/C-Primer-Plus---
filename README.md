# C Primer plus 练习题

## 文件结构

- main.c 测试用主程序(可能不存在)
- xx.h 头文件(可能不存在)
- xx.c 源文件
- CMakeLists.txt CMake文件
- build/build.sh 编译脚本, 
    ```bash
    cd ./build
    ./build.sh [CMake文件所在目录]
    ```
- build/clean.sh 清除build文件夹中内容
    ```bash
    cd ./build
    ./clean.sh
    ```
- chxx(表示第x章节的题目，有前导0)文件内表示
    - xx表示第x题目