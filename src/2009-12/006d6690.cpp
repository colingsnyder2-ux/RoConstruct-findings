// roc 2009-12 006d6690  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6690
//
// 006d6690  68004a6d00           push 0x6d4a00
// 006d6695  68542db900           push 0xb92d54
// 006d669a  e891afd2ff           call 0x401630
// 006d669f  83c408               add esp, 8
// 006d66a2  e929deffff           jmp 0x6d44d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
