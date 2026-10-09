// roc 2009-12 006ee8c0  unit: RBX::Primitive  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ee8c0
//
// 006ee8c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ee8c4  8b442404             mov eax, dword ptr [esp + 4]
// 006ee8c8  d901                 fld dword ptr [ecx]
// 006ee8ca  d918                 fstp dword ptr [eax]
// 006ee8cc  d94110               fld dword ptr [ecx + 0x10]
// 006ee8cf  d95804               fstp dword ptr [eax + 4]
// 006ee8d2  d94120               fld dword ptr [ecx + 0x20]
// 006ee8d5  d95808               fstp dword ptr [eax + 8]
// 006ee8d8  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
