// roc 2009-12 0096c930  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096c930
//
// 0096c930  68d0fd9700           push 0x97fdd0
// 0096c935  e8ef7fe8ff           call 0x7f4929
// 0096c93a  59                   pop ecx
// 0096c93b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
