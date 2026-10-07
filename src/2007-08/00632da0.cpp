// roc 2007-08 00632da0  unit: MyXTPCommandBars  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00632da0
//
// 00632da0  c701ec507c00         mov dword ptr [ecx], 0x7c50ec
// 00632da6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00632da9  85c9                 test ecx, ecx
// 00632dab  7407                 je 0x632db4
// 00632dad  51                   push ecx
// 00632dae  e873d1ffff           call 0x62ff26
// 00632db3  59                   pop ecx
// 00632db4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00632da0(void*);
struct S_func_00632da0 {
    virtual ~S_func_00632da0();
    void* m_p;
};
S_func_00632da0::~S_func_00632da0()
{
    if (m_p)
        G1_func_00632da0(m_p);
}
