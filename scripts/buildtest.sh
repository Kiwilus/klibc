#!/bin/bash

set -e

GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "\n${BLUE}> Building the test file...${NC}"
cmake -S tests -B tests/build
cmake --build tests/build
echo -e "${GREEN}Test file built successfully.${NC}"
