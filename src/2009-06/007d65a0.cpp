// roc 2009-06 007d65a0  unit: CXTPDockingPaneTabbedContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d65a0
//
// 007d65a0  8d81c8feffff         lea eax, [ecx - 0x138]
// 007d65a6  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessible@CXTPDockingPaneTabbedContainer@@MAEPAVCCmdTarget@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
