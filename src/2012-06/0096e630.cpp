// roc 2012-06 0096e630  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096e630
//
// 0096e630  68b0cb9600           push 0x96cbb0
// 0096e635  681874e500           push 0xe57418
// 0096e63a  e8612fa9ff           call 0x4015a0
// 0096e63f  83c408               add esp, 8
// 0096e642  e9f9e4ffff           jmp 0x96cb40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
