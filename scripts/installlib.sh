#!/bin/bash

set -e

GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${BLUE}> Installing header files...${NC}"
sudo mkdir -p /usr/local/include/klib
sudo cp include/klib/math.h /usr/local/include/klib/
echo -e "${GREEN}Header files installed successfully.${NC}"


echo -e "${BLUE}> Installing library...${NC}"
sudo cp -P build/libklib.so* /usr/local/lib/

sudo ldconfig
echo -e "${GREEN}Library installed successfully.${NC}"
