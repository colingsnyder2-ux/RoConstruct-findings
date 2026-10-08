// roc 2007-08 00443430  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443430
//
// 00443430  68c4b48b00           push 0x8bb4c4
// 00443435  6860064200           push 0x420660
// 0044343a  e8e1202e00           call 0x725520
// 0044343f  83c408               add esp, 8
// 00443442  e9f9c8fdff           jmp 0x41fd40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
