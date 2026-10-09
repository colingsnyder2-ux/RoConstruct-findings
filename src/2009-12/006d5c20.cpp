// roc 2009-12 006d5c20  unit: RBX::OscillateMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5c20
//
// 006d5c20  6890496d00           push 0x6d4990
// 006d5c25  68382db900           push 0xb92d38
// 006d5c2a  e801bad2ff           call 0x401630
// 006d5c2f  83c408               add esp, 8
// 006d5c32  e989e5ffff           jmp 0x6d41c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
