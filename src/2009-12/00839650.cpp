// roc 2009-12 00839650  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839650
//
// 00839650  8b442404             mov eax, dword ptr [esp + 4]
// 00839654  85c0                 test eax, eax
// 00839656  7508                 jne 0x839660
// 00839658  b857000780           mov eax, 0x80070057
// 0083965d  c20400               ret 4
// 00839660  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 00839663  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00839666  8910                 mov dword ptr [eax], edx
// 00839668  33c0                 xor eax, eax
// 0083966a  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
