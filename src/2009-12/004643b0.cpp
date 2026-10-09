// roc 2009-12 004643b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004643b0
//
// 004643b0  68302d4600           push 0x462d30
// 004643b5  68c8b9b700           push 0xb7b9c8
// 004643ba  e871d2f9ff           call 0x401630
// 004643bf  83c408               add esp, 8
// 004643c2  e9a9d9ffff           jmp 0x461d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
