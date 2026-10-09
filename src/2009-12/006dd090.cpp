// roc 2009-12 006dd090  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dd090
//
// 006dd090  68502d4600           push 0x462d50
// 006dd095  68d0b9b700           push 0xb7b9d0
// 006dd09a  e89145d2ff           call 0x401630
// 006dd09f  83c408               add esp, 8
// 006dd0a2  e9a94dd8ff           jmp 0x461e50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
