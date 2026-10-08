// roc 2007-08 006e0d10  unit: CXTPDockingPaneTabbedContainer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0d10
//
// 006e0d10  8d81ccfeffff         lea eax, [ecx - 0x134]
// 006e0d16  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessible@CXTPDockingPaneTabbedContainer@@MAEPAVCCmdTarget@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
