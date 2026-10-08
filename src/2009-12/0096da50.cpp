// roc 2009-12 0096da50  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096da50
//
// 0096da50  68600a9800           push 0x980a60
// 0096da55  e8cf6ee8ff           call 0x7f4929
// 0096da5a  59                   pop ecx
// 0096da5b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
