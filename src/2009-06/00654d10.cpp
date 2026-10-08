// roc 2009-06 00654d10  unit: RBX::FillTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654d10
//
// 00654d10  6800346500           push 0x653400
// 00654d15  6850c7a400           push 0xa4c750
// 00654d1a  e8f1c9daff           call 0x401710
// 00654d1f  83c408               add esp, 8
// 00654d22  e919daffff           jmp 0x652740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
