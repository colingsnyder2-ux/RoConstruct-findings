// roc 2008-06 006677f0  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006677f0
//
// 006677f0  68e4d99700           push 0x97d9e4
// 006677f5  68e0776600           push 0x6677e0
// 006677fa  e831fbeeff           call 0x557330
// 006677ff  83c408               add esp, 8
// 00667802  e959fdffff           jmp 0x667560
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
