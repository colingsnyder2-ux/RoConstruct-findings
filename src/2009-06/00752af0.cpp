// roc 2009-06 00752af0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752af0
//
// 00752af0  c701985d8f00         mov dword ptr [ecx], 0x8f5d98
// 00752af6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00752af9  85c9                 test ecx, ecx
// 00752afb  7407                 je 0x752b04
// 00752afd  51                   push ecx
// 00752afe  e8db61fcff           call 0x718cde
// 00752b03  59                   pop ecx
// 00752b04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00752af0(void*);
struct S_func_00752af0 {
    virtual ~S_func_00752af0();
    void* m_p;
};
S_func_00752af0::~S_func_00752af0()
{
    if (m_p)
        G1_func_00752af0(m_p);
}
