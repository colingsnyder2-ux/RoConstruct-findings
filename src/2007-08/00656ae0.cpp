// roc 2007-08 00656ae0  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656ae0
//
// 00656ae0  c701b4837c00         mov dword ptr [ecx], 0x7c83b4
// 00656ae6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00656ae9  85c9                 test ecx, ecx
// 00656aeb  7407                 je 0x656af4
// 00656aed  51                   push ecx
// 00656aee  e83394fdff           call 0x62ff26
// 00656af3  59                   pop ecx
// 00656af4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00656ae0(void*);
struct S_func_00656ae0 {
    virtual ~S_func_00656ae0();
    void* m_p;
};
S_func_00656ae0::~S_func_00656ae0()
{
    if (m_p)
        G1_func_00656ae0(m_p);
}
