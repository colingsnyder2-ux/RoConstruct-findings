// roc 2009-12 0096ddd0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ddd0
//
// 0096ddd0  68e00e9800           push 0x980ee0
// 0096ddd5  e84f6be8ff           call 0x7f4929
// 0096ddda  59                   pop ecx
// 0096dddb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
