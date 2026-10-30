// from server: 100% by auto
// roc 2008-06 006fe170  unit: CXTPPropExchange  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe170
//
// 006fe170  6a00                 push 0
// 006fe172  8d442408             lea eax, [esp + 8]
// 006fe176  50                   push eax
// 006fe177  68a4688500           push 0x8568a4
// 006fe17c  51                   push ecx
// 006fe17d  e88ef1ffff           call 0x6fd310
// 006fe182  83c410               add esp, 0x10
// 006fe185  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?WriteCount@CXTPPropExchange@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
