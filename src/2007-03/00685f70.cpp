// roc 2007-03 00685f70  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685f70
//
// 00685f70  51                   push ecx
// 00685f71  ff15b8d27700         call dword ptr [0x77d2b8]
// 00685f77  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
