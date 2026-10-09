// roc 2009-12 0085b3e0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b3e0
//
// 0085b3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0085b3e4  50                   push eax
// 0085b3e5  e816ffffff           call 0x85b300
// 0085b3ea  85c0                 test eax, eax
// 0085b3ec  7503                 jne 0x85b3f1
// 0085b3ee  c20400               ret 4
// 0085b3f1  8b4028               mov eax, dword ptr [eax + 0x28]
// 0085b3f4  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX000015@@QAEHH@Z)

namespace ns_ROCX000015 {
struct CXTPStatusBar
{
    int GetPane(int nIndex);
};

extern CXTPStatusBar* __stdcall FindStatusBar(int nID);

int CXTPStatusBar::GetPane(int nIndex)
{
    CXTPStatusBar* pBar = FindStatusBar(nIndex);
    if (pBar == 0)
        return 0;
    return *(int*)((char*)pBar + 0x28);
}
}
