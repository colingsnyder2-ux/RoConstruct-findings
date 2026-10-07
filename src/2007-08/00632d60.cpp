// roc 2007-08 00632d60  unit: MyXTPCommandBars  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00632d60
//
// 00632d60  c701d4507c00         mov dword ptr [ecx], 0x7c50d4
// 00632d66  8b4904               mov ecx, dword ptr [ecx + 4]
// 00632d69  85c9                 test ecx, ecx
// 00632d6b  7407                 je 0x632d74
// 00632d6d  51                   push ecx
// 00632d6e  e8b3d1ffff           call 0x62ff26
// 00632d73  59                   pop ecx
// 00632d74  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00632d60(void*);
struct S_func_00632d60 {
    virtual ~S_func_00632d60();
    void* m_p;
};
S_func_00632d60::~S_func_00632d60()
{
    if (m_p)
        G1_func_00632d60(m_p);
}
