// roc 2008-06 005863c0  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005863c0
//
// 005863c0  6828cc9600           push 0x96cc28
// 005863c5  68403a4100           push 0x413a40
// 005863ca  e8610ffdff           call 0x557330
// 005863cf  83c408               add esp, 8
// 005863d2  e959d3e8ff           jmp 0x413730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
