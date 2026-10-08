// roc 2010-06 005c4a10  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4a10
//
// 005c4a10  6840175900           push 0x591740
// 005c4a15  68b8a4c000           push 0xc0a4b8
// 005c4a1a  e871cce3ff           call 0x401690
// 005c4a1f  83c408               add esp, 8
// 005c4a22  e9b9ccfcff           jmp 0x5916e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
