// from server: 46% by tester
struct S_func_006f7b60
{
    char pad0[0x54];
    int m54;
    int m58;
    void f();
};

extern "C" void __stdcall sub_006f7460(void*, int, int);
extern "C" void __stdcall sub_006f7300();
extern "C" void* __stdcall sub_0077dd98(int, int);
extern "C" void __stdcall sub_0077ddbc(void*);

void S_func_006f7b60::f()
{
    if (m54 != m58)
    {
        int tmp;
        sub_006f7460(&tmp, m58, -1);
        void* p = sub_0077dd98(m54, 0);
        sub_006f7300();
        m58 = m54;
        sub_0077ddbc(&tmp);
    }
}
