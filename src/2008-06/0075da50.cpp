// roc 2008-06 0075da50  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075da50
//
// 0075da50  8b442404             mov eax, dword ptr [esp + 4]
// 0075da54  898198010000         mov dword ptr [ecx + 0x198], eax
// 0075da5a  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 0075da64  83c154               add ecx, 0x54
// 0075da67  6a01                 push 1
// 0075da69  51                   push ecx
// 0075da6a  e831faffff           call 0x75d4a0
// 0075da6f  8bc8                 mov ecx, eax
// 0075da71  e87a81f8ff           call 0x6e5bf0
// 0075da76  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
