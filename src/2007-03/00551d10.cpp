// roc 2007-03 00551d10  unit: seg_00550000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00551d10
//
// 00551d10  c7810401000000000000 mov dword ptr [ecx + 0x104], 0
// 00551d1a  c3                   ret 
// library rbxgs/gui\Widget.cpp (function ?onLoseFocus@Widget@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/Widget.cpp
