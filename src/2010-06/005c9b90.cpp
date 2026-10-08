// roc 2010-06 005c9b90  unit: RBX::Reflection::EnumDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c9b90
//
// 005c9b90  68809b5c00           push 0x5c9b80
// 005c9b95  687088c100           push 0xc18870
// 005c9b9a  e8f17ae3ff           call 0x401690
// 005c9b9f  83c408               add esp, 8
// 005c9ba2  e979ffffff           jmp 0x5c9b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
