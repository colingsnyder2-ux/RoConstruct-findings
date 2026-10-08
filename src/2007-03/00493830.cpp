// roc 2007-03 00493830  unit: seg_00490000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00493830
//
// 00493830  6848868b00           push 0x8b8648
// 00493835  6860bf4800           push 0x48bf60
// 0049383a  e811302900           call 0x726850
// 0049383f  83c408               add esp, 8
// 00493842  e9997fffff           jmp 0x48b7e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
