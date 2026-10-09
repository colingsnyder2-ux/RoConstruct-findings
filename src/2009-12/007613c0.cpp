// roc 2009-12 007613c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007613c0
//
// 007613c0  6830666600           push 0x666630
// 007613c5  680c0ab900           push 0xb90a0c
// 007613ca  e86102caff           call 0x401630
// 007613cf  83c408               add esp, 8
// 007613d2  e92947f0ff           jmp 0x665b00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
