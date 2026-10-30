// from server: 100% by auto
// roc 2012-06 009a0f30  unit: CXTPToolBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a0f30
//
// 009a0f30  837c240400           cmp dword ptr [esp + 4], 0
// 009a0f35  7405                 je 0x9a0f3c
// 009a0f37  33c0                 xor eax, eax
// 009a0f39  c20400               ret 4
// 009a0f3c  e89d17feff           call 0x9826de
// 009a0f41  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcActivate@CXTPPopupBar@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
