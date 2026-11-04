#!/bin/bash

GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${BLUE}> Cleaning library build files...${NC}"
rm -rf build .cache
echo -e "${GREEN}Clean successfully.${NC}"

echo -e "${BLUE}> Cleaning test build files...${NC}"
rm -rf tests/build
echo -e "${GREEN}Clean successfully.${NC}"
