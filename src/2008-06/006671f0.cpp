// roc 2008-06 006671f0  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006671f0
//
// 006671f0  68c0d99700           push 0x97d9c0
// 006671f5  68e0716600           push 0x6671e0
// 006671fa  e83101efff           call 0x557330
// 006671ff  83c408               add esp, 8
// 00667202  e969ffffff           jmp 0x667170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
