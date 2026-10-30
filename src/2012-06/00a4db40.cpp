// roc 2012-06 00a4db40  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4db40
//
// 00a4db40  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00a4db43  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a4db46  50                   push eax
// 00a4db47  e844faffff           call 0xa4d590
// 00a4db4c  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
