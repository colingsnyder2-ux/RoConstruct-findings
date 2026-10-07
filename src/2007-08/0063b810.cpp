// roc 2007-08 0063b810  unit: CPatchedControlComboBox  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063b810
//
// 0063b810  c70184627c00         mov dword ptr [ecx], 0x7c6284
// 0063b816  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063b819  85c9                 test ecx, ecx
// 0063b81b  7407                 je 0x63b824
// 0063b81d  51                   push ecx
// 0063b81e  e80347ffff           call 0x62ff26
// 0063b823  59                   pop ecx
// 0063b824  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0063b810(void*);
struct S_func_0063b810 {
    virtual ~S_func_0063b810();
    void* m_p;
};
S_func_0063b810::~S_func_0063b810()
{
    if (m_p)
        G1_func_0063b810(m_p);
}
