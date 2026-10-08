// roc 2009-06 005f8b30  unit: RBX::Reflection::EnumDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8b30
//
// 005f8b30  68208b5f00           push 0x5f8b20
// 005f8b35  6828a8a400           push 0xa4a828
// 005f8b3a  e8d18be0ff           call 0x401710
// 005f8b3f  83c408               add esp, 8
// 005f8b42  e979ffffff           jmp 0x5f8ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
