// roc 2010-06 005c4a50  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4a50
//
// 005c4a50  6830875b00           push 0x5b8730
// 005c4a55  689882c100           push 0xc18298
// 005c4a5a  e831cce3ff           call 0x401690
// 005c4a5f  83c408               add esp, 8
// 005c4a62  e9693cffff           jmp 0x5b86d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
