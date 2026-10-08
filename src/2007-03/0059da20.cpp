// roc 2007-03 0059da20  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059da20
//
// 0059da20  6828838b00           push 0x8b8328
// 0059da25  68c0584800           push 0x4858c0
// 0059da2a  e8218e1800           call 0x726850
// 0059da2f  83c408               add esp, 8
// 0059da32  e94974eeff           jmp 0x484e80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
