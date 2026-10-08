// roc 2009-12 0096dbc0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dbc0
//
// 0096dbc0  68c00b9800           push 0x980bc0
// 0096dbc5  e85f6de8ff           call 0x7f4929
// 0096dbca  59                   pop ecx
// 0096dbcb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
