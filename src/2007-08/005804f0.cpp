// from server: 65% by colin
struct Log {
    void __cdecl writeEntry(int severity, const char* message);
};

extern "C" int __cdecl _snprintf(char*, unsigned int, const char*, ...);
extern "C" void* __stdcall sub_77E85C();
extern "C" void* __stdcall sub_77E698();

void Log::writeEntry(int severity, const char* message)
{
    char buffer[16];
    buffer[0] = 0;
    _snprintf(buffer, 16, "%s", message);
    sub_77E698();
}
