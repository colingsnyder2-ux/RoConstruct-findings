// roc 2009-06 007b27a0  unit: CXTPDockBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b27a0
//
// 007b27a0  c7012c2d9000         mov dword ptr [ecx], 0x902d2c
// 007b27a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b27a9  85c9                 test ecx, ecx
// 007b27ab  7407                 je 0x7b27b4
// 007b27ad  51                   push ecx
// 007b27ae  e82b65f6ff           call 0x718cde
// 007b27b3  59                   pop ecx
// 007b27b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007b27a0(void*);
struct S_func_007b27a0 {
    virtual ~S_func_007b27a0();
    void* m_p;
};
S_func_007b27a0::~S_func_007b27a0()
{
    if (m_p)
        G1_func_007b27a0(m_p);
}
