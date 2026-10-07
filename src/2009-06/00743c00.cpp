// roc 2009-06 00743c00  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743c00
//
// 00743c00  c701444a8f00         mov dword ptr [ecx], 0x8f4a44
// 00743c06  8b4904               mov ecx, dword ptr [ecx + 4]
// 00743c09  85c9                 test ecx, ecx
// 00743c0b  7407                 je 0x743c14
// 00743c0d  51                   push ecx
// 00743c0e  e8cb50fdff           call 0x718cde
// 00743c13  59                   pop ecx
// 00743c14  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00743c00(void*);
struct S_func_00743c00 {
    virtual ~S_func_00743c00();
    void* m_p;
};
S_func_00743c00::~S_func_00743c00()
{
    if (m_p)
        G1_func_00743c00(m_p);
}
