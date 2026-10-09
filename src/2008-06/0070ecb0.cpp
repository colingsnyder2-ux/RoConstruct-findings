// roc 2008-06 0070ecb0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ecb0
//
// 0070ecb0  8b442404             mov eax, dword ptr [esp + 4]
// 0070ecb4  50                   push eax
// 0070ecb5  e816ffffff           call 0x70ebd0
// 0070ecba  85c0                 test eax, eax
// 0070ecbc  7503                 jne 0x70ecc1
// 0070ecbe  c20400               ret 4
// 0070ecc1  8b4028               mov eax, dword ptr [eax + 0x28]
// 0070ecc4  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX000003@@QAEHH@Z)

namespace ns_ROCX000003 {
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
