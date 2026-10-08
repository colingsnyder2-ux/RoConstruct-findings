// from server: 100% by auto
// roc 2008-06 0077d5d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d5d0
//
// 0077d5d0  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0077d5d6  8b01                 mov eax, dword ptr [ecx]
// 0077d5d8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0077d5db  ffe0                 jmp eax
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?FillNavigateButton@CXTPTabPaintManager@@QAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
