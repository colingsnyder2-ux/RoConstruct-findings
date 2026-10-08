// roc 2007-03 006e7d50  unit: seg_006e0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7d50
//
// 006e7d50  b80d000000           mov eax, 0xd
// 006e7d55  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
