// roc 2010-06 005cf810  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cf810
//
// 005cf810  6830d15c00           push 0x5cd130
// 005cf815  682891c100           push 0xc19128
// 005cf81a  e8711ee3ff           call 0x401690
// 005cf81f  83c408               add esp, 8
// 005cf822  e919cfffff           jmp 0x5cc740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
