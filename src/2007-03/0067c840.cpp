// roc 2007-03 0067c840  unit: seg_00670000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067c840
//
// 0067c840  8b442404             mov eax, dword ptr [esp + 4]
// 0067c844  50                   push eax
// 0067c845  e836feffff           call 0x67c680
// 0067c84a  85c0                 test eax, eax
// 0067c84c  7503                 jne 0x67c851
// 0067c84e  c20400               ret 4
// 0067c851  8b4028               mov eax, dword ptr [eax + 0x28]
// 0067c854  c20400               ret 4
// copied from an identical function in another client (function ?GetPane@CXTPStatusBar@ns_ROCX00001d@@QAEHH@Z)

namespace ns_ROCX00001d {
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
