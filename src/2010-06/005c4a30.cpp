// roc 2010-06 005c4a30  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4a30
//
// 005c4a30  68402a5900           push 0x592a40
// 005c4a35  6880a9c000           push 0xc0a980
// 005c4a3a  e851cce3ff           call 0x401690
// 005c4a3f  83c408               add esp, 8
// 005c4a42  e999dffcff           jmp 0x5929e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
