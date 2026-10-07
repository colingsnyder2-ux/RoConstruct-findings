// roc 2012-06 009d9120  unit: CXTPPropExchange  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d9120
//
// 009d9120  6a00                 push 0
// 009d9122  8d442408             lea eax, [esp + 8]
// 009d9126  50                   push eax
// 009d9127  685011b600           push 0xb61150
// 009d912c  51                   push ecx
// 009d912d  e8eef1ffff           call 0x9d8320
// 009d9132  83c410               add esp, 0x10
// 009d9135  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?WriteCount@CXTPPropExchange@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
