// roc 2011-06 00663240  unit: RBX::VBaseScript::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00663240
//
// 00663240  68d0316600           push 0x6631d0
// 00663245  6834dbcc00           push 0xccdb34
// 0066324a  e8c1e3d9ff           call 0x401610
// 0066324f  83c408               add esp, 8
// 00663252  e9d9feffff           jmp 0x663130
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
