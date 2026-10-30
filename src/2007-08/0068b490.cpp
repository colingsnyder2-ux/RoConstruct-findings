// from server: 100% by auto
// roc 2007-08 0068b490  unit: CXTPTabClientWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b490
//
// 0068b490  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 0068b497  7408                 je 0x68b4a1
// 0068b499  b801000000           mov eax, 1
// 0068b49e  c20400               ret 4
// 0068b4a1  e8984dfaff           call 0x63023e
// 0068b4a6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcActivate@CXTPTabClientWnd@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
