// roc 2009-12 00973540  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00973540
//
// 00973540  68c04d9800           push 0x984dc0
// 00973545  e8df13e8ff           call 0x7f4929
// 0097354a  59                   pop ecx
// 0097354b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
