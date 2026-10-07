// roc 2008-06 00702e40  unit: CXTPTabClientWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702e40
//
// 00702e40  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 00702e47  7408                 je 0x702e51
// 00702e49  b801000000           mov eax, 1
// 00702e4e  c20400               ret 4
// 00702e51  e812def9ff           call 0x6a0c68
// 00702e56  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcActivate@CXTPTabClientWnd@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
