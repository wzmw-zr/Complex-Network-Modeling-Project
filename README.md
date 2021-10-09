# Complex-Network-Project

本项目运行的环境要求：

+ G++ 11.1.0
+ CMake 3.21.3
+ Python 3.9.7
+ matplotlib  3.3.3

在编译之前，需要修改python文件夹下的objects.h文件，因为Python.h文件中定义了slots宏，与Qt发生了冲突，将其中的`slots`宏`undefine`掉，找到第201行，进行如下修改：

```c++
#undef slots //这里添加
typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots; /* terminated by slot==0. */
} PyType_Spec;
#define slots Q_SLOTS //这里添加
```

编译：

```shell
cd build
cmake ..
make
```

在build文件夹下运行：

```shell
./app
```

