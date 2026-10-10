// from server: 67% by atomic.potato
struct S_func_007933a0 {
    char pad[140];
    int *m_data;
    int f(unsigned int index);
};

int S_func_007933a0::f(unsigned int index)
{
    int count = (m_data[2] - m_data[1]) / 4;
    if (index >= (unsigned int)count)
        return -1;
    return m_data[1 + index];
}
