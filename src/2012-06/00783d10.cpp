// roc 2012-06 00783d10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783d10
//
// 00783d10  68100f7700           push 0x770f10
// 00783d15  68fc85e400           push 0xe485fc
// 00783d1a  e881d8c7ff           call 0x4015a0
// 00783d1f  83c408               add esp, 8
// 00783d22  e989d1feff           jmp 0x770eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
