// from server: 49% by colin
// roc 2007-08 006d3470  unit: CXTPReportRow_Batch  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3470
//
// 006d3470  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006d3473  83e801               sub eax, 1
// 006d3476  56                   push esi
// 006d3477  781d                 js 0x6d3496
// 006d3479  8b542408             mov edx, dword ptr [esp + 8]
// 006d347d  8d4900               lea ecx, [ecx]
// 006d3480  85c0                 test eax, eax
// 006d3482  7c19                 jl 0x6d349d
// 006d3484  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006d3487  7d14                 jge 0x6d349d
// 006d3489  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 006d348c  391486               cmp dword ptr [esi + eax*4], edx
// 006d348f  7408                 je 0x6d3499
// 006d3491  83e801               sub eax, 1
// 006d3494  79ea                 jns 0x6d3480
// 006d3496  83c8ff               or eax, 0xffffffff
// 006d3499  5e                   pop esi
// 006d349a  c20400               ret 4
// 006d349d  e87ecaf5ff           call 0x62ff20

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD

extern "C" void __cdecl sub_62ff20();

struct CXTPReportRow_Batch
{
    int sub_6d3470(int arg);
    char pad[0x2c];
    int* m_pArray;
    int m_nCount;
};

int CXTPReportRow_Batch::sub_6d3470(int arg)
{
    int i = m_nCount - 1;
    if (i < 0)
        return -1;
    do
    {
        if (i < 0 || i >= m_nCount)
        {
            sub_62ff20();
            return -1;
        }
        if (m_pArray[i] == arg)
            return i;
        --i;
    } while (i >= 0);
    return -1;
}
