// roc 2008-06 006307a0  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006307a0
//
// 006307a0  6810789700           push 0x977810
// 006307a5  68e0ff5b00           push 0x5bffe0
// 006307aa  e8816bf2ff           call 0x557330
// 006307af  83c408               add esp, 8
// 006307b2  e959f3f8ff           jmp 0x5bfb10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
