// roc 2008-06 006da2c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da2c0
//
// 006da2c0  c701504d8500         mov dword ptr [ecx], 0x854d50
// 006da2c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006da2c9  85c9                 test ecx, ecx
// 006da2cb  7407                 je 0x6da2d4
// 006da2cd  51                   push ecx
// 006da2ce  e87766fcff           call 0x6a094a
// 006da2d3  59                   pop ecx
// 006da2d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006da2c0(void*);
struct S_func_006da2c0 {
    virtual ~S_func_006da2c0();
    void* m_p;
};
S_func_006da2c0::~S_func_006da2c0()
{
    if (m_p)
        G1_func_006da2c0(m_p);
}
