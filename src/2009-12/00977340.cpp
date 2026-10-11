// from server: 82% by atomic.potato
extern void __cdecl G1_func_006f3540(int, int, int, int, int);
extern void __stdcall G2_func_007f4929(int);

struct S
{
    void f();
};

void S::f()
{
    G1_func_006f3540(0x9dc584, 0x9dc494, 0x71d200, 0x71d370, 0x0f);
    G2_func_007f4929(0x986f80);
}
