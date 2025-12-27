# Data Structure Project

A C++ project implementing hierarchical biological data structures with AVL tree validation and Radix sorting algorithms.

## Project Structure

```
datastructure/
├── bin/          # Compiled executable
├── include/      # Header files (.hpp)
├── lib/          # Object files (.o)
├── src/          # Source files (.cpp)
├── makefile      # Build configuration
└── Veri.txt      # Input data file
```

## Components

The project implements a hierarchical biological structure:

- **Organizma** (Organism): Top-level container for systems
- **Sistem** (System): Contains multiple organs
- **Organ** (Organ): Contains tissues, uses AVL tree structure
- **Doku** (Tissue): Contains cells
- **Hucre** (Cell): Basic data unit

### Key Features

- **AVL Tree Validation**: Checks if organ structures maintain AVL tree properties
- **Radix Sort**: Sorts data using radix sort algorithm
- **Visualization**: Outputs a visual representation using spaces and `#` characters

## Prerequisites

- **C++ Compiler**: g++ (GNU Compiler Collection)
- **Make**: Build automation tool
- **Operating System**: Windows, Linux, or macOS

## How to Build and Run

### Option 1: Build and Run in One Command

```bash
make all
```

This command will:
1. Compile all source files (`derle`)
2. Link object files into executable (`bagla`)
3. Run the program (`calistir`)

### Option 2: Step-by-Step Build

1. **Compile source files:**
   ```bash
   make derle
   ```

2. **Link object files:**
   ```bash
   make bagla
   ```

3. **Run the program:**
   ```bash
   make calistir
   ```
   
   Or directly:
   ```bash
   ./bin/program
   ```
   
   On Windows:
   ```bash
   .\bin\program.exe
   ```

### Option 3: Manual Compilation

If you prefer to compile manually:

```bash
# Compile all source files
g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
g++ -c -I "./include" ./src/hucre.cpp -o ./lib/hucre.o
g++ -c -I "./include" ./src/doku.cpp -o ./lib/doku.o
g++ -c -I "./include" ./src/organ.cpp -o ./lib/organ.o
g++ -c -I "./include" ./src/radix.cpp -o ./lib/radix.o
g++ -c -I "./include" ./src/sistem.cpp -o ./lib/sistem.o
g++ -c -I "./include" ./src/sistemnode.cpp -o ./lib/sistemnode.o
g++ -c -I "./include" ./src/organizma.cpp -o ./lib/organizma.o
g++ -c -I "./include" ./src/kontrol.cpp -o ./lib/kontrol.o

# Link all object files
g++ ./lib/kontrol.o ./lib/organizma.o ./lib/sistemnode.o ./lib/sistem.o ./lib/radix.o ./lib/organ.o ./lib/doku.o ./lib/hucre.o ./lib/main.o -o ./bin/program

# Run
./bin/program
```

## Input Data

The program reads from `veri.txt` (or `Veri.txt`). Ensure this file exists in the project root directory. The file should contain numeric data organized in lines.

## Output

The program generates a visual representation where:
- ` ` (space) indicates a valid AVL tree structure
- `#` indicates an invalid AVL tree structure

## Clean Build

To clean compiled files and rebuild from scratch:

```bash
# Remove object files
rm -rf lib/*.o

# Remove executable
rm -f bin/program bin/program.exe

# Rebuild
make all
```

On Windows PowerShell:
```powershell
Remove-Item lib\*.o
Remove-Item bin\program.exe
make all
```

## Troubleshooting

### File Not Found Error
- Ensure `veri.txt` exists in the project root
- Check file name case sensitivity (especially on Linux/macOS)

### Compilation Errors
- Verify g++ is installed: `g++ --version`
- Ensure all header files are in the `include/` directory
- Check that all source files are in the `src/` directory

### Make Command Not Found
- On Windows: Install MinGW or use WSL (Windows Subsystem for Linux)
- On Linux: Install with `sudo apt-get install build-essential`
- On macOS: Install Xcode Command Line Tools: `xcode-select --install`

## Project Files

- **Source Files** (`src/`): Implementation files
  - `main.cpp`: Entry point
  - `hucre.cpp`: Cell implementation
  - `doku.cpp`: Tissue implementation
  - `organ.cpp`: Organ with AVL tree
  - `sistem.cpp`: System implementation
  - `sistemnode.cpp`: System node for linked list
  - `organizma.cpp`: Organism implementation
  - `kontrol.cpp`: Control and data processing
  - `radix.cpp`: Radix sort algorithm

- **Header Files** (`include/`): Class declarations and interfaces

## License

This project appears to be an academic assignment (based on file `g211210554.pdf`).

