// roc 2009-06 007f4350  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4350
//
// 007f4350  c701d4a29000         mov dword ptr [ecx], 0x90a2d4
// 007f4356  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f4359  85c9                 test ecx, ecx
// 007f435b  7407                 je 0x7f4364
// 007f435d  51                   push ecx
// 007f435e  e87b49f2ff           call 0x718cde
// 007f4363  59                   pop ecx
// 007f4364  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007f4350(void*);
struct S_func_007f4350 {
    virtual ~S_func_007f4350();
    void* m_p;
};
S_func_007f4350::~S_func_007f4350()
{
    if (m_p)
        G1_func_007f4350(m_p);
}
