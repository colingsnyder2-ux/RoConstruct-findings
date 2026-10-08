// roc 2009-12 0096d940  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d940
//
// 0096d940  68c0099800           push 0x9809c0
// 0096d945  e8df6fe8ff           call 0x7f4929
// 0096d94a  59                   pop ecx
// 0096d94b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
