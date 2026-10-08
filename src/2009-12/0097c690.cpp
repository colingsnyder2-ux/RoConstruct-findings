// roc 2009-12 0097c690  unit: seg_00970000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c690
//
// 0097c690  68d0a59800           push 0x98a5d0
// 0097c695  e88f82e7ff           call 0x7f4929
// 0097c69a  59                   pop ecx
// 0097c69b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
