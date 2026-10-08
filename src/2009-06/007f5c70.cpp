// roc 2009-06 007f5c70  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5c70
//
// 007f5c70  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 007f5c76  8b01                 mov eax, dword ptr [ecx]
// 007f5c78  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f5c7b  ffe0                 jmp eax
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?FillNavigateButton@CXTPTabPaintManager@@QAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
