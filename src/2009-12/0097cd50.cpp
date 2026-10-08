// roc 2009-12 0097cd50  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cd50
//
// 0097cd50  6820a79800           push 0x98a720
// 0097cd55  e8cf7be7ff           call 0x7f4929
// 0097cd5a  59                   pop ecx
// 0097cd5b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
