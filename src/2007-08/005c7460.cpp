// from server: 1% by colin
extern "C" int __cdecl _errno();
extern "C" int __cdecl _pclose(void*);
extern "C" char* __cdecl strerror(int);

extern "C" void* __stdcall GetLastError();
extern "C" int __stdcall CloseHandle(void*);
extern "C" void* __stdcall GetCurrentProcess();

struct lua_exception {
    int f(void* a);
};

int lua_exception::f(void* a) {
    void* h;
    int r;
    int e;
    int ok;
    void* p;

    h = (void*)0;
    r = 0;
    e = 0;
    ok = 0;
    p = 0;

    h = (void*)0;
    r = 0;
    e = 0;
    ok = 0;
    p = 0;

    return 0;
}
