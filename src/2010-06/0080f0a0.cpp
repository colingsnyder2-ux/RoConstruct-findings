// roc 2010-06 0080f0a0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f0a0
//
// 0080f0a0  c701a415a600         mov dword ptr [ecx], 0xa615a4
// 0080f0a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080f0a9  85c9                 test ecx, ecx
// 0080f0ab  7407                 je 0x80f0b4
// 0080f0ad  51                   push ecx
// 0080f0ae  e8938bf9ff           call 0x7a7c46
// 0080f0b3  59                   pop ecx
// 0080f0b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080f0a0(void*);
struct S_func_0080f0a0 {
    virtual ~S_func_0080f0a0();
    void* m_p;
};
S_func_0080f0a0::~S_func_0080f0a0()
{
    if (m_p)
        G1_func_0080f0a0(m_p);
}
