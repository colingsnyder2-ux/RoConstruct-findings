// roc 2009-12 0096da90  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096da90
//
// 0096da90  68a00a9800           push 0x980aa0
// 0096da95  e88f6ee8ff           call 0x7f4929
// 0096da9a  59                   pop ecx
// 0096da9b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
