// roc 2009-06 004bc420  unit: RBX::VPants::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bc420
//
// 004bc420  6890484b00           push 0x4b4890
// 004bc425  68f8d4a300           push 0xa3d4f8
// 004bc42a  e8e152f4ff           call 0x401710
// 004bc42f  83c408               add esp, 8
// 004bc432  e94978ffff           jmp 0x4b3c80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
