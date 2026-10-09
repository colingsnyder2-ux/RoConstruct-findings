// roc 2009-06 00780380  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780380
//
// 00780380  8b442404             mov eax, dword ptr [esp + 4]
// 00780384  50                   push eax
// 00780385  e816ffffff           call 0x7802a0
// 0078038a  85c0                 test eax, eax
// 0078038c  7503                 jne 0x780391
// 0078038e  c20400               ret 4
// 00780391  8b4028               mov eax, dword ptr [eax + 0x28]
// 00780394  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX000007@@QAEHH@Z)

namespace ns_ROCX000007 {
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
