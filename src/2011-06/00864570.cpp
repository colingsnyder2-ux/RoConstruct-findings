// from server: 100% by auto
// roc 2011-06 00864570  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864570
//
// 00864570  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00864577  7511                 jne 0x86458a
// 00864579  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 00864580  7508                 jne 0x86458a
// 00864582  e8a760faff           call 0x80a62e
// 00864587  c20400               ret 4
// 0086458a  b801000000           mov eax, 1
// 0086458f  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnEraseBkgnd@CXTPTabClientWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
