// roc 2008-06 006da3c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da3c0
//
// 006da3c0  c701684d8500         mov dword ptr [ecx], 0x854d68
// 006da3c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006da3c9  85c9                 test ecx, ecx
// 006da3cb  7407                 je 0x6da3d4
// 006da3cd  51                   push ecx
// 006da3ce  e87765fcff           call 0x6a094a
// 006da3d3  59                   pop ecx
// 006da3d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006da3c0(void*);
struct S_func_006da3c0 {
    virtual ~S_func_006da3c0();
    void* m_p;
};
S_func_006da3c0::~S_func_006da3c0()
{
    if (m_p)
        G1_func_006da3c0(m_p);
}
