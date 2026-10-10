// from server: 79% by colin
struct Log {
    char pad[4];
    void __cdecl construct(const char* logFile);
};

void Log::construct(const char* logFile) {
    char buf[4];
    *(int*)buf = 0;
    const char* name = (logFile[0] != 0) ? "true" : "false";
    void* p = buf;
    extern void __stdcall string_ctor(void*, const char*);
    string_ctor(p, name);
}
