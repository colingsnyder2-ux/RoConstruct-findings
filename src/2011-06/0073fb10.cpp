// roc 2011-06 0073fb10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073fb10
//
// 0073fb10  6820f77300           push 0x73f720
// 0073fb15  68f44ccd00           push 0xcd4cf4
// 0073fb1a  e8f11accff           call 0x401610
// 0073fb1f  83c408               add esp, 8
// 0073fb22  e969fbffff           jmp 0x73f690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
