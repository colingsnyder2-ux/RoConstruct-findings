// from server: 100% by auto
// roc 2008-06 0075b360  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b360
//
// 0075b360  81c1f8000000         add ecx, 0xf8
// 0075b366  e835210000           call 0x75d4a0
// 0075b36b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 0075b371  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
