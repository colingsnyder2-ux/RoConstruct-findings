// roc 2011-06 0080df70  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080df70
//
// 0080df70  c7011817ac00         mov dword ptr [ecx], 0xac1718
// 0080df76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080df79  85c9                 test ecx, ecx
// 0080df7b  7407                 je 0x80df84
// 0080df7d  51                   push ecx
// 0080df7e  e881c3ffff           call 0x80a304
// 0080df83  59                   pop ecx
// 0080df84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080df70(void*);
struct S_func_0080df70 {
    virtual ~S_func_0080df70();
    void* m_p;
};
S_func_0080df70::~S_func_0080df70()
{
    if (m_p)
        G1_func_0080df70(m_p);
}
