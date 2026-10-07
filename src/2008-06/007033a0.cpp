// roc 2008-06 007033a0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007033a0
//
// 007033a0  c70164b78500         mov dword ptr [ecx], 0x85b764
// 007033a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007033a9  85c9                 test ecx, ecx
// 007033ab  7407                 je 0x7033b4
// 007033ad  51                   push ecx
// 007033ae  e897d5f9ff           call 0x6a094a
// 007033b3  59                   pop ecx
// 007033b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007033a0(void*);
struct S_func_007033a0 {
    virtual ~S_func_007033a0();
    void* m_p;
};
S_func_007033a0::~S_func_007033a0()
{
    if (m_p)
        G1_func_007033a0(m_p);
}
