// roc 2009-12 0096cd00  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096cd00
//
// 0096cd00  6800009800           push 0x980000
// 0096cd05  e81f7ce8ff           call 0x7f4929
// 0096cd0a  59                   pop ecx
// 0096cd0b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
