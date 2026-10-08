// roc 2009-12 0097cd60  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cd60
//
// 0097cd60  6840a79800           push 0x98a740
// 0097cd65  e8bf7be7ff           call 0x7f4929
// 0097cd6a  59                   pop ecx
// 0097cd6b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
