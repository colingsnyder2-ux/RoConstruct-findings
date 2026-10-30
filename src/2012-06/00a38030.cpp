// roc 2012-06 00a38030  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38030
//
// 00a38030  81c1f8000000         add ecx, 0xf8
// 00a38036  e835210000           call 0xa3a170
// 00a3803b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00a38041  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
