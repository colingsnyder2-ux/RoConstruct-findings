// roc 2009-12 0096d300  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d300
//
// 0096d300  68d0039800           push 0x9803d0
// 0096d305  e81f76e8ff           call 0x7f4929
// 0096d30a  59                   pop ecx
// 0096d30b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
