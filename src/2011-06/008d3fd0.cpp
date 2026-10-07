// roc 2011-06 008d3fd0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3fd0
//
// 008d3fd0  c7019079ad00         mov dword ptr [ecx], 0xad7990
// 008d3fd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d3fd9  85c9                 test ecx, ecx
// 008d3fdb  7407                 je 0x8d3fe4
// 008d3fdd  51                   push ecx
// 008d3fde  e82163f3ff           call 0x80a304
// 008d3fe3  59                   pop ecx
// 008d3fe4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008d3fd0(void*);
struct S_func_008d3fd0 {
    virtual ~S_func_008d3fd0();
    void* m_p;
};
S_func_008d3fd0::~S_func_008d3fd0()
{
    if (m_p)
        G1_func_008d3fd0(m_p);
}
