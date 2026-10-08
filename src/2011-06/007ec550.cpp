// roc 2011-06 007ec550  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec550
//
// 007ec550  6830c57e00           push 0x7ec530
// 007ec555  68ac5fcd00           push 0xcd5fac
// 007ec55a  e8b150c1ff           call 0x401610
// 007ec55f  83c408               add esp, 8
// 007ec562  e909feffff           jmp 0x7ec370
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
