// from server: 94% by colin
struct S_func_005e6110 {
    char pad0[64];
    int m_x;
    int f();
};

struct I_func_005e6160 {
    char pad[160];
    int m_x;
};

struct S_func_005e6160 {
    char pad[28];
    I_func_005e6160* m_p;
    int f();
};

extern float __cdecl infinity();

struct S_func_00645840 {
    int field0;
    int field4;
    void f(int);
};

struct S_func_0064d180 {
    void f(int);
};

struct S_func_0064d2a0 {
    void f(int);
};

void S_func_0064d2a0::f(int a)
{
    S_func_005e6110* p = (S_func_005e6110*)a;
    int r = p->f();
    ((S_func_0064d180*)this)->f(r);
    if (r != 0) {
        int* vt = *(int**)r;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0];
        fn((void*)r, 1);
    }
    int v = ((S_func_005e6160*)a)->f();
    int* vt2 = *(int**)this;
    int (__thiscall *fn2)(void*) = (int (__thiscall *)(void*))vt2[3];
    int res = fn2((void*)this);
    infinity();
    int* vt3 = *(int**)a;
    void (__thiscall *fn3)(void*) = (void (__thiscall *)(void*))vt3[2];
    fn3((void*)a);
    ((S_func_00645840*)a)->f((int)this);
}
