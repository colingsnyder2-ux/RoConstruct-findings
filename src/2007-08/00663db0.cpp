// roc 2007-08 00663db0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00663db0
//
// 00663db0  c7015c967c00         mov dword ptr [ecx], 0x7c965c
// 00663db6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00663db9  85c9                 test ecx, ecx
// 00663dbb  7407                 je 0x663dc4
// 00663dbd  51                   push ecx
// 00663dbe  e863c1fcff           call 0x62ff26
// 00663dc3  59                   pop ecx
// 00663dc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00663db0(void*);
struct S_func_00663db0 {
    virtual ~S_func_00663db0();
    void* m_p;
};
S_func_00663db0::~S_func_00663db0()
{
    if (m_p)
        G1_func_00663db0(m_p);
}
