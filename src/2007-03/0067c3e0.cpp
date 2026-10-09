// roc 2007-03 0067c3e0  unit: seg_00670000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067c3e0
//
// 0067c3e0  e80bfaffff           call 0x67bdf0
// 0067c3e5  85c0                 test eax, eax
// 0067c3e7  7503                 jne 0x67c3ec
// 0067c3e9  c20800               ret 8
// 0067c3ec  8b4068               mov eax, dword ptr [eax + 0x68]
// 0067c3ef  c20800               ret 8
// copied from an identical function in another client (function ?GetValue@CXTPStatusBar@ns_ROCX000017@@QAEHHH@Z)

namespace ns_ROCX000017 {
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
