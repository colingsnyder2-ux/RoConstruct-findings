// roc 2008-06 00443660  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443660
//
// 00443660  687cc39600           push 0x96c37c
// 00443665  68d09f4000           push 0x409fd0
// 0044366a  e8c13c1100           call 0x557330
// 0044366f  83c408               add esp, 8
// 00443672  e94963fcff           jmp 0x4099c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
