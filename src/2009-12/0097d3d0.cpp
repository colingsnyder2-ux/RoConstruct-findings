// roc 2009-12 0097d3d0  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d3d0
//
// 0097d3d0  6820a89800           push 0x98a820
// 0097d3d5  e84f75e7ff           call 0x7f4929
// 0097d3da  59                   pop ecx
// 0097d3db  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
