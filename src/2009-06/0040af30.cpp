// roc 2009-06 0040af30  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040af30
//
// 0040af30  6860ad4000           push 0x40ad60
// 0040af35  68689ba300           push 0xa39b68
// 0040af3a  e8d167ffff           call 0x401710
// 0040af3f  83c408               add esp, 8
// 0040af42  e9a9fdffff           jmp 0x40acf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
