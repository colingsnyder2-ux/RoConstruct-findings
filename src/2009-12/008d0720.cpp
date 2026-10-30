// roc 2009-12 008d0720  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0720
//
// 008d0720  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008d0723  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d0726  50                   push eax
// 008d0727  e844faffff           call 0x8d0170
// 008d072c  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
