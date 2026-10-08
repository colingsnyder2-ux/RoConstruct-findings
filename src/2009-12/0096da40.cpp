// roc 2009-12 0096da40  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096da40
//
// 0096da40  68500a9800           push 0x980a50
// 0096da45  e8df6ee8ff           call 0x7f4929
// 0096da4a  59                   pop ecx
// 0096da4b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
