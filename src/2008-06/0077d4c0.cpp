// from server: 100% by auto
// roc 2008-06 0077d4c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d4c0
//
// 0077d4c0  837c240400           cmp dword ptr [esp + 4], 0
// 0077d4c5  8d8124010000         lea eax, [ecx + 0x124]
// 0077d4cb  7506                 jne 0x77d4d3
// 0077d4cd  8d8114010000         lea eax, [ecx + 0x114]
// 0077d4d3  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?GetBoldFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
