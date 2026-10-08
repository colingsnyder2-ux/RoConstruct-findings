// roc 2009-12 0096d500  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096d500
//
// 0096d500  6870059800           push 0x980570
// 0096d505  e81f74e8ff           call 0x7f4929
// 0096d50a  59                   pop ecx
// 0096d50b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
