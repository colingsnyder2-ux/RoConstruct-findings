// roc 2009-06 007d3ba0  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3ba0
//
// 007d3ba0  81c1f8000000         add ecx, 0xf8
// 007d3ba6  e855210000           call 0x7d5d00
// 007d3bab  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 007d3bb1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
