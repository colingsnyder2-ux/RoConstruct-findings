// roc 2008-06 006cb610  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb610
//
// 006cb610  c701f4398500         mov dword ptr [ecx], 0x8539f4
// 006cb616  8b4904               mov ecx, dword ptr [ecx + 4]
// 006cb619  85c9                 test ecx, ecx
// 006cb61b  7407                 je 0x6cb624
// 006cb61d  51                   push ecx
// 006cb61e  e82753fdff           call 0x6a094a
// 006cb623  59                   pop ecx
// 006cb624  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006cb610(void*);
struct S_func_006cb610 {
    virtual ~S_func_006cb610();
    void* m_p;
};
S_func_006cb610::~S_func_006cb610()
{
    if (m_p)
        G1_func_006cb610(m_p);
}
