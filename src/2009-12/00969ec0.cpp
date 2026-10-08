// roc 2009-12 00969ec0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969ec0
//
// 00969ec0  6850ed9700           push 0x97ed50
// 00969ec5  e85faae8ff           call 0x7f4929
// 00969eca  59                   pop ecx
// 00969ecb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
