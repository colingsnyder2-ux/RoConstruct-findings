// roc 2009-12 0085afc0  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085afc0
//
// 0085afc0  e8dbf9ffff           call 0x85a9a0
// 0085afc5  85c0                 test eax, eax
// 0085afc7  7503                 jne 0x85afcc
// 0085afc9  c20800               ret 8
// 0085afcc  8b4068               mov eax, dword ptr [eax + 0x68]
// 0085afcf  c20800               ret 8
// copied from an identical function in another client (function ?GetValue@CXTPStatusBar@ns_ROCX00000f@@QAEHHH@Z)

namespace ns_ROCX00000f {
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
