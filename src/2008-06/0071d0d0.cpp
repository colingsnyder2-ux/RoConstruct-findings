// roc 2008-06 0071d0d0  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d0d0
//
// 0071d0d0  c70128f48500         mov dword ptr [ecx], 0x85f428
// 0071d0d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0071d0d9  85c9                 test ecx, ecx
// 0071d0db  7407                 je 0x71d0e4
// 0071d0dd  51                   push ecx
// 0071d0de  e86738f8ff           call 0x6a094a
// 0071d0e3  59                   pop ecx
// 0071d0e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0071d0d0(void*);
struct S_func_0071d0d0 {
    virtual ~S_func_0071d0d0();
    void* m_p;
};
S_func_0071d0d0::~S_func_0071d0d0()
{
    if (m_p)
        G1_func_0071d0d0(m_p);
}
