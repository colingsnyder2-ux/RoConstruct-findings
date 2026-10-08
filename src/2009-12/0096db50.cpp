// roc 2009-12 0096db50  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096db50
//
// 0096db50  68600b9800           push 0x980b60
// 0096db55  e8cf6de8ff           call 0x7f4929
// 0096db5a  59                   pop ecx
// 0096db5b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
