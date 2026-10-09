// roc 2009-12 006574f0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006574f0
//
// 006574f0  68309a6400           push 0x649a30
// 006574f5  682060b800           push 0xb86020
// 006574fa  e831a1daff           call 0x401630
// 006574ff  83c408               add esp, 8
// 00657502  e92916ffff           jmp 0x648b30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
