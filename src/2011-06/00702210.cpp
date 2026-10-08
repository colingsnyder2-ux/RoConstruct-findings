// roc 2011-06 00702210  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00702210
//
// 00702210  68f0135c00           push 0x5c13f0
// 00702215  6808e6cb00           push 0xcbe608
// 0070221a  e8f1f3cfff           call 0x401610
// 0070221f  83c408               add esp, 8
// 00702222  e9f9dfebff           jmp 0x5c0220
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
