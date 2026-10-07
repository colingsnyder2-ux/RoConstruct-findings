// roc 2010-06 007f4bf0  unit: CXTPCustomizeCommandsPage  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4bf0
//
// 007f4bf0  c70150dea500         mov dword ptr [ecx], 0xa5de50
// 007f4bf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f4bf9  85c9                 test ecx, ecx
// 007f4bfb  7407                 je 0x7f4c04
// 007f4bfd  51                   push ecx
// 007f4bfe  e84330fbff           call 0x7a7c46
// 007f4c03  59                   pop ecx
// 007f4c04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007f4bf0(void*);
struct S_func_007f4bf0 {
    virtual ~S_func_007f4bf0();
    void* m_p;
};
S_func_007f4bf0::~S_func_007f4bf0()
{
    if (m_p)
        G1_func_007f4bf0(m_p);
}
