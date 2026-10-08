// from server: 100% by auto
// roc 2008-06 00772c10  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772c10
//
// 00772c10  837c240402           cmp dword ptr [esp + 4], 2
// 00772c15  750e                 jne 0x772c25
// 00772c17  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 00772c1e  7405                 je 0x772c25
// 00772c20  e8fbfeffff           call 0x772b20
// 00772c25  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
