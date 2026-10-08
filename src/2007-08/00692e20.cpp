// from server: 100% by colin
// roc 2007-08 00692e20  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692e20
//
// 00692e20  8b442404             mov eax, dword ptr [esp + 4]
// 00692e24  50                   push eax
// 00692e25  e836feffff           call 0x692c60
// 00692e2a  85c0                 test eax, eax
// 00692e2c  7503                 jne 0x692e31
// 00692e2e  c20400               ret 4
// 00692e31  8b4028               mov eax, dword ptr [eax + 0x28]
// 00692e34  c20400               ret 4

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
