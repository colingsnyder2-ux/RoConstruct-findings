// from server: 100% by auto
// roc 2007-08 006ff9c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff9c0
//
// 006ff9c0  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 006ff9c6  8b01                 mov eax, dword ptr [ecx]
// 006ff9c8  8b4020               mov eax, dword ptr [eax + 0x20]
// 006ff9cb  ffe0                 jmp eax
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?FillNavigateButton@CXTPTabPaintManager@@QAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
