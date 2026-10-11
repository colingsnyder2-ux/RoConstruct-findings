// from server: 56% by atomic.potato
struct S_func_00567d50 {
    unsigned int m_bits;
    char pad[8];
    unsigned char* m_data;
    void sub_00567970(int);
    void f();
};

void S_func_00567d50::f()
{
    sub_00567970(1);
    unsigned int v = m_bits;
    unsigned int idx = v >> 3;
    unsigned int rem = v & 7;
    if (rem == 0)
    {
        m_data[idx] = 0x80;
    }
    else
    {
        m_data[idx] |= (unsigned char)(0x80 >> rem);
    }
    m_bits++;
}
