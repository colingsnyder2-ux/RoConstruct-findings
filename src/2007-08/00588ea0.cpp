// roc 2007-08 00588ea0  unit: RBX::VSoundService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588ea0
//
// 00588ea0  687cb98b00           push 0x8bb97c
// 00588ea5  6830984300           push 0x439830
// 00588eaa  e871c61900           call 0x725520
// 00588eaf  83c408               add esp, 8
// 00588eb2  e96900ebff           jmp 0x438f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
