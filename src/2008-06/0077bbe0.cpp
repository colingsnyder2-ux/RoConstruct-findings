// roc 2008-06 0077bbe0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077bbe0
//
// 0077bbe0  c701ac928600         mov dword ptr [ecx], 0x8692ac
// 0077bbe6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077bbe9  85c9                 test ecx, ecx
// 0077bbeb  7407                 je 0x77bbf4
// 0077bbed  51                   push ecx
// 0077bbee  e8574df2ff           call 0x6a094a
// 0077bbf3  59                   pop ecx
// 0077bbf4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077bbe0(void*);
struct S_func_0077bbe0 {
    virtual ~S_func_0077bbe0();
    void* m_p;
};
S_func_0077bbe0::~S_func_0077bbe0()
{
    if (m_p)
        G1_func_0077bbe0(m_p);
}
