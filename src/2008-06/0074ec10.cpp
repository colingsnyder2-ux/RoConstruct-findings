// roc 2008-06 0074ec10  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ec10
//
// 0074ec10  c70194438600         mov dword ptr [ecx], 0x864394
// 0074ec16  8b4904               mov ecx, dword ptr [ecx + 4]
// 0074ec19  85c9                 test ecx, ecx
// 0074ec1b  7407                 je 0x74ec24
// 0074ec1d  51                   push ecx
// 0074ec1e  e8271df5ff           call 0x6a094a
// 0074ec23  59                   pop ecx
// 0074ec24  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0074ec10(void*);
struct S_func_0074ec10 {
    virtual ~S_func_0074ec10();
    void* m_p;
};
S_func_0074ec10::~S_func_0074ec10()
{
    if (m_p)
        G1_func_0074ec10(m_p);
}
