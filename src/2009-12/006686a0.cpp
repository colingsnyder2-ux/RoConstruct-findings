// roc 2009-12 006686a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006686a0
//
// 006686a0  6810145500           push 0x551410
// 006686a5  68f407b800           push 0xb807f4
// 006686aa  e8818fd9ff           call 0x401630
// 006686af  83c408               add esp, 8
// 006686b2  e9398ceeff           jmp 0x5512f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
