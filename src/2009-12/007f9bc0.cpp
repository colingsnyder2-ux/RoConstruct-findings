// from server: 70% by atomic.potato
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct S_func_00422b70 {
    void* f();
};

void* S_func_00422b70::f()
{
    return this;
}

struct CXTPControlComboBoxList {
    void g(void*, void*);
};

void CXTPControlComboBoxList::g(void* a, void* b)
{
    S_func_00422b70* p = (S_func_00422b70*)this;
    void* q = p->f();
    SendMessageA(*(void**)((char*)q + 0x20), 0x18f, (unsigned int)b, (long)a);
}
