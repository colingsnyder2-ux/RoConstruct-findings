// roc 2011-06 008648b0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008648b0
//
// 008648b0  c7018cb1ac00         mov dword ptr [ecx], 0xacb18c
// 008648b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008648b9  85c9                 test ecx, ecx
// 008648bb  7407                 je 0x8648c4
// 008648bd  51                   push ecx
// 008648be  e8415afaff           call 0x80a304
// 008648c3  59                   pop ecx
// 008648c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008648b0(void*);
struct S_func_008648b0 {
    virtual ~S_func_008648b0();
    void* m_p;
};
S_func_008648b0::~S_func_008648b0()
{
    if (m_p)
        G1_func_008648b0(m_p);
}
