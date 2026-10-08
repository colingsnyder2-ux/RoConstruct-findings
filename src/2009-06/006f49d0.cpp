// roc 2009-06 006f49d0  unit: RBX::HUMAN::GettingUp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f49d0
//
// 006f49d0  d9ee                 fldz 
// 006f49d2  d95904               fstp dword ptr [ecx + 4]
// 006f49d5  c3                   ret 
// library rbxgs/util\ExponentialRunningAverage.cpp (function ?reset@floatERA@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/ExponentialRunningAverage.cpp
