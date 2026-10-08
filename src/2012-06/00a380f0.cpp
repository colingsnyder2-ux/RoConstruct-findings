// from server: 100% by auto
// roc 2012-06 00a380f0  unit: CXTPDockingPaneMiniWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a380f0
//
// 00a380f0  8d8108ffffff         lea eax, [ecx - 0xf8]
// 00a380f6  85c0                 test eax, eax
// 00a380f8  7501                 jne 0xa380fb
// 00a380fa  c3                   ret 
// 00a380fb  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a380fe  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?GetPaneHwnd@CXTPDockingPaneMiniWnd@@MBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
