// roc 2011-06 006d3960  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3960
//
// 006d3960  6870306d00           push 0x6d3070
// 006d3965  68e015cd00           push 0xcd15e0
// 006d396a  e8a1dcd2ff           call 0x401610
// 006d396f  83c408               add esp, 8
// 006d3972  e979f4ffff           jmp 0x6d2df0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
