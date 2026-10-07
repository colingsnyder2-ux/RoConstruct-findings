// roc 2009-06 007800b0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007800b0
//
// 007800b0  c70154ce8f00         mov dword ptr [ecx], 0x8fce54
// 007800b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007800b9  85c9                 test ecx, ecx
// 007800bb  7407                 je 0x7800c4
// 007800bd  51                   push ecx
// 007800be  e81b8cf9ff           call 0x718cde
// 007800c3  59                   pop ecx
// 007800c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007800b0(void*);
struct S_func_007800b0 {
    virtual ~S_func_007800b0();
    void* m_p;
};
S_func_007800b0::~S_func_007800b0()
{
    if (m_p)
        G1_func_007800b0(m_p);
}
