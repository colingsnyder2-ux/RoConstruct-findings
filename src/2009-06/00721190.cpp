// roc 2009-06 00721190  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721190
//
// 00721190  c7017c218f00         mov dword ptr [ecx], 0x8f217c
// 00721196  8b4904               mov ecx, dword ptr [ecx + 4]
// 00721199  85c9                 test ecx, ecx
// 0072119b  7407                 je 0x7211a4
// 0072119d  51                   push ecx
// 0072119e  e83b7bffff           call 0x718cde
// 007211a3  59                   pop ecx
// 007211a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00721190(void*);
struct S_func_00721190 {
    virtual ~S_func_00721190();
    void* m_p;
};
S_func_00721190::~S_func_00721190()
{
    if (m_p)
        G1_func_00721190(m_p);
}
