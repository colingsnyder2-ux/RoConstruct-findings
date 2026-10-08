// roc 2007-03 005d8520  unit: seg_005d0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8520
//
// 005d8520  d9ee                 fldz 
// 005d8522  d999b0000000         fstp dword ptr [ecx + 0xb0]
// 005d8528  c3                   ret 
// library rbxgs/v8datamodel\TimeState.cpp (function ?clear@TimeState@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimeState.cpp
