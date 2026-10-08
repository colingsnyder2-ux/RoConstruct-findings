// roc 2011-06 00720e80  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00720e80
//
// 00720e80  68800d7200           push 0x720d80
// 00720e85  687c3fcd00           push 0xcd3f7c
// 00720e8a  e88107ceff           call 0x401610
// 00720e8f  83c408               add esp, 8
// 00720e92  e949feffff           jmp 0x720ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
