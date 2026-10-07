// roc 2008-06 006fcc80  unit: CXTPPropExchange  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcc80
//
// 006fcc80  6820af8500           push 0x85af20
// 006fcc85  8d442408             lea eax, [esp + 8]
// 006fcc89  6818af8500           push 0x85af18
// 006fcc8e  50                   push eax
// 006fcc8f  e87cfeffff           call 0x6fcb10
// 006fcc94  6814af8500           push 0x85af14
// 006fcc99  8d4c2414             lea ecx, [esp + 0x14]
// 006fcc9d  680caf8500           push 0x85af0c
// 006fcca2  51                   push ecx
// 006fcca3  e868feffff           call 0x6fcb10
// 006fcca8  6808af8500           push 0x85af08
// 006fccad  8d542420             lea edx, [esp + 0x20]
// 006fccb1  6800af8500           push 0x85af00
// 006fccb6  52                   push edx
// 006fccb7  e854feffff           call 0x6fcb10
// 006fccbc  68fcae8500           push 0x85aefc
// 006fccc1  8d44242c             lea eax, [esp + 0x2c]
// 006fccc5  68f4ae8500           push 0x85aef4
// 006fccca  50                   push eax
// 006fcccb  e840feffff           call 0x6fcb10
// 006fccd0  68f0ae8500           push 0x85aef0
// 006fccd5  8d4c2438             lea ecx, [esp + 0x38]
// 006fccd9  6820af8500           push 0x85af20
// 006fccde  51                   push ecx
// 006fccdf  e82cfeffff           call 0x6fcb10
// 006fcce4  83c43c               add esp, 0x3c
// 006fcce7  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
