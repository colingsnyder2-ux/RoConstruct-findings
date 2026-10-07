// roc 2010-06 007aba70  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aba70
//
// 007aba70  c701d05aa500         mov dword ptr [ecx], 0xa55ad0
// 007aba76  8b4904               mov ecx, dword ptr [ecx + 4]
// 007aba79  85c9                 test ecx, ecx
// 007aba7b  7407                 je 0x7aba84
// 007aba7d  51                   push ecx
// 007aba7e  e8c3c1ffff           call 0x7a7c46
// 007aba83  59                   pop ecx
// 007aba84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007aba70(void*);
struct S_func_007aba70 {
    virtual ~S_func_007aba70();
    void* m_p;
};
S_func_007aba70::~S_func_007aba70()
{
    if (m_p)
        G1_func_007aba70(m_p);
}
