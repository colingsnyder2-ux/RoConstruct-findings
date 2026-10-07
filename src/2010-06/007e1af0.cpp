// roc 2010-06 007e1af0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1af0
//
// 007e1af0  c70140a5a500         mov dword ptr [ecx], 0xa5a540
// 007e1af6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007e1af9  85c9                 test ecx, ecx
// 007e1afb  7407                 je 0x7e1b04
// 007e1afd  51                   push ecx
// 007e1afe  e84361fcff           call 0x7a7c46
// 007e1b03  59                   pop ecx
// 007e1b04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007e1af0(void*);
struct S_func_007e1af0 {
    virtual ~S_func_007e1af0();
    void* m_p;
};
S_func_007e1af0::~S_func_007e1af0()
{
    if (m_p)
        G1_func_007e1af0(m_p);
}
