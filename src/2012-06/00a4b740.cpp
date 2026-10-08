// from server: 100% by auto
// roc 2012-06 00a4b740  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b740
//
// 00a4b740  8b4104               mov eax, dword ptr [ecx + 4]
// 00a4b743  85c0                 test eax, eax
// 00a4b745  7404                 je 0xa4b74b
// 00a4b747  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a4b74a  c3                   ret 
// 00a4b74b  83c8ff               or eax, 0xffffffff
// 00a4b74e  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetCurSel@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
