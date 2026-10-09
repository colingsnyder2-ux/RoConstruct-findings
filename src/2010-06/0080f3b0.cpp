// roc 2010-06 0080f3b0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f3b0
//
// 0080f3b0  8b442404             mov eax, dword ptr [esp + 4]
// 0080f3b4  50                   push eax
// 0080f3b5  e816ffffff           call 0x80f2d0
// 0080f3ba  85c0                 test eax, eax
// 0080f3bc  7503                 jne 0x80f3c1
// 0080f3be  c20400               ret 4
// 0080f3c1  8b4028               mov eax, dword ptr [eax + 0x28]
// 0080f3c4  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX000002@@QAEHH@Z)

namespace ns_ROCX000002 {
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
