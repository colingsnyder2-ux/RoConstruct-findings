// roc 2010-06 00884a00  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884a00
//
// 00884a00  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00884a06  8b01                 mov eax, dword ptr [ecx]
// 00884a08  8b4020               mov eax, dword ptr [eax + 0x20]
// 00884a0b  ffe0                 jmp eax
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?FillNavigateButton@CXTPTabPaintManager@@QAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
