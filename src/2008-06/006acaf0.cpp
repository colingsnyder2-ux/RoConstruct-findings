// roc 2008-06 006acaf0  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006acaf0
//
// 006acaf0  c701cc168500         mov dword ptr [ecx], 0x8516cc
// 006acaf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006acaf9  85c9                 test ecx, ecx
// 006acafb  7407                 je 0x6acb04
// 006acafd  51                   push ecx
// 006acafe  e8473effff           call 0x6a094a
// 006acb03  59                   pop ecx
// 006acb04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006acaf0(void*);
struct S_func_006acaf0 {
    virtual ~S_func_006acaf0();
    void* m_p;
};
S_func_006acaf0::~S_func_006acaf0()
{
    if (m_p)
        G1_func_006acaf0(m_p);
}
