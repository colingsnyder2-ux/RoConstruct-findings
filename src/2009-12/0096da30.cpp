// roc 2009-12 0096da30  unit: seg_00960000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096da30
//
// 0096da30  68400a9800           push 0x980a40
// 0096da35  e8ef6ee8ff           call 0x7f4929
// 0096da3a  59                   pop ecx
// 0096da3b  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
