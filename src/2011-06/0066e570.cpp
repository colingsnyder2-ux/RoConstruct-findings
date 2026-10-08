// roc 2011-06 0066e570  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066e570
//
// 0066e570  6870ce6600           push 0x66ce70
// 0066e575  68b0e3cc00           push 0xcce3b0
// 0066e57a  e89130d9ff           call 0x401610
// 0066e57f  83c408               add esp, 8
// 0066e582  e989ddffff           jmp 0x66c310
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
