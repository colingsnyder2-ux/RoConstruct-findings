// roc 2009-06 006f4a10  unit: RBX::HUMAN::GettingUp  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4a10
//
// 006f4a10  d9ee                 fldz 
// 006f4a12  d9510c               fst dword ptr [ecx + 0xc]
// 006f4a15  d95108               fst dword ptr [ecx + 8]
// 006f4a18  d95904               fstp dword ptr [ecx + 4]
// 006f4a1b  c3                   ret 
// library rbxgs/util\ExponentialRunningAverage.cpp (function ?reset@Vector3ERA@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/ExponentialRunningAverage.cpp
