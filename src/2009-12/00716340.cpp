// roc 2009-12 00716340  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716340
//
// 00716340  6810895300           push 0x538910
// 00716345  68e405b800           push 0xb805e4
// 0071634a  e8e1b2ceff           call 0x401630
// 0071634f  83c408               add esp, 8
// 00716352  e9e916e2ff           jmp 0x537a40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
