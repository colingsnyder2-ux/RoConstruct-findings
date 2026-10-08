// roc 2007-03 00552af0  unit: seg_00550000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00552af0
//
// 00552af0  b80a000000           mov eax, 0xa
// 00552af5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
