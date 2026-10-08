// roc 2009-12 00974150  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00974150
//
// 00974150  6880559800           push 0x985580
// 00974155  e8cf07e8ff           call 0x7f4929
// 0097415a  59                   pop ecx
// 0097415b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
