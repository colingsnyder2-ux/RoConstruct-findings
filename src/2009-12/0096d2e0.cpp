// roc 2009-12 0096d2e0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d2e0
//
// 0096d2e0  68b0039800           push 0x9803b0
// 0096d2e5  e83f76e8ff           call 0x7f4929
// 0096d2ea  59                   pop ecx
// 0096d2eb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
