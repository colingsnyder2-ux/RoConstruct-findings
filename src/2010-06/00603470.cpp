// roc 2010-06 00603470  unit: RBX::DecalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603470
//
// 00603470  6870246000           push 0x602470
// 00603475  68dc9dc100           push 0xc19ddc
// 0060347a  e811e2dfff           call 0x401690
// 0060347f  83c408               add esp, 8
// 00603482  e979efffff           jmp 0x602400
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
