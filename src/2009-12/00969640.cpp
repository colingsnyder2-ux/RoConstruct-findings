// roc 2009-12 00969640  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969640
//
// 00969640  68e0e79700           push 0x97e7e0
// 00969645  e8dfb2e8ff           call 0x7f4929
// 0096964a  59                   pop ecx
// 0096964b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
