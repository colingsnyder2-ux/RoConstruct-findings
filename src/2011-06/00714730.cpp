// roc 2011-06 00714730  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714730
//
// 00714730  68c0145c00           push 0x5c14c0
// 00714735  683ce6cb00           push 0xcbe63c
// 0071473a  e8d1ceceff           call 0x401610
// 0071473f  83c408               add esp, 8
// 00714742  e989c0eaff           jmp 0x5c07d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
