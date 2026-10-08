// roc 2009-12 0096b4b0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b4b0
//
// 0096b4b0  6860f09700           push 0x97f060
// 0096b4b5  e86f94e8ff           call 0x7f4929
// 0096b4ba  59                   pop ecx
// 0096b4bb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
