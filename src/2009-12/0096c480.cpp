// roc 2009-12 0096c480  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096c480
//
// 0096c480  68b0fa9700           push 0x97fab0
// 0096c485  e89f84e8ff           call 0x7f4929
// 0096c48a  59                   pop ecx
// 0096c48b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
