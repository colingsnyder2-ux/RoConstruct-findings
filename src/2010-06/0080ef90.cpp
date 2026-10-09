// roc 2010-06 0080ef90  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080ef90
//
// 0080ef90  e8dbf9ffff           call 0x80e970
// 0080ef95  85c0                 test eax, eax
// 0080ef97  7503                 jne 0x80ef9c
// 0080ef99  c20800               ret 8
// 0080ef9c  8b4068               mov eax, dword ptr [eax + 0x68]
// 0080ef9f  c20800               ret 8
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
