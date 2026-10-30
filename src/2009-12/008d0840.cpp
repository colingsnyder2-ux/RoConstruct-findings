// roc 2009-12 008d0840  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0840
//
// 008d0840  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008d0846  8b01                 mov eax, dword ptr [ecx]
// 008d0848  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d084b  ffe0                 jmp eax
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?FillNavigateButton@CXTPTabPaintManager@@QAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
