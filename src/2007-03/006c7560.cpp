// roc 2007-03 006c7560  unit: seg_006c0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7560
//
// 006c7560  81c1e4000000         add ecx, 0xe4
// 006c7566  e8b51f0000           call 0x6c9520
// 006c756b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 006c7571  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?IsThemed@CXTPDockingPaneMiniWnd@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
