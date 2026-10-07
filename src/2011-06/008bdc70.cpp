// roc 2011-06 008bdc70  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bdc70
//
// 008bdc70  c7012458ad00         mov dword ptr [ecx], 0xad5824
// 008bdc76  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bdc79  85c9                 test ecx, ecx
// 008bdc7b  7407                 je 0x8bdc84
// 008bdc7d  51                   push ecx
// 008bdc7e  e881c6f4ff           call 0x80a304
// 008bdc83  59                   pop ecx
// 008bdc84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008bdc70(void*);
struct S_func_008bdc70 {
    virtual ~S_func_008bdc70();
    void* m_p;
};
S_func_008bdc70::~S_func_008bdc70()
{
    if (m_p)
        G1_func_008bdc70(m_p);
}
