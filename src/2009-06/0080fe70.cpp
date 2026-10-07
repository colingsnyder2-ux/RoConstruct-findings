// roc 2009-06 0080fe70  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fe70
//
// 0080fe70  c701a8cc9000         mov dword ptr [ecx], 0x90cca8
// 0080fe76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080fe79  85c9                 test ecx, ecx
// 0080fe7b  7407                 je 0x80fe84
// 0080fe7d  51                   push ecx
// 0080fe7e  e85b8ef0ff           call 0x718cde
// 0080fe83  59                   pop ecx
// 0080fe84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080fe70(void*);
struct S_func_0080fe70 {
    virtual ~S_func_0080fe70();
    void* m_p;
};
S_func_0080fe70::~S_func_0080fe70()
{
    if (m_p)
        G1_func_0080fe70(m_p);
}
