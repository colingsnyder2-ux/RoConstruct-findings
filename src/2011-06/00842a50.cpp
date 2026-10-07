// roc 2011-06 00842a50  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842a50
//
// 00842a50  c701e060ac00         mov dword ptr [ecx], 0xac60e0
// 00842a56  8b4904               mov ecx, dword ptr [ecx + 4]
// 00842a59  85c9                 test ecx, ecx
// 00842a5b  7407                 je 0x842a64
// 00842a5d  51                   push ecx
// 00842a5e  e8a178fcff           call 0x80a304
// 00842a63  59                   pop ecx
// 00842a64  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00842a50(void*);
struct S_func_00842a50 {
    virtual ~S_func_00842a50();
    void* m_p;
};
S_func_00842a50::~S_func_00842a50()
{
    if (m_p)
        G1_func_00842a50(m_p);
}
