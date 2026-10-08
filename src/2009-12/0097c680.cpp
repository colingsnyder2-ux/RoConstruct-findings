// roc 2009-12 0097c680  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c680
//
// 0097c680  68a0a59800           push 0x98a5a0
// 0097c685  e89f82e7ff           call 0x7f4929
// 0097c68a  59                   pop ecx
// 0097c68b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
