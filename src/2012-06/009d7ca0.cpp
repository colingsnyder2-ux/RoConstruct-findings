// from server: 100% by auto
// roc 2012-06 009d7ca0  unit: CXTPPropExchange  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7ca0
//
// 009d7ca0  687460c100           push 0xc16074
// 009d7ca5  8d442408             lea eax, [esp + 8]
// 009d7ca9  686c60c100           push 0xc1606c
// 009d7cae  50                   push eax
// 009d7caf  e87cfeffff           call 0x9d7b30
// 009d7cb4  68f4cbc000           push 0xc0cbf4
// 009d7cb9  8d4c2414             lea ecx, [esp + 0x14]
// 009d7cbd  686460c100           push 0xc16064
// 009d7cc2  51                   push ecx
// 009d7cc3  e868feffff           call 0x9d7b30
// 009d7cc8  686060c100           push 0xc16060
// 009d7ccd  8d542420             lea edx, [esp + 0x20]
// 009d7cd1  685860c100           push 0xc16058
// 009d7cd6  52                   push edx
// 009d7cd7  e854feffff           call 0x9d7b30
// 009d7cdc  685460c100           push 0xc16054
// 009d7ce1  8d44242c             lea eax, [esp + 0x2c]
// 009d7ce5  684c60c100           push 0xc1604c
// 009d7cea  50                   push eax
// 009d7ceb  e840feffff           call 0x9d7b30
// 009d7cf0  684860c100           push 0xc16048
// 009d7cf5  8d4c2438             lea ecx, [esp + 0x38]
// 009d7cf9  687460c100           push 0xc16074
// 009d7cfe  51                   push ecx
// 009d7cff  e82cfeffff           call 0x9d7b30
// 009d7d04  83c43c               add esp, 0x3c
// 009d7d07  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
