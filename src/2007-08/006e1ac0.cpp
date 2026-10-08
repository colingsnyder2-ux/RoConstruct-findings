// from server: 100% by colin
// roc 2007-08 006e1ac0  unit: CXTPDockingPaneTabbedContainer  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1ac0
//
// 006e1ac0  8b442404             mov eax, dword ptr [esp + 4]
// 006e1ac4  85c0                 test eax, eax
// 006e1ac6  7508                 jne 0x6e1ad0
// 006e1ac8  b857000780           mov eax, 0x80070057
// 006e1acd  c20400               ret 4
// 006e1ad0  8b49d0               mov ecx, dword ptr [ecx - 0x30]
// 006e1ad3  83c101               add ecx, 1
// 006e1ad6  8908                 mov dword ptr [eax], ecx
// 006e1ad8  33c0                 xor eax, eax
// 006e1ada  c20400               ret 4

struct CXTPDockingPaneTabbedContainer
{
    int GetCount(int* pCount);
    char m_pad[0x30];
    int m_nCount;
};

int CXTPDockingPaneTabbedContainer::GetCount(int* pCount)
{
    if (pCount == 0)
        return 0x80070057;
    *pCount = *(int*)((char*)this - 0x30) + 1;
    return 0;
}
