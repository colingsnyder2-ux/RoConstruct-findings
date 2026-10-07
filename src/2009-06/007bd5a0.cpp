// roc 2009-06 007bd5a0  unit: CXTPRibbonBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd5a0
//
// 007bd5a0  c7017c4b9000         mov dword ptr [ecx], 0x904b7c
// 007bd5a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007bd5a9  85c9                 test ecx, ecx
// 007bd5ab  7407                 je 0x7bd5b4
// 007bd5ad  51                   push ecx
// 007bd5ae  e82bb7f5ff           call 0x718cde
// 007bd5b3  59                   pop ecx
// 007bd5b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007bd5a0(void*);
struct S_func_007bd5a0 {
    virtual ~S_func_007bd5a0();
    void* m_p;
};
S_func_007bd5a0::~S_func_007bd5a0()
{
    if (m_p)
        G1_func_007bd5a0(m_p);
}
