// from server: 95% by colin
struct I_func_005e7560 {
    char pad[36];
    int m_x;
};

struct S_func_005e7560 {
    char pad[92];
    I_func_005e7560* m_p;
    int f();
};

struct S_func_00645830 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct S_func_0060d0d0 {
    char pad0[4];
    int m_x;
    void f(void* a1);
};

struct S_func_0064ae10 {
    char pad0[4];
    int m_x;
    void f(void* a1, int a2);
};

struct S_target {
    char pad0[8];
    int m_x;
    char pad1[0x18];
    int m_y;
    char pad2[0x178];
    int m_z;
    char pad3[0xcc];
    int m_w;

    void f(void* a1);
};

void S_target::f(void* a1)
{
    S_func_005e7560* p1 = *(S_func_005e7560**)((char*)a1 + 0xc);
    p1->f();
    S_func_005e7560* p2 = *(S_func_005e7560**)((char*)a1 + 0x10);
    p2->f();

    ((S_func_00645830*)a1)->f((int)this);

    int r = (*(int (__thiscall**)(void*))(*(int*)a1 + 0xc))(a1);
    if (r == 1) {
        int v = *(int*)((char*)this + 0x1a4);
        void* p = (char*)this + 0x1a0;
        void* tmp = a1;
        *(int*)((char*)a1 + 0x24) = v;
        ((S_func_0060d0d0*)p)->f(&tmp);
        *(int*)((char*)a1 + 8) = 1;
        ++*(int*)((char*)this + 0xd0);
    } else {
        *(int*)((char*)a1 + 8) = 2;
        ((S_func_0064ae10*)this)->f(a1, 1);
    }
}
