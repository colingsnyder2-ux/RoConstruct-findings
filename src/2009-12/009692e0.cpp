// roc 2009-12 009692e0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009692e0
//
// 009692e0  6880e79700           push 0x97e780
// 009692e5  e83fb6e8ff           call 0x7f4929
// 009692ea  59                   pop ecx
// 009692eb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
