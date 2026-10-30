// from server: 100% by auto
// roc 2008-06 00758900  unit: CXTPDockingPaneAutoHidePanel  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758900
//
// 00758900  8b442404             mov eax, dword ptr [esp + 4]
// 00758904  56                   push esi
// 00758905  50                   push eax
// 00758906  8bf1                 mov esi, ecx
// 00758908  e81b370600           call 0x7bc028
// 0075890d  85c0                 test eax, eax
// 0075890f  7408                 je 0x758919
// 00758911  50                   push eax
// 00758912  8bce                 mov ecx, esi
// 00758914  e857f1ffff           call 0x757a70
// 00758919  b801000000           mov eax, 1
// 0075891e  5e                   pop esi
// 0075891f  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnPrintClient@CXTPScrollBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
