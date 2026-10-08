// roc 2009-12 0097c6a0  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c6a0
//
// 0097c6a0  6810a69800           push 0x98a610
// 0097c6a5  e87f82e7ff           call 0x7f4929
// 0097c6aa  59                   pop ecx
// 0097c6ab  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
