// roc 2010-06 006fe600  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fe600
//
// 006fe600  6890e26f00           push 0x6fe290
// 006fe605  68bc25c200           push 0xc225bc
// 006fe60a  e88130d0ff           call 0x401690
// 006fe60f  83c408               add esp, 8
// 006fe612  e9b9faffff           jmp 0x6fe0d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
