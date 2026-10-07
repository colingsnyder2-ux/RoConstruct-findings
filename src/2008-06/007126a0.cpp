// roc 2008-06 007126a0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007126a0
//
// 007126a0  c701e8d48500         mov dword ptr [ecx], 0x85d4e8
// 007126a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007126a9  85c9                 test ecx, ecx
// 007126ab  7407                 je 0x7126b4
// 007126ad  51                   push ecx
// 007126ae  e897e2f8ff           call 0x6a094a
// 007126b3  59                   pop ecx
// 007126b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007126a0(void*);
struct S_func_007126a0 {
    virtual ~S_func_007126a0();
    void* m_p;
};
S_func_007126a0::~S_func_007126a0()
{
    if (m_p)
        G1_func_007126a0(m_p);
}
