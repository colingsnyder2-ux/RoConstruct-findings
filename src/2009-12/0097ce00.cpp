// roc 2009-12 0097ce00  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097ce00
//
// 0097ce00  6870a79800           push 0x98a770
// 0097ce05  e81f7be7ff           call 0x7f4929
// 0097ce0a  59                   pop ecx
// 0097ce0b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
