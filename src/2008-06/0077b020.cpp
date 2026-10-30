// from server: 100% by auto
// roc 2008-06 0077b020  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b020
//
// 0077b020  8b4104               mov eax, dword ptr [ecx + 4]
// 0077b023  85c0                 test eax, eax
// 0077b025  7404                 je 0x77b02b
// 0077b027  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0077b02a  c3                   ret 
// 0077b02b  83c8ff               or eax, 0xffffffff
// 0077b02e  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetCurSel@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
