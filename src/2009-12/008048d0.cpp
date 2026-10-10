// from server: 44% by atomic.potato
extern "C" void __cdecl G1_func_008634a0(void*, void*, void*, void*);

struct S_func_008048d0 {
    char pad[0x174];
    void* m_p174;
    void f(void*, void*, void*);
};

void S_func_008048d0::f(void* a, void* b, void* c)
{
    if (m_p174)
        G1_func_008634a0(this, c, b, a);
}
