// roc 2012-06 009c65d0  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c65d0
//
// 009c65d0  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 009c65d6  e8fd2f0d00           call 0xa995d8
// 009c65db  c1e816               shr eax, 0x16
// 009c65de  83e001               and eax, 1
// 009c65e1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
