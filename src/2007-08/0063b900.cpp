// roc 2007-08 0063b900  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063b900
//
// 0063b900  c7019c627c00         mov dword ptr [ecx], 0x7c629c
// 0063b906  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063b909  85c9                 test ecx, ecx
// 0063b90b  7407                 je 0x63b914
// 0063b90d  51                   push ecx
// 0063b90e  e81346ffff           call 0x62ff26
// 0063b913  59                   pop ecx
// 0063b914  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0063b900(void*);
struct S_func_0063b900 {
    virtual ~S_func_0063b900();
    void* m_p;
};
S_func_0063b900::~S_func_0063b900()
{
    if (m_p)
        G1_func_0063b900(m_p);
}
