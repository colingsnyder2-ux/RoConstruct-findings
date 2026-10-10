// from server: 65% by atomic.potato
extern "C" long __stdcall SendMessageA(void *, unsigned int, unsigned int, long);

struct S_func_00422b70
{
    void *f();
};

void *S_func_00422b70::f()
{
    return this;
}

struct CXTPControlComboBoxList
{
    void f(void *);
};

void CXTPControlComboBoxList::f(void *arg)
{
    S_func_00422b70 *p = (S_func_00422b70 *)arg;
    void *q = p->f();
    SendMessageA(0, 0x197, 0, *(unsigned long *)((char *)q + 0x20));
}
