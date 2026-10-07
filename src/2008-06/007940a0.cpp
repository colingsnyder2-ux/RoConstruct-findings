// roc 2008-06 007940a0  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007940a0
//
// 007940a0  c701c8b78600         mov dword ptr [ecx], 0x86b7c8
// 007940a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007940a9  85c9                 test ecx, ecx
// 007940ab  7407                 je 0x7940b4
// 007940ad  51                   push ecx
// 007940ae  e897c8f0ff           call 0x6a094a
// 007940b3  59                   pop ecx
// 007940b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007940a0(void*);
struct S_func_007940a0 {
    virtual ~S_func_007940a0();
    void* m_p;
};
S_func_007940a0::~S_func_007940a0()
{
    if (m_p)
        G1_func_007940a0(m_p);
}
