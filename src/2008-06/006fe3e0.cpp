// roc 2008-06 006fe3e0  unit: CXTPPropExchange  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe3e0
//
// 006fe3e0  6a20                 push 0x20
// 006fe3e2  8d412c               lea eax, [ecx + 0x2c]
// 006fe3e5  50                   push eax
// 006fe3e6  68dc078500           push 0x8507dc
// 006fe3eb  51                   push ecx
// 006fe3ec  e81fefffff           call 0x6fd310
// 006fe3f1  83c410               add esp, 0x10
// 006fe3f4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?ExchangeSchema@CXTPPropExchange@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
