// roc 2009-12 00697d10  unit: RBX::ArrowTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697d10
//
// 00697d10  68a06d6900           push 0x696da0
// 00697d15  686016b900           push 0xb91660
// 00697d1a  e81199d6ff           call 0x401630
// 00697d1f  83c408               add esp, 8
// 00697d22  e919e4ffff           jmp 0x696140
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
