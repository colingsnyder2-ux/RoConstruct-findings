// from server: 100% by auto
// roc 2007-08 006864b0  unit: CXTPPropExchange  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006864b0
//
// 006864b0  6a00                 push 0
// 006864b2  8d442408             lea eax, [esp + 8]
// 006864b6  50                   push eax
// 006864b7  68b8b07c00           push 0x7cb0b8
// 006864bc  51                   push ecx
// 006864bd  e85ef2ffff           call 0x685720
// 006864c2  83c410               add esp, 0x10
// 006864c5  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ?WriteCount@CXTPPropExchange@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
