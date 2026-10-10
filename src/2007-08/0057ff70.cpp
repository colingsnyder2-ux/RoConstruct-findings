// from server: 46% by colin
struct Workspace {
    void formatTime(double seconds);
};

extern "C" int __stdcall sprintf(char* buffer, const char* format, ...);
extern "C" void* __stdcall getStringCtor();

void Workspace::formatTime(double seconds)
{
    char buffer[64];
    buffer[0] = 0;

    if (seconds == 0.0) {
        sprintf(buffer, "%.3gs", seconds);
    } else if (seconds < 0.0) {
        sprintf(buffer, "%.3gs", seconds);
    } else if (seconds >= 1000.0) {
        sprintf(buffer, "%.3gs", seconds);
    } else {
        sprintf(buffer, "%.3gms", seconds * 1000.0);
    }

    void* p = getStringCtor();
    ((void (__thiscall*)(void*, char*))0x77e698)(p, buffer);
}
