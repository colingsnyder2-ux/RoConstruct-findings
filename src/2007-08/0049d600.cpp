// from server: 95% by colin
struct T_func_0049d600 {
    void m();
};

extern "C" void __cdecl func_0049c920(int, int, int);
extern "C" void __stdcall func_0049c600();
extern void* G_func_0077e6d8;

void T_func_0049d600::m()
{
    int* p = *(int**)((char*)this + 0xc0);
    if (p == 0)
        return;
    void (*fn)() = *(void(**)())&G_func_0077e6d8;
    int a = p[2];
    if ((unsigned)p[1] > (unsigned)a)
        fn();
    p = *(int**)((char*)this + 0xc0);
    int b = p[1];
    if ((unsigned)b > (unsigned)p[2])
        fn();
    func_0049c920(b, a, (int)&func_0049c600);
}
