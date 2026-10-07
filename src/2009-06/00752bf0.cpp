// roc 2009-06 00752bf0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752bf0
//
// 00752bf0  c701b05d8f00         mov dword ptr [ecx], 0x8f5db0
// 00752bf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00752bf9  85c9                 test ecx, ecx
// 00752bfb  7407                 je 0x752c04
// 00752bfd  51                   push ecx
// 00752bfe  e8db60fcff           call 0x718cde
// 00752c03  59                   pop ecx
// 00752c04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00752bf0(void*);
struct S_func_00752bf0 {
    virtual ~S_func_00752bf0();
    void* m_p;
};
S_func_00752bf0::~S_func_00752bf0()
{
    if (m_p)
        G1_func_00752bf0(m_p);
}
