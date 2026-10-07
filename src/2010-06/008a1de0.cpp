// roc 2010-06 008a1de0  unit: CXTPRibbonGroup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1de0
//
// 008a1de0  c7014c1da700         mov dword ptr [ecx], 0xa71d4c
// 008a1de6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a1de9  85c9                 test ecx, ecx
// 008a1deb  7407                 je 0x8a1df4
// 008a1ded  51                   push ecx
// 008a1dee  e8535ef0ff           call 0x7a7c46
// 008a1df3  59                   pop ecx
// 008a1df4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008a1de0(void*);
struct S_func_008a1de0 {
    virtual ~S_func_008a1de0();
    void* m_p;
};
S_func_008a1de0::~S_func_008a1de0()
{
    if (m_p)
        G1_func_008a1de0(m_p);
}
