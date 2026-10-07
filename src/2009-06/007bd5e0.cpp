// roc 2009-06 007bd5e0  unit: CXTPRibbonBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd5e0
//
// 007bd5e0  c701944b9000         mov dword ptr [ecx], 0x904b94
// 007bd5e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007bd5e9  85c9                 test ecx, ecx
// 007bd5eb  7407                 je 0x7bd5f4
// 007bd5ed  51                   push ecx
// 007bd5ee  e8ebb6f5ff           call 0x718cde
// 007bd5f3  59                   pop ecx
// 007bd5f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007bd5e0(void*);
struct S_func_007bd5e0 {
    virtual ~S_func_007bd5e0();
    void* m_p;
};
S_func_007bd5e0::~S_func_007bd5e0()
{
    if (m_p)
        G1_func_007bd5e0(m_p);
}
