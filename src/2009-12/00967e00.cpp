// roc 2009-12 00967e00  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967e00
//
// 00967e00  68d0d69700           push 0x97d6d0
// 00967e05  e81fcbe8ff           call 0x7f4929
// 00967e0a  59                   pop ecx
// 00967e0b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
