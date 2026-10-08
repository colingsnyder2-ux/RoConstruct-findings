// roc 2011-06 0067fef0  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067fef0
//
// 0067fef0  68c0534900           push 0x4953c0
// 0067fef5  680c43cb00           push 0xcb430c
// 0067fefa  e81117d8ff           call 0x401610
// 0067feff  83c408               add esp, 8
// 0067ff02  e9e94fe1ff           jmp 0x494ef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
