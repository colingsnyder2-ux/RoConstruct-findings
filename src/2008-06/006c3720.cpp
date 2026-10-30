// from server: 100% by auto
// roc 2008-06 006c3720  unit: CXTPToolBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3720
//
// 006c3720  837c240400           cmp dword ptr [esp + 4], 0
// 006c3725  7405                 je 0x6c372c
// 006c3727  33c0                 xor eax, eax
// 006c3729  c20400               ret 4
// 006c372c  e837d5fdff           call 0x6a0c68
// 006c3731  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcActivate@CXTPPopupBar@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
