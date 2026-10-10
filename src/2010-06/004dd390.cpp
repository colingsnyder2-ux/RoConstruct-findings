// from server: 85% by atomic.potato
extern "C" void __stdcall sub_004dd160(void *, int);

struct S_func_004dd390 {
    unsigned int m_value;
    unsigned char *m_pad;
    unsigned char *m_data;
    void f();
};

void S_func_004dd390::f()
{
    sub_004dd160(this, 1);
    if ((m_value & 7) == 0)
        m_data[m_value >> 3] = 0;
    ++m_value;
}
