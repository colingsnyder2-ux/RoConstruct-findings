// roc 2009-12 006dabd0  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dabd0
//
// 006dabd0  68402d4600           push 0x462d40
// 006dabd5  68ccb9b700           push 0xb7b9cc
// 006dabda  e8516ad2ff           call 0x401630
// 006dabdf  83c408               add esp, 8
// 006dabe2  e9f971d8ff           jmp 0x461de0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
