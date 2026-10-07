// roc 2011-06 00860fb0  unit: CXTPPropExchange  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00860fb0
//
// 00860fb0  6a20                 push 0x20
// 00860fb2  8d412c               lea eax, [ecx + 0x2c]
// 00860fb5  50                   push eax
// 00860fb6  682040ac00           push 0xac4020
// 00860fbb  51                   push ecx
// 00860fbc  e88fefffff           call 0x85ff50
// 00860fc1  83c410               add esp, 0x10
// 00860fc4  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeSchemaSafe@CXTPPropExchange@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
