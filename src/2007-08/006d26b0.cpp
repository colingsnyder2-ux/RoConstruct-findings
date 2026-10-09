// from server: 43% by colin
// roc 2007-08 006d26b0  unit: CXTPReportHyperlink  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d26b0
//
// 006d26b0  8b542404             mov edx, dword ptr [esp + 4]
// 006d26b4  85d2                 test edx, edx
// 006d26b6  53                   push ebx
// 006d26b7  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006d26bb  56                   push esi
// 006d26bc  8bf1                 mov esi, ecx
// 006d26be  8d0c1a               lea ecx, [edx + ebx]
// 006d26c1  7c46                 jl 0x6d2709
// 006d26c3  85db                 test ebx, ebx
// 006d26c5  7c42                 jl 0x6d2709
// 006d26c7  8b4608               mov eax, dword ptr [esi + 8]
// 006d26ca  3bc8                 cmp ecx, eax
// 006d26cc  7f3b                 jg 0x6d2709
// 006d26ce  3bca                 cmp ecx, edx
// 006d26d0  7c37                 jl 0x6d2709
// 006d26d2  3bcb                 cmp ecx, ebx
// 006d26d4  7c33                 jl 0x6d2709
// 006d26d6  2bc1                 sub eax, ecx
// 006d26d8  57                   push edi
// 006d26d9  8bf8                 mov edi, eax
// 006d26db  7423                 je 0x6d2700
// 006d26dd  8b4604               mov eax, dword ptr [esi + 4]
// 006d26e0  8d0c88               lea ecx, [eax + ecx*4]
// 006d26e3  8d1490               lea edx, [eax + edx*4]
// 006d26e6  8d04bd00000000       lea eax, [edi*4]
// 006d26ed  50                   push eax
// 006d26ee  51                   push ecx
// 006d26ef  50                   push eax
// 006d26f0  52                   push edx
// 006d26f1  ff1548e77700         call dword ptr [0x77e748]
// 006d26f7  50                   push eax
// 006d26f8  e8e3efd2ff           call 0x4016e0
// 006d26fd  83c414               add esp, 0x14
// 006d2700  295e08               sub dword ptr [esi + 8], ebx
// 006d2703  5f                   pop edi
// 006d2704  5e                   pop esi
// 006d2705  5b                   pop ebx
// 006d2706  c20800               ret 8
// 006d2709  e812d8f5ff           call 0x62ff20

extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);
extern "C" void __stdcall _invalid_parameter_noinfo();

struct CXTPReportHyperlink {
    int* m_pData;
    int m_nSize;
    int m_nCapacity;
    void RemoveAt(int nIndex, int nCount);
};

void CXTPReportHyperlink::RemoveAt(int nIndex, int nCount) {
    int nNewSize = nIndex + nCount;
    if (nNewSize < 0 || nCount < 0 || nNewSize > m_nCapacity || nNewSize < nIndex || nNewSize < nCount) {
        _invalid_parameter_noinfo();
        return;
    }
    int nRemaining = m_nCapacity - nNewSize;
    if (nRemaining != 0) {
        memmove_s(m_pData + nIndex, nRemaining * 4, m_pData + nNewSize, nRemaining * 4);
    }
    m_nCapacity -= nCount;
}
