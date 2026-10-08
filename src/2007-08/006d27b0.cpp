// roc 2007-08 006d27b0  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d27b0
//
// 006d27b0  c701fc807d00         mov dword ptr [ecx], 0x7d80fc
// 006d27b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d27b9  85c9                 test ecx, ecx
// 006d27bb  7407                 je 0x6d27c4
// 006d27bd  51                   push ecx
// 006d27be  e863d7f5ff           call 0x62ff26
// 006d27c3  59                   pop ecx
// 006d27c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006d27b0(void*);
struct S_func_006d27b0 {
    virtual ~S_func_006d27b0();
    void* m_p;
};
S_func_006d27b0::~S_func_006d27b0()
{
    if (m_p)
        G1_func_006d27b0(m_p);
}
