// from server: 100% by tester
// roc 2007-03 0064aa80  unit: seg_00640000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064aa80
//
// 0064aa80  8b442404             mov eax, dword ptr [esp + 4]
// 0064aa84  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 0064aa87  7417                 je 0x64aaa0
// 0064aa89  89415c               mov dword ptr [ecx + 0x5c], eax
// 0064aa8c  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0064aa8f  e8ec1b0700           call 0x6bc680
// 0064aa94  8b10                 mov edx, dword ptr [eax]
// 0064aa96  8bc8                 mov ecx, eax
// 0064aa98  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0064aa9e  ffd0                 call eax
// 0064aaa0  c20400               ret 4

struct CXTPReportColumn {
    char pad0[84];
    void* m_pOwner;
    char pad1[0x5c - 0x58];
    int m_nWidth;
    void SetWidth(int nWidth);
};

extern "C" void* __fastcall sub_006d3460(void* p);

void CXTPReportColumn::SetWidth(int nWidth)
{
    if (nWidth != m_nWidth)
    {
        m_nWidth = nWidth;
        void* p = sub_006d3460(m_pOwner);
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(void*) = (void (__thiscall*)(void*))vtbl[0x90 / 4];
        fn(p);
    }
}
