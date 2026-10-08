// roc 2007-08 005aad40  unit: RBX::World  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aad40
//
// 005aad40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aad44  8b442404             mov eax, dword ptr [esp + 4]
// 005aad48  d901                 fld dword ptr [ecx]
// 005aad4a  d918                 fstp dword ptr [eax]
// 005aad4c  d94110               fld dword ptr [ecx + 0x10]
// 005aad4f  d95804               fstp dword ptr [eax + 4]
// 005aad52  d94120               fld dword ptr [ecx + 0x20]
// 005aad55  d95808               fstp dword ptr [eax + 8]
// 005aad58  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
