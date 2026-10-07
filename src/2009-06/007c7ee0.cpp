// roc 2009-06 007c7ee0  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7ee0
//
// 007c7ee0  c701ec549000         mov dword ptr [ecx], 0x9054ec
// 007c7ee6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c7ee9  85c9                 test ecx, ecx
// 007c7eeb  7407                 je 0x7c7ef4
// 007c7eed  51                   push ecx
// 007c7eee  e8eb0df5ff           call 0x718cde
// 007c7ef3  59                   pop ecx
// 007c7ef4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007c7ee0(void*);
struct S_func_007c7ee0 {
    virtual ~S_func_007c7ee0();
    void* m_p;
};
S_func_007c7ee0::~S_func_007c7ee0()
{
    if (m_p)
        G1_func_007c7ee0(m_p);
}
