// roc 2012-06 00783c70  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783c70
//
// 00783c70  6840096e00           push 0x6e0940
// 00783c75  6804fde200           push 0xe2fd04
// 00783c7a  e821d9c7ff           call 0x4015a0
// 00783c7f  83c408               add esp, 8
// 00783c82  e959ccf5ff           jmp 0x6e08e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
