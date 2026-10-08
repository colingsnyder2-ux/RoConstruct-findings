// roc 2009-12 009791b0  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009791b0
//
// 009791b0  684461b900           push 0xb96144
// 009791b5  e8667ed3ff           call 0x6b1020
// 009791ba  59                   pop ecx
// 009791bb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
