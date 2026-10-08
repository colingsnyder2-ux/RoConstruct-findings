// roc 2009-06 006a2940  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a2940
//
// 006a2940  6850a25e00           push 0x5ea250
// 006a2945  68e049a400           push 0xa449e0
// 006a294a  e8c1edd5ff           call 0x401710
// 006a294f  83c408               add esp, 8
// 006a2952  e97973f4ff           jmp 0x5e9cd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
