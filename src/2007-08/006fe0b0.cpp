// roc 2007-08 006fe0b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe0b0
//
// 006fe0b0  c7015cce7d00         mov dword ptr [ecx], 0x7dce5c
// 006fe0b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006fe0b9  85c9                 test ecx, ecx
// 006fe0bb  7407                 je 0x6fe0c4
// 006fe0bd  51                   push ecx
// 006fe0be  e8631ef3ff           call 0x62ff26
// 006fe0c3  59                   pop ecx
// 006fe0c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006fe0b0(void*);
struct S_func_006fe0b0 {
    virtual ~S_func_006fe0b0();
    void* m_p;
};
S_func_006fe0b0::~S_func_006fe0b0()
{
    if (m_p)
        G1_func_006fe0b0(m_p);
}
