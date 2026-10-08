// roc 2011-06 00655af0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655af0
//
// 00655af0  68203b4600           push 0x463b20
// 00655af5  68843bcb00           push 0xcb3b84
// 00655afa  e811bbdaff           call 0x401610
// 00655aff  83c408               add esp, 8
// 00655b02  e949cfe0ff           jmp 0x462a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
