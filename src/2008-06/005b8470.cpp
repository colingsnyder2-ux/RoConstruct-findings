// roc 2008-06 005b8470  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8470
//
// 005b8470  68c8d19600           push 0x96d1c8
// 005b8475  6840884300           push 0x438840
// 005b847a  e8b1eef9ff           call 0x557330
// 005b847f  83c408               add esp, 8
// 005b8482  e909fbe7ff           jmp 0x437f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
