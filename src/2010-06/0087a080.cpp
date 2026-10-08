// roc 2010-06 0087a080  unit: CXTPControlCustom  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a080
//
// 0087a080  837c240402           cmp dword ptr [esp + 4], 2
// 0087a085  750e                 jne 0x87a095
// 0087a087  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 0087a08e  7405                 je 0x87a095
// 0087a090  e8fbfeffff           call 0x879f90
// 0087a095  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnActionChanged@CXTPControlCustom@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
