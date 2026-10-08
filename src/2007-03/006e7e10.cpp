// roc 2007-03 006e7e10  unit: seg_006e0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7e10
//
// 006e7e10  b807000000           mov eax, 7
// 006e7e15  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
