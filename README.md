# LVGL-Emulator-Clion

**这是一个 LVGL模拟器-Clion 的个人工程备份**

**Winodws 使用**
- 下载 [mingw64-SDL2](MinGW/mingw64-SDL2.7z)
- Clion->Settings...->Build->Toolchains->Add MinGW
- 下载[LVGL-Emulator-Project](LVGL-Emulator-Project)
- 使用 Clion Cmake Projet 打开
- 设置编译器为 [mingw64-SDL2](MinGW/mingw64-SDL2.7z)
- 编译运行

**Linux 使用**
- 安装SDL2
`sudo apt-get update && sudo apt-get install -y build-essential libsdl2-dev`
- 下载[LVGL-Emulator-Project](LVGL-Emulator-Project)
- 使用 Clion Cmake Projet 打开
- 编译运行

**如何更改分辨率?**

**[lv_drv_conf.h](LVGL-Emulator-Project/lv_drv_conf.h)**

```C
#if USE_SDL || USE_SDL_GPU
#  define SDL_HOR_RES     1024
#  define SDL_VER_RES     600
```

**如何添加gui文件?**
1. 将**SquareLine Studio**生成的UI文件添加至 **[gui](LVGL-Emulator-Project/gui/)** 文件夹
2. [main.c](LVGL-Emulator-Project/main.c) 添加 **ui_init();**
