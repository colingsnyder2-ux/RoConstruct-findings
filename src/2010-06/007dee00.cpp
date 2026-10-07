// roc 2010-06 007dee00  unit: CInstanceRecord  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dee00
//
// 007dee00  c7015c9ca500         mov dword ptr [ecx], 0xa59c5c
// 007dee06  8b4904               mov ecx, dword ptr [ecx + 4]
// 007dee09  85c9                 test ecx, ecx
// 007dee0b  7407                 je 0x7dee14
// 007dee0d  51                   push ecx
// 007dee0e  e8338efcff           call 0x7a7c46
// 007dee13  59                   pop ecx
// 007dee14  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007dee00(void*);
struct S_func_007dee00 {
    virtual ~S_func_007dee00();
    void* m_p;
};
S_func_007dee00::~S_func_007dee00()
{
    if (m_p)
        G1_func_007dee00(m_p);
}
