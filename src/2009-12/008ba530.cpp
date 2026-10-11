// from server: 35% by atomic.potato
struct B_func_008396f0 { virtual ~B_func_008396f0(); };
struct S_func_008396f0 : B_func_008396f0 { ~S_func_008396f0(); };

struct Inner_008396c0 {
    int f0;
    int f1;
    int f2;
    int f3;
    int f4;
    int f5;
    void ctor(int);
};

struct S_func_008ba530 {
    char pad0[0x18];
    int state;
    char pad1[0x150 - 0x1c];
    int field150;
    int method();
};

int S_func_008ba530::method()
{
    if (state == 1)
        return field150;
    if (state == 3)
    {
        Inner_008396c0 local;
        local.ctor(10);
        int out = 0;
        int* p = &out;
        ((void (__thiscall*)(S_func_008ba530*, int*, int))*(void**)(*(int*)this + 0xc))(this, p, 1);
        if (out == 1)
        {
            int v = 0;
            if (out != 0)
                v = 1;
            if (v == 0)
                v = 0;
            int r = *(int*)(v + 8);
            if (r != 0)
                r -= 0x54;
            else
                r = 0;
            int result = *(int*)(r + 0x1a4);
            return result;
        }
    }
    return 0;
}
