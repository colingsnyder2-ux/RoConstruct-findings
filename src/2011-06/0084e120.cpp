// roc 2011-06 0084e120  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e120
//
// 0084e120  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0084e126  e8f3e41700           call 0x9cc61e
// 0084e12b  c1e816               shr eax, 0x16
// 0084e12e  83e001               and eax, 1
// 0084e131  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
