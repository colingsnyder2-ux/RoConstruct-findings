// roc 2011-06 0086c720  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c720
//
// 0086c720  e8dbf9ffff           call 0x86c100
// 0086c725  85c0                 test eax, eax
// 0086c727  7503                 jne 0x86c72c
// 0086c729  c20800               ret 8
// 0086c72c  8b4068               mov eax, dword ptr [eax + 0x68]
// 0086c72f  c20800               ret 8
// copied from an identical function in another client (function ?GetValue@CXTPStatusBar@ns_ROCX00003c@@QAEHHH@Z)

namespace ns_ROCX00003c {
struct CXTPStatusBar;

struct Helper
{
    CXTPStatusBar* GetStatusBar();
};

struct CXTPStatusBar
{
    char pad[0x68];
    int value;
    int GetValue(int a, int b);
};

int CXTPStatusBar::GetValue(int a, int b)
{
    Helper* h = (Helper*)this;
    CXTPStatusBar* p = h->GetStatusBar();
    if (p == 0)
        return 0;
    return p->value;
}
}
