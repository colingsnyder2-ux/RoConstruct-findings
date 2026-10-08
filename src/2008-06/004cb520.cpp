// roc 2008-06 004cb520  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb520
//
// 004cb520  68d01a9700           push 0x971ad0
// 004cb525  6840a34c00           push 0x4ca340
// 004cb52a  e801be0800           call 0x557330
// 004cb52f  83c408               add esp, 8
// 004cb532  e939e6ffff           jmp 0x4c9b70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
