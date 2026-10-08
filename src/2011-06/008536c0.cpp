// from server: 100% by auto
// roc 2011-06 008536c0  unit: CXTPPopupBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008536c0
//
// 008536c0  e8538f1700           call 0x9cc618
// 008536c5  a900010000           test eax, 0x100
// 008536ca  740f                 je 0x8536db
// 008536cc  f644240440           test byte ptr [esp + 4], 0x40
// 008536d1  7408                 je 0x8536db
// 008536d3  b801000000           mov eax, 1
// 008536d8  c20800               ret 8
// 008536db  33c0                 xor eax, eax
// 008536dd  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnFloatStatus@CXTPPopupBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
