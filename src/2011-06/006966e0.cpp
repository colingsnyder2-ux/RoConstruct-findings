// from server: 63% by atomic.potato
extern "C" int __cdecl type_info_equal(void *, void *);

struct S_func_006966e0 {
    int **m_value;
    void f();
};

void S_func_006966e0::f()
{
    type_info_equal((void *)0xc2a660, (void *)m_value[1]);
}
