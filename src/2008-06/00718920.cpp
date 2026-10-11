// from server: 38% by atomic.potato
struct S_func_00718890 {
    void* f();
};

struct S_func_00718920 {
    int f(int, int, int, int, int);
};

extern "C" void* __stdcall GetProcAddress(void*, const char*);

int S_func_00718920::f(int a1, int a2, int a3, int a4, int a5)
{
    S_func_00718890 s;
    char* p = (char*)s.f();
    if (*(void**)(p + 0xc) != 0 && *(void**)(p + 8) == 0) {
        *(void**)(p + 8) = GetProcAddress(*(void**)(p + 0xc), (const char*)0x85e5d8);
    }
    void* fn = *(void**)(p + 8);
    if (fn == 0)
        return (int)0x80004005;
    int args[5];
    args[0] = a1;
    args[1] = a2;
    args[2] = a3;
    args[3] = a4;
    args[4] = a5;
    typedef int (__stdcall *Fn)(void*, int*);
    return ((Fn)fn)(0, args);
}
