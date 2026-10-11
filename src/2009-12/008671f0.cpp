// from server: 50% by atomic.potato
struct CXTPPropertyGridItemColor {
    char pad0[0x10c];
    int m_nValue;
    char pad1[4];
    int* m_pValue;
    void SetValue(int);
};

void CXTPPropertyGridItemColor::SetValue(int value) {
    m_nValue = value;
    if (m_pValue)
        *m_pValue = value;
    int* p = &value;
    void sub_8670F0(int*, int*);
    sub_8670F0(p, &value);
    void sub_8651F0();
    sub_8651F0();
}
