// roc 2011-06 008d57f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d57f0
//
// 008d57f0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008d57f3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d57f6  50                   push eax
// 008d57f7  e844faffff           call 0x8d5240
// 008d57fc  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
