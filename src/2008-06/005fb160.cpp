// from server: 54% by colin
struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct S_func_005fab50 {
    char pad0[4];
    int m_x;
    int m_y;
    void f(int* p);
};

struct S {
    char pad0[16];
    char* m_ptr;
    void f(int arg);
};

void S::f(int arg)
{
    char* esi = m_ptr;
    int ebp = *(int*)(esi + 0x28);
    S_func_005fab50* s = (S_func_005fab50*)(esi + 0x24);
    S_func_005fa610* obj = (S_func_005fa610*)arg;
    int* p = obj->f();
    *p = ebp;
    s->f(&arg);
    S* self = (S*)m_ptr;
    self->f(arg);
}
