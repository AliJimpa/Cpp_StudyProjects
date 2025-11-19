#pragma once

#define LOG(x) std::cout << x << std::endl

void Log(const char *message);
void InitLog();


// inline means you body function will copy ervey were your code called
// inline void Log(const char *message)
// {
//     std::cout << message << std::endl;
// }

// // Means just your tansittion have log function
// static void Log(const char* message)
// {
//     std::cout << message << std::endl;
// }