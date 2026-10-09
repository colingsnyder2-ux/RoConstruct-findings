// roc 2009-12 008ae700  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae700
//
// 008ae700  81c1f8000000         add ecx, 0xf8
// 008ae706  e835210000           call 0x8b0840
// 008ae70b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 008ae711  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
