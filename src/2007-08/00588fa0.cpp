// roc 2007-08 00588fa0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588fa0
//
// 00588fa0  6880b98b00           push 0x8bb980
// 00588fa5  6840984300           push 0x439840
// 00588faa  e871c51900           call 0x725520
// 00588faf  83c408               add esp, 8
// 00588fb2  e9e9ffeaff           jmp 0x438fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
