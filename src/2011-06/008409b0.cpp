// roc 2011-06 008409b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008409b0
//
// 008409b0  c701a458ac00         mov dword ptr [ecx], 0xac58a4
// 008409b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008409b9  85c9                 test ecx, ecx
// 008409bb  7407                 je 0x8409c4
// 008409bd  51                   push ecx
// 008409be  e84199fcff           call 0x80a304
// 008409c3  59                   pop ecx
// 008409c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008409b0(void*);
struct S_func_008409b0 {
    virtual ~S_func_008409b0();
    void* m_p;
};
S_func_008409b0::~S_func_008409b0()
{
    if (m_p)
        G1_func_008409b0(m_p);
}
