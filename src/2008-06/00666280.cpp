// roc 2008-06 00666280  unit: RBX::PartDragTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666280
//
// 00666280  d9ee                 fldz 
// 00666282  d9510c               fst dword ptr [ecx + 0xc]
// 00666285  d95108               fst dword ptr [ecx + 8]
// 00666288  d95904               fstp dword ptr [ecx + 4]
// 0066628b  c3                   ret 
// library rbxgs/util\ExponentialRunningAverage.cpp (function ?reset@Vector3ERA@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/ExponentialRunningAverage.cpp
