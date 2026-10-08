// roc 2009-06 0066cbf0  unit: RBX::VHumanoid::?$EventDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066cbf0
//
// 0066cbf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066cbf4  8b442404             mov eax, dword ptr [esp + 4]
// 0066cbf8  d901                 fld dword ptr [ecx]
// 0066cbfa  d918                 fstp dword ptr [eax]
// 0066cbfc  d94110               fld dword ptr [ecx + 0x10]
// 0066cbff  d95804               fstp dword ptr [eax + 4]
// 0066cc02  d94120               fld dword ptr [ecx + 0x20]
// 0066cc05  d95808               fstp dword ptr [eax + 8]
// 0066cc08  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
