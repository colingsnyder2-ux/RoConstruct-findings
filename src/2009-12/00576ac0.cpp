// from server: 68% by atomic.potato
extern "C" void* __cdecl sub_00460e60(int);

struct S_func_00576ac0 {
    int f(int a, int b, int c);
};

int S_func_00576ac0::f(int a, int b, int c)
{
    void* p = sub_00460e60(0);
    ((void (__thiscall *)(void*, int, int, int))0x575a20)(p, a, b, c);
    return a;
}
