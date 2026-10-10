// from server: 52% by atomic.potato
struct I_func_0086d3b0 {
    char pad[648];
    int m_x;
};

struct S_func_0086d3b0 {
    char pad[60];
    I_func_0086d3b0* m_p;
    int f();
};

int S_func_0086d3b0::f()
{
    return m_p->m_x;
}

struct CXTPReportColumn {
    char m_pad[88];
    int m_value;
    int m_pControl;
    void SetValue(int value);
};

void CXTPReportColumn::SetValue(int value)
{
    if (value != m_value) {
        m_value = value;
        S_func_0086d3b0* p = (S_func_0086d3b0*)m_pControl;
        p->f();
    }
}
