// roc 2009-06 007d6290  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6290
//
// 007d6290  8b442404             mov eax, dword ptr [esp + 4]
// 007d6294  898198010000         mov dword ptr [ecx + 0x198], eax
// 007d629a  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 007d62a4  83c154               add ecx, 0x54
// 007d62a7  6a01                 push 1
// 007d62a9  51                   push ecx
// 007d62aa  e851faffff           call 0x7d5d00
// 007d62af  8bc8                 mov ecx, eax
// 007d62b1  e85a82f8ff           call 0x75e510
// 007d62b6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
