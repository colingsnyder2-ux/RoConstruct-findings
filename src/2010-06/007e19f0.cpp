// roc 2010-06 007e19f0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e19f0
//
// 007e19f0  c70128a5a500         mov dword ptr [ecx], 0xa5a528
// 007e19f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007e19f9  85c9                 test ecx, ecx
// 007e19fb  7407                 je 0x7e1a04
// 007e19fd  51                   push ecx
// 007e19fe  e84362fcff           call 0x7a7c46
// 007e1a03  59                   pop ecx
// 007e1a04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007e19f0(void*);
struct S_func_007e19f0 {
    virtual ~S_func_007e19f0();
    void* m_p;
};
S_func_007e19f0::~S_func_007e19f0()
{
    if (m_p)
        G1_func_007e19f0(m_p);
}
