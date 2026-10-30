// roc 2009-06 0075d970  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d970
//
// 0075d970  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0075d976  e867e50e00           call 0x84bee2
// 0075d97b  c1e816               shr eax, 0x16
// 0075d97e  83e001               and eax, 1
// 0075d981  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
