// roc 2012-06 007d3810  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d3810
//
// 007d3810  6890d15100           push 0x51d190
// 007d3815  6870e1e100           push 0xe1e170
// 007d381a  e881ddc2ff           call 0x4015a0
// 007d381f  83c408               add esp, 8
// 007d3822  e95983d4ff           jmp 0x51bb80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
