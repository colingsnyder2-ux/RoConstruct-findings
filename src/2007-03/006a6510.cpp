// roc 2007-03 006a6510  unit: seg_006a0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a6510
//
// 006a6510  b805000000           mov eax, 5
// 006a6515  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
