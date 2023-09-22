#!/bin/bash
wget -P ../ https://github.com/MMKIS007/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=../libgiga.so
