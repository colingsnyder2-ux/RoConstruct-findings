// roc 2010-06 0040b140  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b140
//
// 0040b140  6870af4000           push 0x40af70
// 0040b145  68e8ffbf00           push 0xbfffe8
// 0040b14a  e84165ffff           call 0x401690
// 0040b14f  83c408               add esp, 8
// 0040b152  e9a9fdffff           jmp 0x40af00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
