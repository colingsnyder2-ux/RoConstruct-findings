// from server: 100% by auto
// roc 2007-08 006de640  unit: CXTPDockingPaneMiniWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de640
//
// 006de640  8d811cffffff         lea eax, [ecx - 0xe4]
// 006de646  85c0                 test eax, eax
// 006de648  7501                 jne 0x6de64b
// 006de64a  c3                   ret 
// 006de64b  8b4020               mov eax, dword ptr [eax + 0x20]
// 006de64e  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?GetPaneHwnd@CXTPDockingPaneMiniWnd@@MBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
