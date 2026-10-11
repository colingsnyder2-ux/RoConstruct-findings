// from server: 60% by atomic.potato
struct S_func_004ecf90 {
    unsigned int m_pos;
    char pad[8];
    unsigned char *m_bytes;
    void f();
};

struct S_sub_004ecbd0 {
    void g();
};

void S_func_004ecf90::f()
{
    ((S_sub_004ecbd0 *)this)->g();
    unsigned int pos = m_pos;
    unsigned int byteIndex = pos >> 3;
    unsigned int bitIndex = pos & 7;
    if (bitIndex == 0) {
        m_bytes[byteIndex] = 0x80;
    } else {
        m_bytes[byteIndex] |= (unsigned char)(0x80 >> bitIndex);
    }
    m_pos = pos + 1;
}
