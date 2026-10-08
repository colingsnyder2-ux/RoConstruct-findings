// roc 2009-06 00644850  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644850
//
// 00644850  68d0214300           push 0x4321d0
// 00644855  6804a3a300           push 0xa3a304
// 0064485a  e8b1cedbff           call 0x401710
// 0064485f  83c408               add esp, 8
// 00644862  e929cedeff           jmp 0x431690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
