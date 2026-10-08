// roc 2007-08 00661760  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661760
//
// 00661760  c701e08d7c00         mov dword ptr [ecx], 0x7c8de0
// 00661766  8b4904               mov ecx, dword ptr [ecx + 4]
// 00661769  85c9                 test ecx, ecx
// 0066176b  7407                 je 0x661774
// 0066176d  51                   push ecx
// 0066176e  e8b3e7fcff           call 0x62ff26
// 00661773  59                   pop ecx
// 00661774  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00661760(void*);
struct S_func_00661760 {
    virtual ~S_func_00661760();
    void* m_p;
};
S_func_00661760::~S_func_00661760()
{
    if (m_p)
        G1_func_00661760(m_p);
}
