// from server: 36% by colin
struct S_func_004a4d50 {
    void f(int, int);
};

extern "C" void __stdcall sub_77e6a4(void*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" int __cdecl sub_52c940(const char*, int);
extern "C" void __cdecl sub_630a1e(void);
extern "C" void __cdecl sub_4a1f00(void);

void S_func_004a4d50::f(int a, int b)
{
    char buf[16];
    sub_77e6a4(buf);
    sub_4a1f00();
    int len = *(int*)(buf + 20);
    const char* p;
    if (len >= 16)
        p = *(const char**)(buf + 4);
    else
        p = buf + 4;
    int r = sub_52c940(p, -1);
    *(int*)b = r;
    sub_77e6ac(buf);
}
