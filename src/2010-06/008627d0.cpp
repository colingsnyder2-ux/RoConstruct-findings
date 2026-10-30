// roc 2010-06 008627d0  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008627d0
//
// 008627d0  81c1f8000000         add ecx, 0xf8
// 008627d6  e835210000           call 0x864910
// 008627db  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 008627e1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
