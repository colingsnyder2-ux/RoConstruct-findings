// roc 2009-06 0077ff60  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077ff60
//
// 0077ff60  e8dbf9ffff           call 0x77f940
// 0077ff65  85c0                 test eax, eax
// 0077ff67  7503                 jne 0x77ff6c
// 0077ff69  c20800               ret 8
// 0077ff6c  8b4068               mov eax, dword ptr [eax + 0x68]
// 0077ff6f  c20800               ret 8
// copied from an identical function in another client (function ?GetValue@CXTPStatusBar@ns_ROCX000001@@QAEHHH@Z)

namespace ns_ROCX000001 {
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
