// roc 2008-06 0056ff60  unit: RBX::W4NormalId::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ff60
//
// 0056ff60  68b44c9700           push 0x974cb4
// 0056ff65  6850ff5600           push 0x56ff50
// 0056ff6a  e8c173feff           call 0x557330
// 0056ff6f  83c408               add esp, 8
// 0056ff72  e979ffffff           jmp 0x56fef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
