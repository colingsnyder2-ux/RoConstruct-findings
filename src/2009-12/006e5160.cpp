// roc 2009-12 006e5160  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e5160
//
// 006e5160  68b0ac4900           push 0x49acb0
// 006e5165  68f0cdb700           push 0xb7cdf0
// 006e516a  e8c1c4d1ff           call 0x401630
// 006e516f  83c408               add esp, 8
// 006e5172  e94956dbff           jmp 0x49a7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
