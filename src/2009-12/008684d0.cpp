// from server: 66% by atomic.potato
struct I_func_00867950
{
    char pad[324];
    int m_x;
};

struct S_func_00867950
{
    char pad[176];
    I_func_00867950* m_p;
    int f();
};

int S_func_00867950::f()
{
    return m_p->m_x;
}

struct S_func_008684d0
{
    int f(int a0);
};

extern "C" int sub_00867950(S_func_008684d0*);
extern "C" void sub_007f3e30(S_func_008684d0*);

int S_func_008684d0::f(int a0)
{
    S_func_008684d0* p = this;
    int* v = (int*)sub_00867950(p);
    int (__cdecl *fn)(int*, int, int, int) =
        (int (__cdecl *)(int*, int, int, int))((int*)*v + 6);
    fn(v, a0, 0, 1);
    sub_007f3e30(p);
    return 0;
}
