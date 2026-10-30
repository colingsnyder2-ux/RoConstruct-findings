// from server: 100% by auto
// roc 2012-06 00a4db50  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4db50
//
// 00a4db50  837c240400           cmp dword ptr [esp + 4], 0
// 00a4db55  8d8124010000         lea eax, [ecx + 0x124]
// 00a4db5b  7506                 jne 0xa4db63
// 00a4db5d  8d8114010000         lea eax, [ecx + 0x114]
// 00a4db63  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
