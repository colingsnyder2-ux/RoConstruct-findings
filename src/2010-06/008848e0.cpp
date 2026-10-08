// roc 2010-06 008848e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008848e0
//
// 008848e0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008848e3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008848e6  50                   push eax
// 008848e7  e844faffff           call 0x884330
// 008848ec  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
