// roc 2008-06 005cff60  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cff60
//
// 005cff60  68b0fb9600           push 0x96fbb0
// 005cff65  6880aa4800           push 0x48aa80
// 005cff6a  e8c173f8ff           call 0x557330
// 005cff6f  83c408               add esp, 8
// 005cff72  e9299debff           jmp 0x489ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
