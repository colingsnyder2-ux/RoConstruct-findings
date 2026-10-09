// from server: 61% by colin
// roc 2007-08 006b7060  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7060
//
// 006b7060  8b442404             mov eax, dword ptr [esp + 4]
// 006b7064  83f8ff               cmp eax, -1
// 006b7067  7431                 je 0x6b709a
// 006b7069  3b8124020000         cmp eax, dword ptr [ecx + 0x224]
// 006b706f  7f29                 jg 0x6b709a
// 006b7071  85c0                 test eax, eax
// 006b7073  7c20                 jl 0x6b7095
// 006b7075  3b8124020000         cmp eax, dword ptr [ecx + 0x224]
// 006b707b  7d18                 jge 0x6b7095
// 006b707d  8b9120020000         mov edx, dword ptr [ecx + 0x220]
// 006b7083  8d0440               lea eax, [eax + eax*2]
// 006b7086  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 006b708a  50                   push eax
// 006b708b  e8e0f7ffff           call 0x6b6870
// 006b7090  33c0                 xor eax, eax
// 006b7092  c20400               ret 4
// 006b7095  e8868ef7ff           call 0x62ff20
// 006b709a  83c8ff               or eax, 0xffffffff
// 006b709d  c20400               ret 4

struct CXTPControlGallery {
    char pad[0x220];
    int m_nCount;
    int m_nSomething;
    int SetCurSel(int nIndex);
    void EnsureVisible(int nIndex);
};

int CXTPControlGallery::SetCurSel(int nIndex)
{
    if (nIndex == -1)
        return -1;
    if (nIndex > m_nSomething)
        return -1;
    if (nIndex < 0)
    {
        EnsureVisible(nIndex);
        return -1;
    }
    if (nIndex >= m_nSomething)
    {
        EnsureVisible(nIndex);
        return -1;
    }
    int* p = (int*)m_nCount;
    int idx = nIndex * 3;
    int val = *(int*)((char*)p + idx * 8 + 4);
    EnsureVisible(val);
    return 0;
}
