// roc 2009-06 007f5b50  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5b50
//
// 007f5b50  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007f5b53  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 007f5b56  50                   push eax
// 007f5b57  e844faffff           call 0x7f55a0
// 007f5b5c  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
