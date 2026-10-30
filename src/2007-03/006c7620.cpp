// roc 2007-03 006c7620  unit: seg_006c0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7620
//
// 006c7620  8d811cffffff         lea eax, [ecx - 0xe4]
// 006c7626  85c0                 test eax, eax
// 006c7628  7501                 jne 0x6c762b
// 006c762a  c3                   ret 
// 006c762b  8b4020               mov eax, dword ptr [eax + 0x20]
// 006c762e  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?GetPaneHwnd@CXTPDockingPaneMiniWnd@@MBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
