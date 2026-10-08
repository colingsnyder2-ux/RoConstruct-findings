// from server: 100% by auto
// roc 2011-06 00828910  unit: CXTPToolBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00828910
//
// 00828910  837c240400           cmp dword ptr [esp + 4], 0
// 00828915  7405                 je 0x82891c
// 00828917  33c0                 xor eax, eax
// 00828919  c20400               ret 4
// 0082891c  e80d1dfeff           call 0x80a62e
// 00828921  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcActivate@CXTPPopupBar@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
