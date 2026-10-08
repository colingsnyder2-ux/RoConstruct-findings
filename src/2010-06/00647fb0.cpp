// roc 2010-06 00647fb0  unit: RBX::MaterialTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647fb0
//
// 00647fb0  68f0666400           push 0x6466f0
// 00647fb5  6860b8c100           push 0xc1b860
// 00647fba  e8d196dbff           call 0x401690
// 00647fbf  83c408               add esp, 8
// 00647fc2  e999dbffff           jmp 0x645b60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
