// roc 2007-03 0065e5c0  unit: seg_00650000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065e5c0
//
// 0065e5c0  b828000000           mov eax, 0x28
// 0065e5c5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
