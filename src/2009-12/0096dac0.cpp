// roc 2009-12 0096dac0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dac0
//
// 0096dac0  68f00a9800           push 0x980af0
// 0096dac5  e85f6ee8ff           call 0x7f4929
// 0096daca  59                   pop ecx
// 0096dacb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
