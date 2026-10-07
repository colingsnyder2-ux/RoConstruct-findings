// roc 2007-08 00650780  unit: CXTPToolBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00650780
//
// 00650780  837c240400           cmp dword ptr [esp + 4], 0
// 00650785  7405                 je 0x65078c
// 00650787  33c0                 xor eax, eax
// 00650789  c20400               ret 4
// 0065078c  e8adfafdff           call 0x63023e
// 00650791  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcActivate@CXTPPopupBar@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
