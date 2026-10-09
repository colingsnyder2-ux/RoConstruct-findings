// roc 2011-06 0086cb40  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086cb40
//
// 0086cb40  8b442404             mov eax, dword ptr [esp + 4]
// 0086cb44  50                   push eax
// 0086cb45  e816ffffff           call 0x86ca60
// 0086cb4a  85c0                 test eax, eax
// 0086cb4c  7503                 jne 0x86cb51
// 0086cb4e  c20400               ret 4
// 0086cb51  8b4028               mov eax, dword ptr [eax + 0x28]
// 0086cb54  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX000005@@QAEHH@Z)

namespace ns_ROCX000005 {
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
