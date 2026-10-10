// from server: 60% by tester
struct S_func_005804b0 {
    char pad0[8];
    int m_x;
    int __cdecl f(int a);
};

extern "C" int __stdcall _snprintf(char*, unsigned int, const char*, ...);
extern "C" void __stdcall sub_77e698();
extern "C" void __stdcall sub_77e85c();

int S_func_005804b0::f(int a)
{
    char buf[16];
    int zero = 0;
    _snprintf(buf, 16, (const char*)0x78d3a0, *(int*)a);
    sub_77e698();
    return a;
}
