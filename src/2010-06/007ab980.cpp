// roc 2010-06 007ab980  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ab980
//
// 007ab980  c701b85aa500         mov dword ptr [ecx], 0xa55ab8
// 007ab986  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ab989  85c9                 test ecx, ecx
// 007ab98b  7407                 je 0x7ab994
// 007ab98d  51                   push ecx
// 007ab98e  e8b3c2ffff           call 0x7a7c46
// 007ab993  59                   pop ecx
// 007ab994  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007ab980(void*);
struct S_func_007ab980 {
    virtual ~S_func_007ab980();
    void* m_p;
};
S_func_007ab980::~S_func_007ab980()
{
    if (m_p)
        G1_func_007ab980(m_p);
}
