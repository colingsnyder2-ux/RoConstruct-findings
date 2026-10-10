// from server: 73% by tester
struct CXTTreeBase
{
    char pad_0000[0x460];
    int  m_kind;
    int  m_value;
    int  getValue();
};

extern "C" void __stdcall sub_006f9380();
extern "C" void* __stdcall sub_00668f70();

struct CXTPPropertyGridNativeXPTheme
{
    char pad_0000[0x3c];
    int m_nTheme;
    void Refresh();
};

void CXTPPropertyGridNativeXPTheme::Refresh()
{
    sub_006f9380();
    CXTTreeBase* p = (CXTTreeBase*)sub_00668f70();
    int v = p->getValue();
    v -= 1;
    if (v == 0)
    {
        m_nTheme = 0xb99d7f;
        return;
    }
    v -= 1;
    if (v == 0)
    {
        m_nTheme = 0x7fb9a4;
        return;
    }
    v -= 1;
    if (v != 0)
        return;
    m_nTheme = 0xb99d7f;
}
