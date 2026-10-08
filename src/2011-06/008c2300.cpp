// roc 2011-06 008c2300  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2300
//
// 008c2300  8b442404             mov eax, dword ptr [esp + 4]
// 008c2304  898198010000         mov dword ptr [ecx + 0x198], eax
// 008c230a  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 008c2314  83c154               add ecx, 0x54
// 008c2317  6a01                 push 1
// 008c2319  51                   push ecx
// 008c231a  e841faffff           call 0x8c1d60
// 008c231f  8bc8                 mov ecx, eax
// 008c2321  e85ac9f8ff           call 0x84ec80
// 008c2326  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
