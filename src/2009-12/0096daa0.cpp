// roc 2009-12 0096daa0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096daa0
//
// 0096daa0  68b00a9800           push 0x980ab0
// 0096daa5  e87f6ee8ff           call 0x7f4929
// 0096daaa  59                   pop ecx
// 0096daab  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
