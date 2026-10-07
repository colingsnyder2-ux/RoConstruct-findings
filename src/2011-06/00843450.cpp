// roc 2011-06 00843450  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843450
//
// 00843450  c7018861ac00         mov dword ptr [ecx], 0xac6188
// 00843456  8b4904               mov ecx, dword ptr [ecx + 4]
// 00843459  85c9                 test ecx, ecx
// 0084345b  7407                 je 0x843464
// 0084345d  51                   push ecx
// 0084345e  e8a16efcff           call 0x80a304
// 00843463  59                   pop ecx
// 00843464  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00843450(void*);
struct S_func_00843450 {
    virtual ~S_func_00843450();
    void* m_p;
};
S_func_00843450::~S_func_00843450()
{
    if (m_p)
        G1_func_00843450(m_p);
}
