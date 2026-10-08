// roc 2009-06 005f5b10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f5b10
//
// 005f5b10  68d0a25e00           push 0x5ea2d0
// 005f5b15  68004aa400           push 0xa44a00
// 005f5b1a  e8f1bbe0ff           call 0x401710
// 005f5b1f  83c408               add esp, 8
// 005f5b22  e92945ffff           jmp 0x5ea050
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
