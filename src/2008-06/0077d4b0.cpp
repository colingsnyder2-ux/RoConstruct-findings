// from server: 100% by auto
// roc 2008-06 0077d4b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d4b0
//
// 0077d4b0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0077d4b3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 0077d4b6  50                   push eax
// 0077d4b7  e844faffff           call 0x77cf00
// 0077d4bc  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
