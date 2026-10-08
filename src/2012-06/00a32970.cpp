// from server: 100% by auto
// roc 2012-06 00a32970  unit: CXTPDockingPaneLayout  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a32970
//
// 00a32970  8b442404             mov eax, dword ptr [esp + 4]
// 00a32974  83782800             cmp dword ptr [eax + 0x28], 0
// 00a32978  7409                 je 0xa32983
// 00a3297a  89442404             mov dword ptr [esp + 4], eax
// 00a3297e  e9bdf9ffff           jmp 0xa32340
// 00a32983  50                   push eax
// 00a32984  e8e7fcffff           call 0xa32670
// 00a32989  b801000000           mov eax, 1
// 00a3298e  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneLayout@@QAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
