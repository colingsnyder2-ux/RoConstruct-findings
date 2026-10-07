// roc 2010-06 007d2b20  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2b20
//
// 007d2b20  c701dc91a500         mov dword ptr [ecx], 0xa591dc
// 007d2b26  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d2b29  85c9                 test ecx, ecx
// 007d2b2b  7407                 je 0x7d2b34
// 007d2b2d  51                   push ecx
// 007d2b2e  e81351fdff           call 0x7a7c46
// 007d2b33  59                   pop ecx
// 007d2b34  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007d2b20(void*);
struct S_func_007d2b20 {
    virtual ~S_func_007d2b20();
    void* m_p;
};
S_func_007d2b20::~S_func_007d2b20()
{
    if (m_p)
        G1_func_007d2b20(m_p);
}
