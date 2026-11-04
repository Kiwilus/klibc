#!/bin/bash

set -e

GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${BLUE}> Building the library...${NC}"
cmake -S . -B build
cmake --build build
echo -e "${GREEN}Library built successfully.${NC}"
