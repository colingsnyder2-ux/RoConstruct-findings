// roc 2009-12 006d5990  unit: RBX::HingeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5990
//
// 006d5990  6860496d00           push 0x6d4960
// 006d5995  682c2db900           push 0xb92d2c
// 006d599a  e891bcd2ff           call 0x401630
// 006d599f  83c408               add esp, 8
// 006d59a2  e9c9e6ffff           jmp 0x6d4070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
