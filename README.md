# C++ Learning & Rendering Journey
A personal repository documenting my journey from **basic to advanced C++**, including data structures, algorithms, system-level concepts.
This repo is both a **learning hub** and a **playground** where I experiment, implement, and explore C++ deeply.
## 🧭 Overview
This project contains:
- Fundamental C++ concepts  
- Intermediate & advanced C++ features  
- Hands-on exercises  
- Mini-projects  
- Rendering experiments (future work)  
- Notes, references, and best practices  
- A clean and organized folder structure for easy navigation
  
## 📁 Project Structure
Any project in this repo is based on this folder structure and by default has a VSCode task for compiling with Cl
```bash
ProjectName/
│
├── src/                → All .cpp source files
│   ├── core/
│   ├── systems/
│   ├── utils/
│   └── main.cpp
│
├── include/            → All .h / .hpp header files (public)
│   └── ProjectName/
│       ├── core/
│       ├── systems/
│       └── utils/
│
├── libs/               → Third-party static libraries (.lib, .a)
│
├── external/           → Third-party source (e.g., glm, SDL, imgui)
│
├── assets/             → (Optional) for game dev: audio, textures, models
│
├── build/              → Build output (not committed to git)
│
├── tests/              → Unit tests
│
├── cmake/              → CMake scripts (if you use CMake)
│
├── docs/               → Documentation
│
└── CMakeLists.txt      → Build configuration (if using CMake)
```
> *(You can adjust the structure to match your actual folders.)*
## ✨ Features
### Current
- Clean examples from basic to advanced C++
- Organized learning modules  
- Hands-on implementation of OOP & STL  
- Memory management and smart pointer usage  
- Simple mini-projects for practice  
- CMake-based build setup  
### Upcoming
- Math utilities for rendering  
- CPU-based rasterizer  
- Shader simulation  
- Mesh loading & basic scene system  
- Real-time rendering experiments  
## 🛠️ Tech Stack
- **C++17 / C++20**
- **CMake** for build configuration  
- **Clang / GCC / MSVC** (compatible)  
- Optional: **GLM**, **STB**, etc. (for future rendering)
## 🚀 How to Build
### Clone the repo
```bash
git clone https://github.com/AliJimpa/Cpp_StudyProject.git
cd Cpp_StudyProject
```
### Build
```bash
mkdir build
cd build
cmake ..
cmake --build .
./bin/anyexecutable
```
## 📚 Learning Goals
- Master modern C++ (memory, templates, STL, etc.)
- Understand low-level system behavior
- Build strong problem-solving & algorithmic thinking
- Prepare for graphics, engine, and rendering development
- Implement my own rendering pipeline from scratch
