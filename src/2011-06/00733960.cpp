// roc 2011-06 00733960  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00733960
//
// 00733960  6860357300           push 0x733560
// 00733965  68f048cd00           push 0xcd48f0
// 0073396a  e8a1dcccff           call 0x401610
// 0073396f  83c408               add esp, 8
// 00733972  e9b9faffff           jmp 0x733430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
