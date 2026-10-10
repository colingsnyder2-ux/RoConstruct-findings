// from server: 53% by atomic.potato
struct S_func_004dcf70
{
    unsigned int m_pad;
    unsigned int m_count;
    unsigned char* m_data;
    unsigned char f();
};

unsigned char S_func_004dcf70::f()
{
    unsigned int index = m_count;
    unsigned char result = (unsigned char)(m_data[index >> 3] & (0x80 >> (index & 7)));
    m_count = index + 1;
    return result != 0;
}
