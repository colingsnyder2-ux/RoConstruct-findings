// roc 2012-06 009c74d0  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c74d0
//
// 009c74d0  8b442404             mov eax, dword ptr [esp + 4]
// 009c74d4  85c0                 test eax, eax
// 009c74d6  7508                 jne 0x9c74e0
// 009c74d8  b857000780           mov eax, 0x80070057
// 009c74dd  c20400               ret 4
// 009c74e0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 009c74e3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 009c74e6  8910                 mov dword ptr [eax], edx
// 009c74e8  33c0                 xor eax, eax
// 009c74ea  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
