// roc 2009-12 008386e0  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008386e0
//
// 008386e0  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 008386e6  e88ddd0e00           call 0x926478
// 008386eb  c1e816               shr eax, 0x16
// 008386ee  83e001               and eax, 1
// 008386f1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
