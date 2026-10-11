// from server: 59% by atomic.potato
typedef void (__cdecl *FunctionType)(int, int, int, const char *, int, int);

extern "C" void __cdecl FunctionA(int, int, int, const char *, int, int);
extern "C" void __cdecl FunctionB(const char *);

void Function()
{
    FunctionA(0x9e3e6c, 0x9d1b80, 0xd0, (const char *)2, 0, 0);
    FunctionB("MouseEnterConnectionCount");
}
