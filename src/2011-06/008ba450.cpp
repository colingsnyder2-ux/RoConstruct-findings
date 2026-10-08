// from server: 100% by auto
// roc 2011-06 008ba450  unit: CXTPDockingPaneLayout  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ba450
//
// 008ba450  8b442404             mov eax, dword ptr [esp + 4]
// 008ba454  83782800             cmp dword ptr [eax + 0x28], 0
// 008ba458  7409                 je 0x8ba463
// 008ba45a  89442404             mov dword ptr [esp + 4], eax
// 008ba45e  e9bdf9ffff           jmp 0x8b9e20
// 008ba463  50                   push eax
// 008ba464  e8e7fcffff           call 0x8ba150
// 008ba469  b801000000           mov eax, 1
// 008ba46e  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneLayout@@QAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
