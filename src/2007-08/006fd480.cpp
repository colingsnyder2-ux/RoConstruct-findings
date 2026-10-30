// from server: 100% by auto
// roc 2007-08 006fd480  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd480
//
// 006fd480  8b4104               mov eax, dword ptr [ecx + 4]
// 006fd483  85c0                 test eax, eax
// 006fd485  7404                 je 0x6fd48b
// 006fd487  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006fd48a  c3                   ret 
// 006fd48b  83c8ff               or eax, 0xffffffff
// 006fd48e  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetCurSel@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
