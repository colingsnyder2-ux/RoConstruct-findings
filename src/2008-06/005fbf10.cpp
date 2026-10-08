// roc 2008-06 005fbf10  unit: RBX::VLocalBackpackItem::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbf10
//
// 005fbf10  6804529700           push 0x975204
// 005fbf15  6800665700           push 0x576600
// 005fbf1a  e811b4f5ff           call 0x557330
// 005fbf1f  83c408               add esp, 8
// 005fbf22  e9b995f7ff           jmp 0x5754e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
