// roc 2009-12 0097cd10  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cd10
//
// 0097cd10  68c0a69800           push 0x98a6c0
// 0097cd15  e80f7ce7ff           call 0x7f4929
// 0097cd1a  59                   pop ecx
// 0097cd1b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
