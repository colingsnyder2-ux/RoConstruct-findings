// from server: 64% by atomic.potato
struct S_func_00422b70
{
    void* f();
};

void* S_func_00422b70::f()
{
    return this;
}

extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPControlComboBoxList
{
    long f(void*);
};

long CXTPControlComboBoxList::f(void* a)
{
    S_func_00422b70* p = (S_func_00422b70*)0x422b70;
    void* q = p->f();
    return SendMessageA(a, 0x186, 0, *(unsigned long*)((char*)q + 0x20));
}
