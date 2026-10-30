// from server: 100% by auto
// roc 2012-06 009c6710  unit: CXTPDockingPaneManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6710
//
// 009c6710  8b442408             mov eax, dword ptr [esp + 8]
// 009c6714  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c6718  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c671c  c70000000000         mov dword ptr [eax], 0
// 009c6722  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c6726  c70100000000         mov dword ptr [ecx], 0
// 009c672c  c7020a000000         mov dword ptr [edx], 0xa
// 009c6732  c7000a000000         mov dword ptr [eax], 0xa
// 009c6738  33c0                 xor eax, eax
// 009c673a  c22000               ret 0x20
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AccessibleLocation@CXTPDockingPaneManager@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
