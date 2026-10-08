// roc 2012-06 005575b0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005575b0
//
// 005575b0  6870af5400           push 0x54af70
// 005575b5  68681be200           push 0xe21b68
// 005575ba  e8e19feaff           call 0x4015a0
// 005575bf  83c408               add esp, 8
// 005575c2  e94939ffff           jmp 0x54af10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
