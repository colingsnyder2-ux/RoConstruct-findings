// from server: 51% by atomic.potato
struct S_func_00422b70
{
    void* f();
};

void* S_func_00422b70::f()
{
    return this;
}

extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

void f()
{
    S_func_00422b70 s;
    void* p = s.f();
    SendMessageA(0, 0, 0x188, *(unsigned long*)((char*)p + 0x20));
}
