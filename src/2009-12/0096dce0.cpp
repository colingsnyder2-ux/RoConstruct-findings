// roc 2009-12 0096dce0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096dce0
//
// 0096dce0  68300d9800           push 0x980d30
// 0096dce5  e83f6ce8ff           call 0x7f4929
// 0096dcea  59                   pop ecx
// 0096dceb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
