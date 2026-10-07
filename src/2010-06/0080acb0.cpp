// roc 2010-06 0080acb0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080acb0
//
// 0080acb0  c701040fa600         mov dword ptr [ecx], 0xa60f04
// 0080acb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080acb9  85c9                 test ecx, ecx
// 0080acbb  7407                 je 0x80acc4
// 0080acbd  51                   push ecx
// 0080acbe  e883cff9ff           call 0x7a7c46
// 0080acc3  59                   pop ecx
// 0080acc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080acb0(void*);
struct S_func_0080acb0 {
    virtual ~S_func_0080acb0();
    void* m_p;
};
S_func_0080acb0::~S_func_0080acb0()
{
    if (m_p)
        G1_func_0080acb0(m_p);
}
