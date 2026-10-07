// roc 2010-06 008830e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008830e0
//
// 008830e0  c7013ceaa600         mov dword ptr [ecx], 0xa6ea3c
// 008830e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008830e9  85c9                 test ecx, ecx
// 008830eb  7407                 je 0x8830f4
// 008830ed  51                   push ecx
// 008830ee  e8534bf2ff           call 0x7a7c46
// 008830f3  59                   pop ecx
// 008830f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008830e0(void*);
struct S_func_008830e0 {
    virtual ~S_func_008830e0();
    void* m_p;
};
S_func_008830e0::~S_func_008830e0()
{
    if (m_p)
        G1_func_008830e0(m_p);
}
