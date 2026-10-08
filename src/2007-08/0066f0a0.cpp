// from server: 100% by auto
// roc 2007-08 0066f0a0  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f0a0
//
// 0066f0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0066f0a4  85c0                 test eax, eax
// 0066f0a6  7508                 jne 0x66f0b0
// 0066f0a8  b857000780           mov eax, 0x80070057
// 0066f0ad  c20400               ret 4
// 0066f0b0  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0066f0b3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0066f0b6  8910                 mov dword ptr [eax], edx
// 0066f0b8  33c0                 xor eax, eax
// 0066f0ba  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
