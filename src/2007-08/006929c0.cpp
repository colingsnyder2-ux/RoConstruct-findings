// from server: 100% by colin
// roc 2007-08 006929c0  unit: CXTPStatusBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006929c0
//
// 006929c0  e80bfaffff           call 0x6923d0
// 006929c5  85c0                 test eax, eax
// 006929c7  7503                 jne 0x6929cc
// 006929c9  c20800               ret 8
// 006929cc  8b4068               mov eax, dword ptr [eax + 0x68]
// 006929cf  c20800               ret 8

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
