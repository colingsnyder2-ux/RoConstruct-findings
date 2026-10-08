// roc 2009-06 005f5420  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f5420
//
// 005f5420  68a0a25e00           push 0x5ea2a0
// 005f5425  68f449a400           push 0xa449f4
// 005f542a  e8e1c2e0ff           call 0x401710
// 005f542f  83c408               add esp, 8
// 005f5432  e9c94affff           jmp 0x5e9f00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
