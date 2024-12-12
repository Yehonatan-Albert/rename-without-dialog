#include <windows.h>

int main() {
    while (true) {
        HWND hwnd = FindWindowExW(GetDesktopWindow(), NULL, L"#32770", L"‏‏שינוי שם");
        if (hwnd) {
            PostMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
            Sleep(2000);
        }
        Sleep(100);
    }
}
