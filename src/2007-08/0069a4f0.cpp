// from server: 80% by colin
struct CXTPPropertyGridItemColor {
    void SetValue(int);
    void OnValueChanged();
    char pad[0x100];
    int m_nValue;
    int* m_pValue;
};

extern void __stdcall func_0069a400(int* p, int v);

void CXTPPropertyGridItemColor::SetValue(int value) {
    m_nValue = value;
    if (m_pValue != 0) {
        *m_pValue = value;
    }
    func_0069a400(&value, value);
    OnValueChanged();
}
