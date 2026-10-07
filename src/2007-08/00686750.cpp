// roc 2007-08 00686750  unit: CXTPPropExchange  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00686750
//
// 00686750  6aff                 push -1
// 00686752  68d46f8b00           push 0x8b6fd4
// 00686757  685cf57c00           push 0x7cf55c
// 0068675c  51                   push ecx
// 0068675d  e8beefffff           call 0x685720
// 00686762  83c410               add esp, 0x10
// 00686765  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ?ExchangeLocale@CXTPPropExchange@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
