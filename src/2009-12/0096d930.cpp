// roc 2009-12 0096d930  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d930
//
// 0096d930  68b0099800           push 0x9809b0
// 0096d935  e8ef6fe8ff           call 0x7f4929
// 0096d93a  59                   pop ecx
// 0096d93b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
