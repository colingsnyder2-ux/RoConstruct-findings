// roc 2009-12 0096dde0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dde0
//
// 0096dde0  68f00e9800           push 0x980ef0
// 0096dde5  e83f6be8ff           call 0x7f4929
// 0096ddea  59                   pop ecx
// 0096ddeb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
