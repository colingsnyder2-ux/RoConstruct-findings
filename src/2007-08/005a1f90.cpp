// roc 2007-08 005a1f90  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1f90
//
// 005a1f90  68b4dc8b00           push 0x8bdcb4
// 005a1f95  6890794800           push 0x487990
// 005a1f9a  e881351800           call 0x725520
// 005a1f9f  83c408               add esp, 8
// 005a1fa2  e94951eeff           jmp 0x4870f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
