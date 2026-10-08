// roc 2009-12 0097c590  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c590
//
// 0097c590  6800a59800           push 0x98a500
// 0097c595  e88f83e7ff           call 0x7f4929
// 0097c59a  59                   pop ecx
// 0097c59b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
