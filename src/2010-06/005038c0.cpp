// from server: 58% by atomic.potato
struct S_func_005038c0 {
    void **m_data;
    unsigned int m_count;
    void f(unsigned int index);
};

void S_func_005038c0::f(unsigned int index)
{
    if (index < m_count - 1) {
        while (++index < m_count - 1) {
            m_data[index * 2] = m_data[index * 2 + 2];
            m_data[index * 2 + 1] = m_data[index * 2 + 3];
        }
        --m_count;
    }
}
