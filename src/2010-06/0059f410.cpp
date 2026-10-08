// roc 2010-06 0059f410  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f410
//
// 0059f410  6840414000           push 0x404140
// 0059f415  6838fbbf00           push 0xbffb38
// 0059f41a  e87122e6ff           call 0x401690
// 0059f41f  83c408               add esp, 8
// 0059f422  e94945e6ff           jmp 0x403970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
