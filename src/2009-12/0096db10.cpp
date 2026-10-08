// roc 2009-12 0096db10  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096db10
//
// 0096db10  68200b9800           push 0x980b20
// 0096db15  e80f6ee8ff           call 0x7f4929
// 0096db1a  59                   pop ecx
// 0096db1b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
