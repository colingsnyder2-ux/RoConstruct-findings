// from server: 69% by atomic.potato
// roc 2009-12 008a1450  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1450

extern "C" unsigned long __stdcall GetSysColorBrush(int);

struct CXTPReportInplaceEdit {
    char pad[0x8c];
    unsigned long m_nBrush;
    void SetTextColor(unsigned long *pColor);
};

void CXTPReportInplaceEdit::SetTextColor(unsigned long *pColor) {
    unsigned long brush = m_nBrush;
    unsigned long *vtbl = *(unsigned long **)pColor;
    void (__stdcall *fn)(unsigned long *, unsigned long) = (void (__stdcall *)(unsigned long *, unsigned long))vtbl[0x38 / 4];
    fn(pColor, brush);
    GetSysColorBrush(5);
}
