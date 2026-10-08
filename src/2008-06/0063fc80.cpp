// roc 2008-06 0063fc80  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063fc80
//
// 0063fc80  6890969700           push 0x979690
// 0063fc85  68f0615c00           push 0x5c61f0
// 0063fc8a  e8a176f1ff           call 0x557330
// 0063fc8f  83c408               add esp, 8
// 0063fc92  e94961f8ff           jmp 0x5c5de0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
