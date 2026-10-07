// roc 2007-08 00677770  unit: CXTPPopupBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677770
//
// 00677770  e89d0c0c00           call 0x738412
// 00677775  a900010000           test eax, 0x100
// 0067777a  740f                 je 0x67778b
// 0067777c  f644240440           test byte ptr [esp + 4], 0x40
// 00677781  7408                 je 0x67778b
// 00677783  b801000000           mov eax, 1
// 00677788  c20800               ret 8
// 0067778b  33c0                 xor eax, eax
// 0067778d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?OnFloatStatus@CXTPPopupBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
