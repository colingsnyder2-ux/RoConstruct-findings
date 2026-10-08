// from server: 100% by auto
// roc 2007-08 006ff8a0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff8a0
//
// 006ff8a0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006ff8a3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006ff8a6  50                   push eax
// 006ff8a7  e854faffff           call 0x6ff300
// 006ff8ac  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
