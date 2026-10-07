// roc 2010-06 008417b0  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008417b0
//
// 008417b0  c7015874a600         mov dword ptr [ecx], 0xa67458
// 008417b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008417b9  85c9                 test ecx, ecx
// 008417bb  7407                 je 0x8417c4
// 008417bd  51                   push ecx
// 008417be  e88364f6ff           call 0x7a7c46
// 008417c3  59                   pop ecx
// 008417c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008417b0(void*);
struct S_func_008417b0 {
    virtual ~S_func_008417b0();
    void* m_p;
};
S_func_008417b0::~S_func_008417b0()
{
    if (m_p)
        G1_func_008417b0(m_p);
}
