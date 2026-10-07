// roc 2007-08 006d36e0  unit: CXTPReportRow_Batch  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d36e0
//
// 006d36e0  c7018c827d00         mov dword ptr [ecx], 0x7d828c
// 006d36e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d36e9  85c9                 test ecx, ecx
// 006d36eb  7407                 je 0x6d36f4
// 006d36ed  51                   push ecx
// 006d36ee  e833c8f5ff           call 0x62ff26
// 006d36f3  59                   pop ecx
// 006d36f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006d36e0(void*);
struct S_func_006d36e0 {
    virtual ~S_func_006d36e0();
    void* m_p;
};
S_func_006d36e0::~S_func_006d36e0()
{
    if (m_p)
        G1_func_006d36e0(m_p);
}
