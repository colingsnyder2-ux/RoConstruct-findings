// roc 2011-06 0084e250  unit: CXTPDockingPaneManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e250
//
// 0084e250  8b442408             mov eax, dword ptr [esp + 8]
// 0084e254  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084e258  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084e25c  c70000000000         mov dword ptr [eax], 0
// 0084e262  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084e266  c70100000000         mov dword ptr [ecx], 0
// 0084e26c  c7020a000000         mov dword ptr [edx], 0xa
// 0084e272  c7000a000000         mov dword ptr [eax], 0xa
// 0084e278  33c0                 xor eax, eax
// 0084e27a  c22000               ret 0x20
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AccessibleLocation@CXTPDockingPaneManager@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
