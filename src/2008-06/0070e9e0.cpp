// roc 2008-06 0070e9e0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e9e0
//
// 0070e9e0  c7019cd08500         mov dword ptr [ecx], 0x85d09c
// 0070e9e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0070e9e9  85c9                 test ecx, ecx
// 0070e9eb  7407                 je 0x70e9f4
// 0070e9ed  51                   push ecx
// 0070e9ee  e8571ff9ff           call 0x6a094a
// 0070e9f3  59                   pop ecx
// 0070e9f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0070e9e0(void*);
struct S_func_0070e9e0 {
    virtual ~S_func_0070e9e0();
    void* m_p;
};
S_func_0070e9e0::~S_func_0070e9e0()
{
    if (m_p)
        G1_func_0070e9e0(m_p);
}
