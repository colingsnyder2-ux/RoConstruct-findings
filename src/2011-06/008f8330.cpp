// roc 2011-06 008f8330  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8330
//
// 008f8330  c70160afad00         mov dword ptr [ecx], 0xadaf60
// 008f8336  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f8339  85c9                 test ecx, ecx
// 008f833b  7407                 je 0x8f8344
// 008f833d  51                   push ecx
// 008f833e  e8c11ff1ff           call 0x80a304
// 008f8343  59                   pop ecx
// 008f8344  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008f8330(void*);
struct S_func_008f8330 {
    virtual ~S_func_008f8330();
    void* m_p;
};
S_func_008f8330::~S_func_008f8330()
{
    if (m_p)
        G1_func_008f8330(m_p);
}
