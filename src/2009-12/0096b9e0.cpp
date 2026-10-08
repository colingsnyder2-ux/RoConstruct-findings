// roc 2009-12 0096b9e0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b9e0
//
// 0096b9e0  68f0f19700           push 0x97f1f0
// 0096b9e5  e83f8fe8ff           call 0x7f4929
// 0096b9ea  59                   pop ecx
// 0096b9eb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
