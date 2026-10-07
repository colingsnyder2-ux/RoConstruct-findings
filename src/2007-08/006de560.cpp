// roc 2007-08 006de560  unit: CXTPDockingPaneMiniWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de560
//
// 006de560  81c1e4000000         add ecx, 0xe4
// 006de566  e8d51f0000           call 0x6e0540
// 006de56b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 006de571  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
