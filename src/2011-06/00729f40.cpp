// roc 2011-06 00729f40  unit: RBX::VPartAdornment::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00729f40
//
// 00729f40  68309f7200           push 0x729f30
// 00729f45  684c44cd00           push 0xcd444c
// 00729f4a  e8c176cdff           call 0x401610
// 00729f4f  83c408               add esp, 8
// 00729f52  e969ffffff           jmp 0x729ec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
