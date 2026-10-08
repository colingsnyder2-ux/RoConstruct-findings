// roc 2009-12 0096a2f0  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a2f0
//
// 0096a2f0  6880ef9700           push 0x97ef80
// 0096a2f5  e82fa6e8ff           call 0x7f4929
// 0096a2fa  59                   pop ecx
// 0096a2fb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
