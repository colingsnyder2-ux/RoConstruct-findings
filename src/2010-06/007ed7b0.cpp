// roc 2010-06 007ed7b0  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ed7b0
//
// 007ed7b0  8b442404             mov eax, dword ptr [esp + 4]
// 007ed7b4  85c0                 test eax, eax
// 007ed7b6  7508                 jne 0x7ed7c0
// 007ed7b8  b857000780           mov eax, 0x80070057
// 007ed7bd  c20400               ret 4
// 007ed7c0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 007ed7c3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 007ed7c6  8910                 mov dword ptr [eax], edx
// 007ed7c8  33c0                 xor eax, eax
// 007ed7ca  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
