// roc 2008-06 0070e9a0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e9a0
//
// 0070e9a0  c70184d08500         mov dword ptr [ecx], 0x85d084
// 0070e9a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0070e9a9  85c9                 test ecx, ecx
// 0070e9ab  7407                 je 0x70e9b4
// 0070e9ad  51                   push ecx
// 0070e9ae  e8971ff9ff           call 0x6a094a
// 0070e9b3  59                   pop ecx
// 0070e9b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0070e9a0(void*);
struct S_func_0070e9a0 {
    virtual ~S_func_0070e9a0();
    void* m_p;
};
S_func_0070e9a0::~S_func_0070e9a0()
{
    if (m_p)
        G1_func_0070e9a0(m_p);
}
