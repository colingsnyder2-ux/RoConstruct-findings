// roc 2009-12 0096da80  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096da80
//
// 0096da80  68900a9800           push 0x980a90
// 0096da85  e89f6ee8ff           call 0x7f4929
// 0096da8a  59                   pop ecx
// 0096da8b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
