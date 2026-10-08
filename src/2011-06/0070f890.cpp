// roc 2011-06 0070f890  unit: RBX::VSkateboardPlatform::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070f890
//
// 0070f890  6880145c00           push 0x5c1480
// 0070f895  682ce6cb00           push 0xcbe62c
// 0070f89a  e8711dcfff           call 0x401610
// 0070f89f  83c408               add esp, 8
// 0070f8a2  e9690debff           jmp 0x5c0610
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
