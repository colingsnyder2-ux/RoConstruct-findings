// roc 2009-06 0075e890  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075e890
//
// 0075e890  8b442404             mov eax, dword ptr [esp + 4]
// 0075e894  85c0                 test eax, eax
// 0075e896  7508                 jne 0x75e8a0
// 0075e898  b857000780           mov eax, 0x80070057
// 0075e89d  c20400               ret 4
// 0075e8a0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0075e8a3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0075e8a6  8910                 mov dword ptr [eax], edx
// 0075e8a8  33c0                 xor eax, eax
// 0075e8aa  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
