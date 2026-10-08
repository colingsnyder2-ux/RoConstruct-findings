// roc 2012-06 0096e610  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096e610
//
// 0096e610  6830cc9600           push 0x96cc30
// 0096e615  681c74e500           push 0xe5741c
// 0096e61a  e8812fa9ff           call 0x4015a0
// 0096e61f  83c408               add esp, 8
// 0096e622  e999e5ffff           jmp 0x96cbc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
