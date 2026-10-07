// roc 2009-06 007520d0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007520d0
//
// 007520d0  c701085d8f00         mov dword ptr [ecx], 0x8f5d08
// 007520d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007520d9  85c9                 test ecx, ecx
// 007520db  7407                 je 0x7520e4
// 007520dd  51                   push ecx
// 007520de  e8fb6bfcff           call 0x718cde
// 007520e3  59                   pop ecx
// 007520e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007520d0(void*);
struct S_func_007520d0 {
    virtual ~S_func_007520d0();
    void* m_p;
};
S_func_007520d0::~S_func_007520d0()
{
    if (m_p)
        G1_func_007520d0(m_p);
}
