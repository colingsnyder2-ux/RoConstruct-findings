// roc 2007-08 006db100  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006db100
//
// 006db100  c701188f7d00         mov dword ptr [ecx], 0x7d8f18
// 006db106  8b4904               mov ecx, dword ptr [ecx + 4]
// 006db109  85c9                 test ecx, ecx
// 006db10b  7407                 je 0x6db114
// 006db10d  51                   push ecx
// 006db10e  e8134ef5ff           call 0x62ff26
// 006db113  59                   pop ecx
// 006db114  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006db100(void*);
struct S_func_006db100 {
    virtual ~S_func_006db100();
    void* m_p;
};
S_func_006db100::~S_func_006db100()
{
    if (m_p)
        G1_func_006db100(m_p);
}
