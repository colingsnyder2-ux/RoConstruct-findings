// roc 2011-06 008659b0  unit: CXTPTabClientWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008659b0
//
// 008659b0  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 008659b7  7408                 je 0x8659c1
// 008659b9  b801000000           mov eax, 1
// 008659be  c20400               ret 4
// 008659c1  e8684cfaff           call 0x80a62e
// 008659c6  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcActivate@CXTPTabClientWnd@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
