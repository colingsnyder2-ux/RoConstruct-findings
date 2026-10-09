// roc 2009-12 006d6990  unit: RBX::RocketTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6990
//
// 006d6990  68e0496d00           push 0x6d49e0
// 006d6995  684c2db900           push 0xb92d4c
// 006d699a  e891acd2ff           call 0x401630
// 006d699f  83c408               add esp, 8
// 006d69a2  e949daffff           jmp 0x6d43f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
