// from server: 78% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __stdcall func_00763c00(
    void *, void *, const char *, const char *, const char *, int);

extern "C" void __cdecl func_007f4929(DWORD);

void func_0097b600()
{
    func_00763c00(
        (void *)0xb97b38,
        (void *)0x512780,
        0,
        (const char *)0x9e7b70,
        (const char *)0x9bb19c,
        1);
    func_007f4929(0x989960);
}
