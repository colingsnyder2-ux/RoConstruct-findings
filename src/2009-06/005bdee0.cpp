// from server: 35% by atomic.potato
struct S_func_004da260 {
    int m_x;
    int f();
};

struct S_func_00485c90 {
    char pad0[4];
    int m_x;
    int f();
};

struct S_005bdee0 {
    int f(int a, S_func_004da260* b);
};

int S_005bdee0::f(int a, S_func_004da260* b)
{
    int v = b->f();
    int w = ((S_func_00485c90*)b)->f();
    return ((int (__thiscall*)(void*, int, int))0x5bdfa0)(this, a, w);
}
