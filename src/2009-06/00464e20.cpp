// from server: 55% by atomic.potato
struct S_func_00462040 {
    char pad0[88];
    int m_x;
    int* f();
};

struct S_00464e20 {
    int f(int);
};

extern "C" int* __stdcall f_00462040(int, int);

int S_00464e20::f(int a)
{
    int* p = f_00462040(0, 1);
    int r = ((int (__thiscall*)(int*, int))0x461290)(p, 0);
    r = -r;
    r = (int)((unsigned int)r >> 31);
    r = -r;
    return (*(int (__thiscall**)(S_00464e20*, int))(*(int*)this + 4))(this, r);
}
