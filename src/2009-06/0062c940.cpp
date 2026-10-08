// roc 2009-06 0062c940  unit: RBX::DecalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062c940
//
// 0062c940  68f0bb6200           push 0x62bbf0
// 0062c945  68bcb9a400           push 0xa4b9bc
// 0062c94a  e8c14dddff           call 0x401710
// 0062c94f  83c408               add esp, 8
// 0062c952  e929f2ffff           jmp 0x62bb80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
