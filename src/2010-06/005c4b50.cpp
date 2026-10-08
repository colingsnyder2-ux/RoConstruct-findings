// roc 2010-06 005c4b50  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4b50
//
// 005c4b50  68b02a5900           push 0x592ab0
// 005c4b55  6884a9c000           push 0xc0a984
// 005c4b5a  e831cbe3ff           call 0x401690
// 005c4b5f  83c408               add esp, 8
// 005c4b62  e9e9defcff           jmp 0x592a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
