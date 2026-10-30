// roc 2011-06 008d2d00  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2d00
//
// 008d2d00  837c240402           cmp dword ptr [esp + 4], 2
// 008d2d05  750e                 jne 0x8d2d15
// 008d2d07  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 008d2d0e  7405                 je 0x8d2d15
// 008d2d10  e8fbfeffff           call 0x8d2c10
// 008d2d15  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
