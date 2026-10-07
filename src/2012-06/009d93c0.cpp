// roc 2012-06 009d93c0  unit: CXTPPropExchange  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d93c0
//
// 009d93c0  6aff                 push -1
// 009d93c2  689844e000           push 0xe04498
// 009d93c7  68cc60c100           push 0xc160cc
// 009d93cc  51                   push ecx
// 009d93cd  e84eefffff           call 0x9d8320
// 009d93d2  83c410               add esp, 0x10
// 009d93d5  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeLocale@CXTPPropExchange@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
