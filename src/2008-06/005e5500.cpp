// from server: 93% by king_originala
struct S_func_006cb020 {
    char pad0[32];
    int m_x;
    int f();
};

struct Joint {
    void f(int);
};

void __stdcall func(void*, S_func_006cb020* p)
{
    int value = p->f();
    if (value)
        reinterpret_cast<Joint*>(value - 0x140)->f(0);
}
