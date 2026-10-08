// roc 2012-06 00783d30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783d30
//
// 00783d30  68800f7700           push 0x770f80
// 00783d35  680086e400           push 0xe48600
// 00783d3a  e861d8c7ff           call 0x4015a0
// 00783d3f  83c408               add esp, 8
// 00783d42  e9d9d1feff           jmp 0x770f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
