// roc 2009-12 007138c0  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007138c0
//
// 007138c0  68a0885300           push 0x5388a0
// 007138c5  68c805b800           push 0xb805c8
// 007138ca  e861ddceff           call 0x401630
// 007138cf  83c408               add esp, 8
// 007138d2  e9593ee2ff           jmp 0x537730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
