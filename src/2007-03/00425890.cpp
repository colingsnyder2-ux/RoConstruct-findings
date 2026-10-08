// roc 2007-03 00425890  unit: seg_00420000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00425890
//
// 00425890  b80000ffff           mov eax, 0xffff0000
// 00425895  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?what@bad_weak_ptr@boost@@UBEPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
