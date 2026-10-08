// roc 2007-03 005c8f90  unit: seg_005c0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c8f90
//
// 005c8f90  b808000000           mov eax, 8
// 005c8f95  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
