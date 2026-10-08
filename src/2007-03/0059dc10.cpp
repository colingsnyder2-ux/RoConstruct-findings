// roc 2007-03 0059dc10  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059dc10
//
// 0059dc10  6820838b00           push 0x8b8320
// 0059dc15  68a0584800           push 0x4858a0
// 0059dc1a  e8318c1800           call 0x726850
// 0059dc1f  83c408               add esp, 8
// 0059dc22  e95971eeff           jmp 0x484d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
