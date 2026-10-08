// roc 2008-06 00667c20  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667c20
//
// 00667c20  68f0d99700           push 0x97d9f0
// 00667c25  68107c6600           push 0x667c10
// 00667c2a  e801f7eeff           call 0x557330
// 00667c2f  83c408               add esp, 8
// 00667c32  e969ffffff           jmp 0x667ba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
