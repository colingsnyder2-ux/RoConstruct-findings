// roc 2009-06 007eb330  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb330
//
// 007eb330  837c240402           cmp dword ptr [esp + 4], 2
// 007eb335  750e                 jne 0x7eb345
// 007eb337  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 007eb33e  7405                 je 0x7eb345
// 007eb340  e8fbfeffff           call 0x7eb240
// 007eb345  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
