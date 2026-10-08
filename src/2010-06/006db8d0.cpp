// roc 2010-06 006db8d0  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db8d0
//
// 006db8d0  68c0c55a00           push 0x5ac5c0
// 006db8d5  6830c2c000           push 0xc0c230
// 006db8da  e8b15dd2ff           call 0x401690
// 006db8df  83c408               add esp, 8
// 006db8e2  e92900edff           jmp 0x5ab910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
