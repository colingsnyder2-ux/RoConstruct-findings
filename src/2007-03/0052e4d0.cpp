// roc 2007-03 0052e4d0  unit: seg_00520000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052e4d0
//
// 0052e4d0  68d0538b00           push 0x8b53d0
// 0052e4d5  68a0344000           push 0x4034a0
// 0052e4da  e871831f00           call 0x726850
// 0052e4df  83c408               add esp, 8
// 0052e4e2  e95940edff           jmp 0x402540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
