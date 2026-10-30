// from server: 100% by auto
// roc 2007-08 00689cc0  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689cc0
//
// 00689cc0  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00689cc7  7511                 jne 0x689cda
// 00689cc9  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 00689cd0  7508                 jne 0x689cda
// 00689cd2  e86765faff           call 0x63023e
// 00689cd7  c20400               ret 4
// 00689cda  b801000000           mov eax, 1
// 00689cdf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnEraseBkgnd@CXTPTabClientWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
