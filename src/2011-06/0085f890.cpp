// from server: 100% by auto
// roc 2011-06 0085f890  unit: CXTPPropExchange  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f890
//
// 0085f890  687ca9ac00           push 0xaca97c
// 0085f895  8d442408             lea eax, [esp + 8]
// 0085f899  6874a9ac00           push 0xaca974
// 0085f89e  50                   push eax
// 0085f89f  e87cfeffff           call 0x85f720
// 0085f8a4  682415ac00           push 0xac1524
// 0085f8a9  8d4c2414             lea ecx, [esp + 0x14]
// 0085f8ad  686ca9ac00           push 0xaca96c
// 0085f8b2  51                   push ecx
// 0085f8b3  e868feffff           call 0x85f720
// 0085f8b8  6868a9ac00           push 0xaca968
// 0085f8bd  8d542420             lea edx, [esp + 0x20]
// 0085f8c1  6860a9ac00           push 0xaca960
// 0085f8c6  52                   push edx
// 0085f8c7  e854feffff           call 0x85f720
// 0085f8cc  685ca9ac00           push 0xaca95c
// 0085f8d1  8d44242c             lea eax, [esp + 0x2c]
// 0085f8d5  6854a9ac00           push 0xaca954
// 0085f8da  50                   push eax
// 0085f8db  e840feffff           call 0x85f720
// 0085f8e0  6850a9ac00           push 0xaca950
// 0085f8e5  8d4c2438             lea ecx, [esp + 0x38]
// 0085f8e9  687ca9ac00           push 0xaca97c
// 0085f8ee  51                   push ecx
// 0085f8ef  e82cfeffff           call 0x85f720
// 0085f8f4  83c43c               add esp, 0x3c
// 0085f8f7  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
