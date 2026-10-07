// roc 2011-06 0081c850  unit: CXTPControlComboBoxPopupBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081c850
//
// 0081c850  c701d42cac00         mov dword ptr [ecx], 0xac2cd4
// 0081c856  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081c859  85c9                 test ecx, ecx
// 0081c85b  7407                 je 0x81c864
// 0081c85d  51                   push ecx
// 0081c85e  e8a1dafeff           call 0x80a304
// 0081c863  59                   pop ecx
// 0081c864  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0081c850(void*);
struct S_func_0081c850 {
    virtual ~S_func_0081c850();
    void* m_p;
};
S_func_0081c850::~S_func_0081c850()
{
    if (m_p)
        G1_func_0081c850(m_p);
}
