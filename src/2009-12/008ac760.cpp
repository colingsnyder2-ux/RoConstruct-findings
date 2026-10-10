// from server: 62% by atomic.potato
extern "C" void __stdcall G1_func_007f3e30(void*);

struct S_func_008ac760 {
    virtual void f0();
    unsigned char m_data[0x3c];
    unsigned char m_flags;
    void f();
};

void S_func_008ac760::f()
{
    G1_func_007f3e30(this);
    if (m_flags & 0x10)
        f0();
}
