// from server: 76% by colin
// roc 2007-08 0065e6e0  unit: CXTPReportColumn  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e6e0
//
// 0065e6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0065e6e4  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 0065e6e7  7417                 je 0x65e700
// 0065e6e9  89415c               mov dword ptr [ecx + 0x5c], eax
// 0065e6ec  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e6ef  e86c4d0700           call 0x6d3460
// 0065e6f4  8b10                 mov edx, dword ptr [eax]
// 0065e6f6  8bc8                 mov ecx, eax
// 0065e6f8  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0065e6fe  ffd0                 call eax
// 0065e700  c20400               ret 4

struct CXTPReportColumn {
    char pad0[0x54];
    void* m_pOwner;
    char pad1[0x5c - 0x58];
    int m_nWidth;
    void SetWidth(int nWidth);
};

extern "C" void* __stdcall sub_006d3460(void* p);

void CXTPReportColumn::SetWidth(int nWidth)
{
    if (nWidth != m_nWidth)
    {
        m_nWidth = nWidth;
        void* p = sub_006d3460(m_pOwner);
        (*(void (__stdcall **)(void*))(*(int*)p + 0x90))(p);
    }
}
