// roc 2009-12 0096db20  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096db20
//
// 0096db20  68300b9800           push 0x980b30
// 0096db25  e8ff6de8ff           call 0x7f4929
// 0096db2a  59                   pop ecx
// 0096db2b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
