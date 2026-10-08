// roc 2010-06 004db170  unit: RBX::VHint::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004db170
//
// 004db170  68b0a34d00           push 0x4da3b0
// 004db175  680462c000           push 0xc06204
// 004db17a  e81165f2ff           call 0x401690
// 004db17f  83c408               add esp, 8
// 004db182  e9e9eeffff           jmp 0x4da070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
