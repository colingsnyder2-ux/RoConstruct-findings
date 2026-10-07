// roc 2011-06 0080dfb0  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080dfb0
//
// 0080dfb0  c7013017ac00         mov dword ptr [ecx], 0xac1730
// 0080dfb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080dfb9  85c9                 test ecx, ecx
// 0080dfbb  7407                 je 0x80dfc4
// 0080dfbd  51                   push ecx
// 0080dfbe  e841c3ffff           call 0x80a304
// 0080dfc3  59                   pop ecx
// 0080dfc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080dfb0(void*);
struct S_func_0080dfb0 {
    virtual ~S_func_0080dfb0();
    void* m_p;
};
S_func_0080dfb0::~S_func_0080dfb0()
{
    if (m_p)
        G1_func_0080dfb0(m_p);
}
