// roc 2010-06 004625a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004625a0
//
// 004625a0  6860164600           push 0x461660
// 004625a5  684c1ec000           push 0xc01e4c
// 004625aa  e8e1f0f9ff           call 0x401690
// 004625af  83c408               add esp, 8
// 004625b2  e909ebffff           jmp 0x4610c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
