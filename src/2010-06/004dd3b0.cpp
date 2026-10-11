// from server: 57% by atomic.potato
struct S_func_004dd3b0 {
    unsigned int m_bits;
    char pad[8];
    unsigned char* m_data;
    void f();
};

extern "C" void __stdcall sub_004dd160(int);

void S_func_004dd3b0::f()
{
    sub_004dd160(1);
    unsigned int bits = m_bits;
    unsigned int idx = bits >> 3;
    unsigned int rem = bits & 7;
    if (rem == 0) {
        m_data[idx] = 0x80;
    } else {
        unsigned char mask = (unsigned char)(0x80 >> rem);
        m_data[idx] |= mask;
    }
    m_bits = bits + 1;
}
