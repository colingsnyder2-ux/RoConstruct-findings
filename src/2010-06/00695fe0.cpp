// roc 2010-06 00695fe0  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695fe0
//
// 00695fe0  68d06d4e00           push 0x4e6dd0
// 00695fe5  687466c000           push 0xc06674
// 00695fea  e8a1b6d6ff           call 0x401690
// 00695fef  83c408               add esp, 8
// 00695ff2  e909fce4ff           jmp 0x4e5c00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
