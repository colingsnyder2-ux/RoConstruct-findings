// roc 2009-12 0096ccf0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ccf0
//
// 0096ccf0  68f0ff9700           push 0x97fff0
// 0096ccf5  e82f7ce8ff           call 0x7f4929
// 0096ccfa  59                   pop ecx
// 0096ccfb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
