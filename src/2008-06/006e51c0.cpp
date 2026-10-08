// from server: 100% by auto
// roc 2008-06 006e51c0  unit: CXTPDockingPaneManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e51c0
//
// 006e51c0  8b442408             mov eax, dword ptr [esp + 8]
// 006e51c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e51c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e51cc  c70000000000         mov dword ptr [eax], 0
// 006e51d2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e51d6  c70100000000         mov dword ptr [ecx], 0
// 006e51dc  c7020a000000         mov dword ptr [edx], 0xa
// 006e51e2  c7000a000000         mov dword ptr [eax], 0xa
// 006e51e8  33c0                 xor eax, eax
// 006e51ea  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AccessibleLocation@CXTPDockingPaneManager@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
