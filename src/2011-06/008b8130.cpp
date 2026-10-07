// roc 2011-06 008b8130  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8130
//
// 008b8130  c701144ead00         mov dword ptr [ecx], 0xad4e14
// 008b8136  8b4904               mov ecx, dword ptr [ecx + 4]
// 008b8139  85c9                 test ecx, ecx
// 008b813b  7407                 je 0x8b8144
// 008b813d  51                   push ecx
// 008b813e  e8c121f5ff           call 0x80a304
// 008b8143  59                   pop ecx
// 008b8144  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008b8130(void*);
struct S_func_008b8130 {
    virtual ~S_func_008b8130();
    void* m_p;
};
S_func_008b8130::~S_func_008b8130()
{
    if (m_p)
        G1_func_008b8130(m_p);
}
