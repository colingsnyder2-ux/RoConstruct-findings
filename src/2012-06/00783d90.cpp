// roc 2012-06 00783d90  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783d90
//
// 00783d90  68f00f7700           push 0x770ff0
// 00783d95  680486e400           push 0xe48604
// 00783d9a  e801d8c7ff           call 0x4015a0
// 00783d9f  83c408               add esp, 8
// 00783da2  e9e9d1feff           jmp 0x770f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
