// from server: 97% by atomic.potato
extern "C" void __cdecl sub_0080B1D8(void*, int, int, const char*);
extern "C" void __cdecl sub_0080A304(void*);

struct S_00530360 {
    void* m_data;
    int m_unused;
    unsigned int m_count;
    void f();
};

void S_00530360::f()
{
    if (m_count > 0 && m_data != 0) {
        char* p = (char*)m_data - 4;
        sub_0080B1D8(m_data, 8, *(int*)p, ",SUVW");
        sub_0080A304(p);
    }
}
