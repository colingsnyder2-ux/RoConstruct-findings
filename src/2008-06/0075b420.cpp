// from server: 100% by auto
// roc 2008-06 0075b420  unit: CXTPDockingPaneMiniWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b420
//
// 0075b420  8d8108ffffff         lea eax, [ecx - 0xf8]
// 0075b426  85c0                 test eax, eax
// 0075b428  7501                 jne 0x75b42b
// 0075b42a  c3                   ret 
// 0075b42b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075b42e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?GetPaneHwnd@CXTPDockingPaneMiniWnd@@MBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
