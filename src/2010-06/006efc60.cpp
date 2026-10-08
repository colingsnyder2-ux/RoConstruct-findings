// roc 2010-06 006efc60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006efc60
//
// 006efc60  6870d15c00           push 0x5cd170
// 006efc65  683891c100           push 0xc19138
// 006efc6a  e8211ad1ff           call 0x401690
// 006efc6f  83c408               add esp, 8
// 006efc72  e989ccedff           jmp 0x5cc900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
