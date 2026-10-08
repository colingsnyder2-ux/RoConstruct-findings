// roc 2009-12 0097c3e0  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c3e0
//
// 0097c3e0  68d0a39800           push 0x98a3d0
// 0097c3e5  e83f85e7ff           call 0x7f4929
// 0097c3ea  59                   pop ecx
// 0097c3eb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
