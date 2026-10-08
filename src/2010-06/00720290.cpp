// roc 2010-06 00720290  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720290
//
// 00720290  68a0017200           push 0x7201a0
// 00720295  68fc29c200           push 0xc229fc
// 0072029a  e8f113ceff           call 0x401690
// 0072029f  83c408               add esp, 8
// 007202a2  e999fdffff           jmp 0x720040
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
