// roc 2009-06 008120a0  unit: CXTPRibbonGroup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008120a0
//
// 008120a0  c701eccc9000         mov dword ptr [ecx], 0x90ccec
// 008120a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008120a9  85c9                 test ecx, ecx
// 008120ab  7407                 je 0x8120b4
// 008120ad  51                   push ecx
// 008120ae  e82b6cf0ff           call 0x718cde
// 008120b3  59                   pop ecx
// 008120b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008120a0(void*);
struct S_func_008120a0 {
    virtual ~S_func_008120a0();
    void* m_p;
};
S_func_008120a0::~S_func_008120a0()
{
    if (m_p)
        G1_func_008120a0(m_p);
}
