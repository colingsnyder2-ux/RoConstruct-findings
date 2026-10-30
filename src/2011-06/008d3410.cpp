// from server: 100% by auto
// roc 2011-06 008d3410  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3410
//
// 008d3410  8b4104               mov eax, dword ptr [ecx + 4]
// 008d3413  85c0                 test eax, eax
// 008d3415  7404                 je 0x8d341b
// 008d3417  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008d341a  c3                   ret 
// 008d341b  83c8ff               or eax, 0xffffffff
// 008d341e  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetCurSel@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
