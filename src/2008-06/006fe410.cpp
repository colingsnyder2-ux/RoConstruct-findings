// roc 2008-06 006fe410  unit: CXTPPropExchange  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe410
//
// 006fe410  6aff                 push -1
// 006fe412  68447c9600           push 0x967c44
// 006fe417  6884af8500           push 0x85af84
// 006fe41c  51                   push ecx
// 006fe41d  e8eeeeffff           call 0x6fd310
// 006fe422  83c410               add esp, 0x10
// 006fe425  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?ExchangeLocale@CXTPPropExchange@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
