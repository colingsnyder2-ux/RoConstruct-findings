// roc 2009-06 0065a5f0  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a5f0
//
// 0065a5f0  6830b44500           push 0x45b430
// 0065a5f5  6804b5a300           push 0xa3b504
// 0065a5fa  e81171daff           call 0x401710
// 0065a5ff  83c408               add esp, 8
// 0065a602  e989ffdfff           jmp 0x45a590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
