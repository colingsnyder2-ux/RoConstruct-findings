// roc 2009-12 006d9fd0  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d9fd0
//
// 006d9fd0  68002d4600           push 0x462d00
// 006d9fd5  68bcb9b700           push 0xb7b9bc
// 006d9fda  e85176d2ff           call 0x401630
// 006d9fdf  83c408               add esp, 8
// 006d9fe2  e9397cd8ff           jmp 0x461c20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
