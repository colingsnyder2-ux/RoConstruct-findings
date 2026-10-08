// roc 2007-03 005ddc30  unit: seg_005d0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ddc30
//
// 005ddc30  8d8100010000         lea eax, [ecx + 0x100]
// 005ddc36  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?getName@Instance@RBX@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
