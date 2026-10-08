// from server: 100% by auto
// roc 2011-06 008bfce0  unit: CXTPDockingPaneMiniWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bfce0
//
// 008bfce0  8d8108ffffff         lea eax, [ecx - 0xf8]
// 008bfce6  85c0                 test eax, eax
// 008bfce8  7501                 jne 0x8bfceb
// 008bfcea  c3                   ret 
// 008bfceb  8b4020               mov eax, dword ptr [eax + 0x20]
// 008bfcee  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?GetPaneHwnd@CXTPDockingPaneMiniWnd@@MBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
