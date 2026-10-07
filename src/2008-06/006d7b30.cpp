// roc 2008-06 006d7b30  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7b30
//
// 006d7b30  c701a0448500         mov dword ptr [ecx], 0x8544a0
// 006d7b36  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d7b39  85c9                 test ecx, ecx
// 006d7b3b  7407                 je 0x6d7b44
// 006d7b3d  51                   push ecx
// 006d7b3e  e8078efcff           call 0x6a094a
// 006d7b43  59                   pop ecx
// 006d7b44  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006d7b30(void*);
struct S_func_006d7b30 {
    virtual ~S_func_006d7b30();
    void* m_p;
};
S_func_006d7b30::~S_func_006d7b30()
{
    if (m_p)
        G1_func_006d7b30(m_p);
}
