// roc 2009-12 0097cd40  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cd40
//
// 0097cd40  6810a79800           push 0x98a710
// 0097cd45  e8df7be7ff           call 0x7f4929
// 0097cd4a  59                   pop ecx
// 0097cd4b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
