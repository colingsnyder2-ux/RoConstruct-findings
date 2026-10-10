// from server: 83% by colin
struct CXTPPropertyGridInplaceButton {
    char pad[0x2c];
    void* m_pInplaceEdit;
    void OnKeyDown(unsigned int nChar);
};

void CXTPPropertyGridInplaceButton::OnKeyDown(unsigned int nChar)
{
    if (m_pInplaceEdit != 0)
        return;
    if (nChar == 0x20 || nChar == 0x28 || nChar == 0x0d || nChar == 0x73)
    {
        void* p = m_pInplaceEdit;
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(void*, unsigned int) = (void (__thiscall *)(void*, unsigned int))vtbl[0xd0 / 4];
        fn(p, nChar);
    }
}
