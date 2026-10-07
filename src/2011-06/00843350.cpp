// roc 2011-06 00843350  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843350
//
// 00843350  c7017061ac00         mov dword ptr [ecx], 0xac6170
// 00843356  8b4904               mov ecx, dword ptr [ecx + 4]
// 00843359  85c9                 test ecx, ecx
// 0084335b  7407                 je 0x843364
// 0084335d  51                   push ecx
// 0084335e  e8a16ffcff           call 0x80a304
// 00843363  59                   pop ecx
// 00843364  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00843350(void*);
struct S_func_00843350 {
    virtual ~S_func_00843350();
    void* m_p;
};
S_func_00843350::~S_func_00843350()
{
    if (m_p)
        G1_func_00843350(m_p);
}
