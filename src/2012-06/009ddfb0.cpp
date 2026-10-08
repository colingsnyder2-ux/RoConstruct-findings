// from server: 100% by auto
// roc 2012-06 009ddfb0  unit: CXTPTabClientWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ddfb0
//
// 009ddfb0  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 009ddfb7  7408                 je 0x9ddfc1
// 009ddfb9  b801000000           mov eax, 1
// 009ddfbe  c20400               ret 4
// 009ddfc1  e81847faff           call 0x9826de
// 009ddfc6  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcActivate@CXTPTabClientWnd@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
