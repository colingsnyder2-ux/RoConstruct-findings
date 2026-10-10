// from server: 74% by colin
struct CXTPControlSelector
{
    char pad[0x168];
    int m_168;
    int m_16c;
    char pad2[0x178 - 0x170];
    int m_178;
    int m_17c;
    char pad3[0x190 - 0x180];
    int m_190;
    int m_194;
    int m_198;
    void func_67eb10(int, int, int);
    void func_67f260(int);
};

void CXTPControlSelector::func_67f260(int arg)
{
    if (m_198 == 0)
    {
        m_178 = 0;
        m_17c = 0;
        m_190 = m_168;
        m_194 = m_16c;
    }
    func_67eb10(m_178, m_17c, 1);
}
