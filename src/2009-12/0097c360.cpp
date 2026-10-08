// roc 2009-12 0097c360  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c360
//
// 0097c360  68a0a39800           push 0x98a3a0
// 0097c365  e8bf85e7ff           call 0x7f4929
// 0097c36a  59                   pop ecx
// 0097c36b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
