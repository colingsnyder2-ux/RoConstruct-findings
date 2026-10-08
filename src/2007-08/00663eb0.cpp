// roc 2007-08 00663eb0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663eb0
//
// 00663eb0  c70174967c00         mov dword ptr [ecx], 0x7c9674
// 00663eb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00663eb9  85c9                 test ecx, ecx
// 00663ebb  7407                 je 0x663ec4
// 00663ebd  51                   push ecx
// 00663ebe  e863c0fcff           call 0x62ff26
// 00663ec3  59                   pop ecx
// 00663ec4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00663eb0(void*);
struct S_func_00663eb0 {
    virtual ~S_func_00663eb0();
    void* m_p;
};
S_func_00663eb0::~S_func_00663eb0()
{
    if (m_p)
        G1_func_00663eb0(m_p);
}
