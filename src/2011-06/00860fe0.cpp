// roc 2011-06 00860fe0  unit: CXTPPropExchange  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00860fe0
//
// 00860fe0  6aff                 push -1
// 00860fe2  68c074c900           push 0xc974c0
// 00860fe7  68e0a9ac00           push 0xaca9e0
// 00860fec  51                   push ecx
// 00860fed  e85eefffff           call 0x85ff50
// 00860ff2  83c410               add esp, 0x10
// 00860ff5  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeLocale@CXTPPropExchange@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
