// roc 2009-06 007211d0  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007211d0
//
// 007211d0  c70194218f00         mov dword ptr [ecx], 0x8f2194
// 007211d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007211d9  85c9                 test ecx, ecx
// 007211db  7407                 je 0x7211e4
// 007211dd  51                   push ecx
// 007211de  e8fb7affff           call 0x718cde
// 007211e3  59                   pop ecx
// 007211e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007211d0(void*);
struct S_func_007211d0 {
    virtual ~S_func_007211d0();
    void* m_p;
};
S_func_007211d0::~S_func_007211d0()
{
    if (m_p)
        G1_func_007211d0(m_p);
}
