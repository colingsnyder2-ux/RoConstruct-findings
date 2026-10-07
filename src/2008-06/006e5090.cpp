// roc 2008-06 006e5090  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5090
//
// 006e5090  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 006e5096  e8fd6e0d00           call 0x7bbf98
// 006e509b  c1e816               shr eax, 0x16
// 006e509e  83e001               and eax, 1
// 006e50a1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
