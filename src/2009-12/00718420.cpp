// roc 2009-12 00718420  unit: RBX::JointsService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00718420
//
// 00718420  6820895300           push 0x538920
// 00718425  68e805b800           push 0xb805e8
// 0071842a  e80192ceff           call 0x401630
// 0071842f  83c408               add esp, 8
// 00718432  e979f6e1ff           jmp 0x537ab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
