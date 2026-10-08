// roc 2007-03 0059f670  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059f670
//
// 0059f670  682c838b00           push 0x8b832c
// 0059f675  68d0584800           push 0x4858d0
// 0059f67a  e8d1711800           call 0x726850
// 0059f67f  83c408               add esp, 8
// 0059f682  e97958eeff           jmp 0x484f00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
