// roc 2012-06 009d9390  unit: CXTPPropExchange  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d9390
//
// 009d9390  6a20                 push 0x20
// 009d9392  8d412c               lea eax, [ecx + 0x2c]
// 009d9395  50                   push eax
// 009d9396  6800f7c000           push 0xc0f700
// 009d939b  51                   push ecx
// 009d939c  e87fefffff           call 0x9d8320
// 009d93a1  83c410               add esp, 0x10
// 009d93a4  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeSchemaSafe@CXTPPropExchange@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
