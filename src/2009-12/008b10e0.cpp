// roc 2009-12 008b10e0  unit: CXTPDockingPaneTabbedContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b10e0
//
// 008b10e0  8d81c8feffff         lea eax, [ecx - 0x138]
// 008b10e6  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessible@CXTPDockingPaneTabbedContainer@@MAEPAVCCmdTarget@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
