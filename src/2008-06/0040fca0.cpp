// from server: 18% by colin




struct UIEnumConnections {
    char pad[0xc];
    int m_begin;
    int m_end;
    long Skip(unsigned long celt, void* rgelt);
};

long UIEnumConnections::Skip(unsigned long celt, void* rgelt) {
    if (rgelt == 0)
        return 0x80070057;
    int count = (m_end - m_begin) >> 3;
    unsigned long n = celt;
    if (n > (unsigned long)count)
        n = (unsigned long)count;
    m_end = m_begin + (int)(n * 8);
    return (celt != n) ? 1 : 0;
}
