// roc 2008-06 005eb160  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb160
//
// 005eb160  6814279700           push 0x972714
// 005eb165  68c0764d00           push 0x4d76c0
// 005eb16a  e8c1c1f6ff           call 0x557330
// 005eb16f  83c408               add esp, 8
// 005eb172  e939c1eeff           jmp 0x4d72b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
