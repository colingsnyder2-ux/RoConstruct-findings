// roc 2010-06 0068f240  unit: RBX::Mechanism  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068f240
//
// 0068f240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068f244  8b442404             mov eax, dword ptr [esp + 4]
// 0068f248  d901                 fld dword ptr [ecx]
// 0068f24a  d918                 fstp dword ptr [eax]
// 0068f24c  d94110               fld dword ptr [ecx + 0x10]
// 0068f24f  d95804               fstp dword ptr [eax + 4]
// 0068f252  d94120               fld dword ptr [ecx + 0x20]
// 0068f255  d95808               fstp dword ptr [eax + 8]
// 0068f258  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
