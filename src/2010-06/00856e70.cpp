// roc 2010-06 00856e70  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856e70
//
// 00856e70  c7014c9ca600         mov dword ptr [ecx], 0xa69c4c
// 00856e76  8b4904               mov ecx, dword ptr [ecx + 4]
// 00856e79  85c9                 test ecx, ecx
// 00856e7b  7407                 je 0x856e84
// 00856e7d  51                   push ecx
// 00856e7e  e8c30df5ff           call 0x7a7c46
// 00856e83  59                   pop ecx
// 00856e84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00856e70(void*);
struct S_func_00856e70 {
    virtual ~S_func_00856e70();
    void* m_p;
};
S_func_00856e70::~S_func_00856e70()
{
    if (m_p)
        G1_func_00856e70(m_p);
}
