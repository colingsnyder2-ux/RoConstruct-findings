// roc 2009-12 0068f430  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068f430
//
// 0068f430  68c0774100           push 0x4177c0
// 0068f435  68bca1b700           push 0xb7a1bc
// 0068f43a  e8f121d7ff           call 0x401630
// 0068f43f  83c408               add esp, 8
// 0068f442  e94981d8ff           jmp 0x417590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
