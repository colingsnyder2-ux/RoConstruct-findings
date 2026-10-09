// roc 2007-03 0065b090  unit: seg_00650000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065b090
//
// 0065b090  8b442404             mov eax, dword ptr [esp + 4]
// 0065b094  85c0                 test eax, eax
// 0065b096  7508                 jne 0x65b0a0
// 0065b098  b857000780           mov eax, 0x80070057
// 0065b09d  c20400               ret 4
// 0065b0a0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0065b0a3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0065b0a6  8910                 mov dword ptr [eax], edx
// 0065b0a8  33c0                 xor eax, eax
// 0065b0aa  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
