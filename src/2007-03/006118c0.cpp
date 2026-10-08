// roc 2007-03 006118c0  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006118c0
//
// 006118c0  6804138c00           push 0x8c1304
// 006118c5  68b0186100           push 0x6118b0
// 006118ca  e8814f1100           call 0x726850
// 006118cf  83c408               add esp, 8
// 006118d2  e969ffffff           jmp 0x611840
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
