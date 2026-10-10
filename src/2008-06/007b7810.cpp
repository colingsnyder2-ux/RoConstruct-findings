// from server: 50% by atomic.potato
struct S_func_007b7810 {
    char pad[12];
    void *m_value;
    void f(void *);
};

extern "C" void __stdcall sub_00598fa0(void *, void *);

void S_func_007b7810::f(void *p)
{
    *(void **)p = 0;
    *(void **)((char *)p + 8) = 0;
    sub_00598fa0(p, m_value);
}
