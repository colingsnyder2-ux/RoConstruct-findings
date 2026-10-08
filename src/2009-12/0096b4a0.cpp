// roc 2009-12 0096b4a0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b4a0
//
// 0096b4a0  6850f09700           push 0x97f050
// 0096b4a5  e87f94e8ff           call 0x7f4929
// 0096b4aa  59                   pop ecx
// 0096b4ab  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
