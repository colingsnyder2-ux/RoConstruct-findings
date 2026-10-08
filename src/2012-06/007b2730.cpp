// roc 2012-06 007b2730  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b2730
//
// 007b2730  6860d34c00           push 0x4cd360
// 007b2735  68a8c3e100           push 0xe1c3a8
// 007b273a  e861eec4ff           call 0x4015a0
// 007b273f  83c408               add esp, 8
// 007b2742  e9b9a0d1ff           jmp 0x4cc800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
