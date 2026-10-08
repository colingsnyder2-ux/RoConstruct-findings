// roc 2009-12 0097cd30  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cd30
//
// 0097cd30  68d0a69800           push 0x98a6d0
// 0097cd35  e8ef7be7ff           call 0x7f4929
// 0097cd3a  59                   pop ecx
// 0097cd3b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
