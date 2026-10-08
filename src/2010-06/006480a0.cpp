// roc 2010-06 006480a0  unit: RBX::DropperTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006480a0
//
// 006480a0  68e0666400           push 0x6466e0
// 006480a5  685cb8c100           push 0xc1b85c
// 006480aa  e8e195dbff           call 0x401690
// 006480af  83c408               add esp, 8
// 006480b2  e939daffff           jmp 0x645af0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
