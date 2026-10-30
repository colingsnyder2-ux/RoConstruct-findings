// roc 2012-06 00a4b030  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b030
//
// 00a4b030  837c240402           cmp dword ptr [esp + 4], 2
// 00a4b035  750e                 jne 0xa4b045
// 00a4b037  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 00a4b03e  7405                 je 0xa4b045
// 00a4b040  e8fbfeffff           call 0xa4af40
// 00a4b045  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
