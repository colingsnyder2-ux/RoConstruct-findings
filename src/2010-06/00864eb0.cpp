// roc 2010-06 00864eb0  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864eb0
//
// 00864eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00864eb4  898198010000         mov dword ptr [ecx + 0x198], eax
// 00864eba  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 00864ec4  83c154               add ecx, 0x54
// 00864ec7  6a01                 push 1
// 00864ec9  51                   push ecx
// 00864eca  e841faffff           call 0x864910
// 00864ecf  8bc8                 mov ecx, eax
// 00864ed1  e85a85f8ff           call 0x7ed430
// 00864ed6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
