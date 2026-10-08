// roc 2010-06 005c26e0  unit: G3D::VRay::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c26e0
//
// 005c26e0  68d0c65a00           push 0x5ac6d0
// 005c26e5  6874c2c000           push 0xc0c274
// 005c26ea  e8a1efe3ff           call 0x401690
// 005c26ef  83c408               add esp, 8
// 005c26f2  e98999feff           jmp 0x5ac080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
