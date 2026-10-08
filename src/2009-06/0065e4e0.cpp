// roc 2009-06 0065e4e0  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065e4e0
//
// 0065e4e0  6860c86500           push 0x65c860
// 0065e4e5  680cd0a400           push 0xa4d00c
// 0065e4ea  e82132daff           call 0x401710
// 0065e4ef  83c408               add esp, 8
// 0065e4f2  e919d9ffff           jmp 0x65be10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
