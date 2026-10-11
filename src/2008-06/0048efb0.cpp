// from server: 21% by tester
extern "C" void* __stdcall malloc(unsigned int size);

struct S_func_0048efb0 {
    void* m_p;
    int f(void* a, void* b);
};

int S_func_0048efb0::f(void* a, void* b)
{
    void* p = malloc(0x424);
    m_p = p;
    if (p == 0) {
        ((void (__thiscall*)(void*, int))0x5d3490)(p, 1);
    } else {
        p = 0;
    }
    ((void (__thiscall*)(void*, void*, void*))0x48ef00)(this, p, a);
    return (int)this;
}
