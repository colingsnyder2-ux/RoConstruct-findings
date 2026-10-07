// roc 2010-06 008848f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008848f0
//
// 008848f0  837c240400           cmp dword ptr [esp + 4], 0
// 008848f5  8d8124010000         lea eax, [ecx + 0x124]
// 008848fb  7506                 jne 0x884903
// 008848fd  8d8114010000         lea eax, [ecx + 0x114]
// 00884903  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetFont@CXTPTabPaintManager@@QAEPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
