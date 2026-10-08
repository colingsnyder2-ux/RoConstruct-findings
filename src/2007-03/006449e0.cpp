// roc 2007-03 006449e0  unit: seg_00640000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006449e0
//
// 006449e0  51                   push ecx
// 006449e1  ff15b0ea7700         call dword ptr [0x77eab0]
// 006449e7  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
