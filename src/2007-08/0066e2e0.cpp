// roc 2007-08 0066e2e0  unit: CXTPDockingPaneManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e2e0
//
// 0066e2e0  8b442408             mov eax, dword ptr [esp + 8]
// 0066e2e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066e2e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066e2ec  c70000000000         mov dword ptr [eax], 0
// 0066e2f2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066e2f6  c70100000000         mov dword ptr [ecx], 0
// 0066e2fc  c7020a000000         mov dword ptr [edx], 0xa
// 0066e302  c7000a000000         mov dword ptr [eax], 0xa
// 0066e308  33c0                 xor eax, eax
// 0066e30a  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AccessibleLocation@CXTPDockingPaneManager@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
