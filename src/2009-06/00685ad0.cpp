// from server: 25% by atomic.potato
extern "C" void __cdecl deallocate_buffer(void *, unsigned int);
extern "C" void destroy_streambuf(void *);

struct S_func_00685ad0
{
    char pad0[0x44];
    unsigned char m_flag44;
    char pad45[7];
    void *m_buffer4c;
    void *m_allocator50;
    int f();
};

int S_func_00685ad0::f()
{
    if (m_buffer4c != 0)
        deallocate_buffer(m_buffer4c, (unsigned int)m_allocator50);

    m_flag44 = 0;
    destroy_streambuf(this);
    return 0;
}
