// from server: 83% by colin
// roc 2007-08 006cb990  unit: CXTPReportPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb990
//
// 006cb990  83b9f001000000       cmp dword ptr [ecx + 0x1f0], 0
// 006cb997  7425                 je 0x6cb9be
// 006cb999  8b8190020000         mov eax, dword ptr [ecx + 0x290]
// 006cb99f  83f803               cmp eax, 3
// 006cb9a2  7414                 je 0x6cb9b8
// 006cb9a4  83f802               cmp eax, 2
// 006cb9a7  7515                 jne 0x6cb9be
// 006cb9a9  81c194020000         add ecx, 0x294
// 006cb9af  e85c32fdff           call 0x69ec10
// 006cb9b4  85c0                 test eax, eax
// 006cb9b6  7406                 je 0x6cb9be
// 006cb9b8  b801000000           mov eax, 1
// 006cb9bd  c3                   ret 
// 006cb9be  33c0                 xor eax, eax
// 006cb9c0  c3                   ret 

struct CXTPReportPaintManager
{
    char m_pad_0x0[0x1f0];
    int m_nField_0x1f0;
    char m_pad_0x1f4[0x290 - 0x1f4];
    int m_nField_0x290;
    int m_nField_0x294;
    int Check();
};

extern "C" int __fastcall sub_69EC10(int *p);

int CXTPReportPaintManager::Check()
{
    if (m_nField_0x1f0 == 0)
        goto ret0;
    if (m_nField_0x290 == 3)
        return 1;
    if (m_nField_0x290 != 2)
        goto ret0;
    if (sub_69EC10(&m_nField_0x294) == 0)
        goto ret0;
    return 1;
ret0:
    return 0;
}
