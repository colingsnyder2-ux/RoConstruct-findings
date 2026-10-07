// roc 2008-06 006acab0  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006acab0
//
// 006acab0  c701b4168500         mov dword ptr [ecx], 0x8516b4
// 006acab6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006acab9  85c9                 test ecx, ecx
// 006acabb  7407                 je 0x6acac4
// 006acabd  51                   push ecx
// 006acabe  e8873effff           call 0x6a094a
// 006acac3  59                   pop ecx
// 006acac4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006acab0(void*);
struct S_func_006acab0 {
    virtual ~S_func_006acab0();
    void* m_p;
};
S_func_006acab0::~S_func_006acab0()
{
    if (m_p)
        G1_func_006acab0(m_p);
}
