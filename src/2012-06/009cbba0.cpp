// roc 2012-06 009cbba0  unit: CXTPPopupBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbba0
//
// 009cbba0  e82dda0c00           call 0xa995d2
// 009cbba5  a900010000           test eax, 0x100
// 009cbbaa  740f                 je 0x9cbbbb
// 009cbbac  f644240440           test byte ptr [esp + 4], 0x40
// 009cbbb1  7408                 je 0x9cbbbb
// 009cbbb3  b801000000           mov eax, 1
// 009cbbb8  c20800               ret 8
// 009cbbbb  33c0                 xor eax, eax
// 009cbbbd  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnFloatStatus@CXTPPopupBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
