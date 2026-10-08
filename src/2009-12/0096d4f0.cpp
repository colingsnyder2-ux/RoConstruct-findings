// roc 2009-12 0096d4f0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d4f0
//
// 0096d4f0  6860059800           push 0x980560
// 0096d4f5  e82f74e8ff           call 0x7f4929
// 0096d4fa  59                   pop ecx
// 0096d4fb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
