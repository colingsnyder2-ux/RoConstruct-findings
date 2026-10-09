// roc 2009-12 0076bb70  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076bb70
//
// 0076bb70  6840b87600           push 0x76b840
// 0076bb75  68a47eb900           push 0xb97ea4
// 0076bb7a  e8b15ac9ff           call 0x401630
// 0076bb7f  83c408               add esp, 8
// 0076bb82  e9a9f7ffff           jmp 0x76b330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
