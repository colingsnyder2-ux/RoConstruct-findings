// roc 2008-06 00755d60  unit: CXTPDockingPaneLayout  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00755d60
//
// 00755d60  8b442404             mov eax, dword ptr [esp + 4]
// 00755d64  83782800             cmp dword ptr [eax + 0x28], 0
// 00755d68  7409                 je 0x755d73
// 00755d6a  89442404             mov dword ptr [esp + 4], eax
// 00755d6e  e9bdf9ffff           jmp 0x755730
// 00755d73  50                   push eax
// 00755d74  e8e7fcffff           call 0x755a60
// 00755d79  b801000000           mov eax, 1
// 00755d7e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneLayout@@QAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
