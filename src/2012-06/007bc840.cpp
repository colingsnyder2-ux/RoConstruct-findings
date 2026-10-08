// roc 2012-06 007bc840  unit: RBX::Geometry  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bc840
//
// 007bc840  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007bc844  8b442404             mov eax, dword ptr [esp + 4]
// 007bc848  d901                 fld dword ptr [ecx]
// 007bc84a  d918                 fstp dword ptr [eax]
// 007bc84c  d94110               fld dword ptr [ecx + 0x10]
// 007bc84f  d95804               fstp dword ptr [eax + 4]
// 007bc852  d94120               fld dword ptr [ecx + 0x20]
// 007bc855  d95808               fstp dword ptr [eax + 8]
// 007bc858  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
