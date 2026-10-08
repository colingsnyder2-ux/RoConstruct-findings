// roc 2011-06 00512860  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512860
//
// 00512860  68c0974e00           push 0x4e97c0
// 00512865  687c80cb00           push 0xcb807c
// 0051286a  e8a1edeeff           call 0x401610
// 0051286f  83c408               add esp, 8
// 00512872  e9a96bfdff           jmp 0x4e9420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
