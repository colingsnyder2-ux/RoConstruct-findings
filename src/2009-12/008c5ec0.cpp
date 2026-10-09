// roc 2009-12 008c5ec0  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5ec0
//
// 008c5ec0  837c240402           cmp dword ptr [esp + 4], 2
// 008c5ec5  750e                 jne 0x8c5ed5
// 008c5ec7  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 008c5ece  7405                 je 0x8c5ed5
// 008c5ed0  e8fbfeffff           call 0x8c5dd0
// 008c5ed5  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
