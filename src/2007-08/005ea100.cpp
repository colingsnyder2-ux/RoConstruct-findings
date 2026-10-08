// roc 2007-08 005ea100  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea100
//
// 005ea100  68c4378c00           push 0x8c37c4
// 005ea105  6890dd5800           push 0x58dd90
// 005ea10a  e811b41300           call 0x725520
// 005ea10f  83c408               add esp, 8
// 005ea112  e91937faff           jmp 0x58d830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
