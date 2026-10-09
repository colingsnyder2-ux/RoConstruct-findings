// roc 2008-06 0070e890  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e890
//
// 0070e890  e85bf8ffff           call 0x70e0f0
// 0070e895  85c0                 test eax, eax
// 0070e897  7503                 jne 0x70e89c
// 0070e899  c20800               ret 8
// 0070e89c  8b4068               mov eax, dword ptr [eax + 0x68]
// 0070e89f  c20800               ret 8
// copied from an identical function in another client (function ?GetValue@CXTPStatusBar@ns_ROCX00000b@@QAEHHH@Z)

namespace ns_ROCX00000b {
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
