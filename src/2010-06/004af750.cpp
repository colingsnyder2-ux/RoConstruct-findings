// roc 2010-06 004af750  unit: RBX::VPants::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004af750
//
// 004af750  68b0494a00           push 0x4a49b0
// 004af755  68503ec000           push 0xc03e50
// 004af75a  e8311ff5ff           call 0x401690
// 004af75f  83c408               add esp, 8
// 004af762  e94943ffff           jmp 0x4a3ab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
