// roc 2008-06 005c7010  unit: RBX::OscillateMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7010
//
// 005c7010  686c969700           push 0x97966c
// 005c7015  6860615c00           push 0x5c6160
// 005c701a  e81103f9ff           call 0x557330
// 005c701f  83c408               add esp, 8
// 005c7022  e9c9e9ffff           jmp 0x5c59f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
