// from server: 70% by atomic.potato
typedef void (__cdecl *Func1)(int, int, int, int, int);
typedef void (__thiscall *Func2)(int);

Func1 g_func1 = (Func1)0x006e8210;
Func2 g_func2 = (Func2)0x007f4929;

void func_009768f0()
{
    g_func1(300, 0, 0x009db3ac, 0x009db38c, 1);
    g_func2(0x00986880);
}
