// roc 2008-06 00666240  unit: RBX::PartDragTool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666240
//
// 00666240  d9ee                 fldz 
// 00666242  d95904               fstp dword ptr [ecx + 4]
// 00666245  c3                   ret 
// library rbxgs/util\ExponentialRunningAverage.cpp (function ?reset@floatERA@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/ExponentialRunningAverage.cpp
