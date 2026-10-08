// roc 2009-12 00969fd0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969fd0
//
// 00969fd0  6830ee9700           push 0x97ee30
// 00969fd5  e84fa9e8ff           call 0x7f4929
// 00969fda  59                   pop ecx
// 00969fdb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
