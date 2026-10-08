// roc 2009-12 0096d910  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d910
//
// 0096d910  6890099800           push 0x980990
// 0096d915  e80f70e8ff           call 0x7f4929
// 0096d91a  59                   pop ecx
// 0096d91b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
