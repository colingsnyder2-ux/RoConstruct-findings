// from server: 75% by atomic.potato
extern "C" void G1_func_007fa140(void*, void*);

struct S_func_0088b460 {
    void f(void*);
    void* m_60;
};

void S_func_0088b460::f(void* p)
{
    G1_func_007fa140(this, p);
    void** v = (void**)m_60;
    void (__fastcall *fn)(void*, void*) = (void (__fastcall *)(void*, void*))((char*)*(void**)v + 0x150);
    fn(m_60, 0);
}
