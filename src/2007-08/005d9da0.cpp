// roc 2007-08 005d9da0  unit: RBX::UnifiedImageWidget  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9da0
//
// 005d9da0  d9ee                 fldz 
// 005d9da2  d999b0000000         fstp dword ptr [ecx + 0xb0]
// 005d9da8  c3                   ret 
// library rbxgs/v8datamodel\TimeState.cpp (function ?clear@TimeState@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimeState.cpp
