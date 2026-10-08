// roc 2008-06 005e30e0  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e30e0
//
// 005e30e0  6878149700           push 0x971478
// 005e30e5  6830c34a00           push 0x4ac330
// 005e30ea  e84142f7ff           call 0x557330
// 005e30ef  83c408               add esp, 8
// 005e30f2  e9d980ecff           jmp 0x4ab1d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
