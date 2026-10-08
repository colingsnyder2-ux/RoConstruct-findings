// roc 2009-06 0066ea00  unit: RBX::VFileMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066ea00
//
// 0066ea00  6850534800           push 0x485350
// 0066ea05  6840c7a300           push 0xa3c740
// 0066ea0a  e8012dd9ff           call 0x401710
// 0066ea0f  83c408               add esp, 8
// 0066ea12  e99965e1ff           jmp 0x484fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
