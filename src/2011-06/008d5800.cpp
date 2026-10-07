// roc 2011-06 008d5800  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5800
//
// 008d5800  837c240400           cmp dword ptr [esp + 4], 0
// 008d5805  8d8124010000         lea eax, [ecx + 0x124]
// 008d580b  7506                 jne 0x8d5813
// 008d580d  8d8114010000         lea eax, [ecx + 0x114]
// 008d5813  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
