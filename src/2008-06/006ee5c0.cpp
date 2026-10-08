// from server: 100% by auto
// roc 2008-06 006ee5c0  unit: CXTPPopupBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee5c0
//
// 006ee5c0  e845da0c00           call 0x7bc00a
// 006ee5c5  a900010000           test eax, 0x100
// 006ee5ca  740f                 je 0x6ee5db
// 006ee5cc  f644240440           test byte ptr [esp + 4], 0x40
// 006ee5d1  7408                 je 0x6ee5db
// 006ee5d3  b801000000           mov eax, 1
// 006ee5d8  c20800               ret 8
// 006ee5db  33c0                 xor eax, eax
// 006ee5dd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnFloatStatus@CXTPPopupBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
