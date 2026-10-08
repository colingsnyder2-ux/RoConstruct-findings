// roc 2009-12 0096d310  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d310
//
// 0096d310  68e0039800           push 0x9803e0
// 0096d315  e80f76e8ff           call 0x7f4929
// 0096d31a  59                   pop ecx
// 0096d31b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
