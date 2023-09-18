#include <stdio.h>
#include <stdlib.h>

int main() {
#ifdef _WIN32
    // If windows
    system("shutdown /s /f /t 0");
#else
    //If Linux 
    system("shutdown -h now");
#endif
    return 0;
}
