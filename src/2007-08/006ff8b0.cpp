// roc 2007-08 006ff8b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff8b0
//
// 006ff8b0  837c240400           cmp dword ptr [esp + 4], 0
// 006ff8b5  8d8124010000         lea eax, [ecx + 0x124]
// 006ff8bb  7506                 jne 0x6ff8c3
// 006ff8bd  8d8114010000         lea eax, [ecx + 0x114]
// 006ff8c3  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?GetBoldFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
