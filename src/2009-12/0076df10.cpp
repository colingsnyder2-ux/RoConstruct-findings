// roc 2009-12 0076df10  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076df10
//
// 0076df10  68c0dc7600           push 0x76dcc0
// 0076df15  684082b900           push 0xb98240
// 0076df1a  e81137c9ff           call 0x401630
// 0076df1f  83c408               add esp, 8
// 0076df22  e929fdffff           jmp 0x76dc50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
