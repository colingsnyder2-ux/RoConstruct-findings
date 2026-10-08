// roc 2012-06 00a3a730  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a730
//
// 00a3a730  8b442404             mov eax, dword ptr [esp + 4]
// 00a3a734  898198010000         mov dword ptr [ecx + 0x198], eax
// 00a3a73a  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 00a3a744  83c154               add ecx, 0x54
// 00a3a747  6a01                 push 1
// 00a3a749  51                   push ecx
// 00a3a74a  e821faffff           call 0xa3a170
// 00a3a74f  8bc8                 mov ecx, eax
// 00a3a751  e8fac9f8ff           call 0x9c7150
// 00a3a756  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
