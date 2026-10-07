// roc 2010-06 007e0ec0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0ec0
//
// 007e0ec0  c70198a4a500         mov dword ptr [ecx], 0xa5a498
// 007e0ec6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007e0ec9  85c9                 test ecx, ecx
// 007e0ecb  7407                 je 0x7e0ed4
// 007e0ecd  51                   push ecx
// 007e0ece  e8736dfcff           call 0x7a7c46
// 007e0ed3  59                   pop ecx
// 007e0ed4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007e0ec0(void*);
struct S_func_007e0ec0 {
    virtual ~S_func_007e0ec0();
    void* m_p;
};
S_func_007e0ec0::~S_func_007e0ec0()
{
    if (m_p)
        G1_func_007e0ec0(m_p);
}
