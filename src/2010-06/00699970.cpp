// from server: 80% by atomic.potato
struct S_func_00699970 {
    int m_value;
    char f(char flag);
};

char S_func_00699970::f(char flag)
{
    if (flag != 0) {
        if (m_value <= 1)
            return 0;
        m_value /= 2;
        return 1;
    }

    if (m_value >= 16)
        return 0;
    m_value *= 2;
    return 1;
}
