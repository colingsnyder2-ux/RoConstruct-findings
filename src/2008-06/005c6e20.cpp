// roc 2008-06 005c6e20  unit: RBX::RightMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6e20
//
// 005c6e20  6864969700           push 0x979664
// 005c6e25  6840615c00           push 0x5c6140
// 005c6e2a  e80105f9ff           call 0x557330
// 005c6e2f  83c408               add esp, 8
// 005c6e32  e9d9eaffff           jmp 0x5c5910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
