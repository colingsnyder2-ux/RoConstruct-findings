// roc 2010-06 005c4990  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4990
//
// 005c4990  68d0295900           push 0x5929d0
// 005c4995  687ca9c000           push 0xc0a97c
// 005c499a  e8f1cce3ff           call 0x401690
// 005c499f  83c408               add esp, 8
// 005c49a2  e9c9dffcff           jmp 0x592970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
