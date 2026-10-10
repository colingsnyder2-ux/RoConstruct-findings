// from server: 65% by atomic.potato
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct S_func_00422b70
{
    void* f();
};

void* S_func_00422b70::f()
{
    return this;
}

struct CXTPControlComboBoxList
{
    long f(long, long);
};

long CXTPControlComboBoxList::f(long a, long b)
{
    S_func_00422b70* p = (S_func_00422b70*)0x422b70;
    void* h = p->f();
    return SendMessageA(h, 0x1a2, a, b);
}
