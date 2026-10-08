// from server: 100% by auto
// roc 2008-06 006e5f70  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5f70
//
// 006e5f70  8b442404             mov eax, dword ptr [esp + 4]
// 006e5f74  85c0                 test eax, eax
// 006e5f76  7508                 jne 0x6e5f80
// 006e5f78  b857000780           mov eax, 0x80070057
// 006e5f7d  c20400               ret 4
// 006e5f80  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 006e5f83  8b5134               mov edx, dword ptr [ecx + 0x34]
// 006e5f86  8910                 mov dword ptr [eax], edx
// 006e5f88  33c0                 xor eax, eax
// 006e5f8a  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
