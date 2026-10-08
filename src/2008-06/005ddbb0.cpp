// roc 2008-06 005ddbb0  unit: RBX::Message  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddbb0
//
// 005ddbb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ddbb4  8b442404             mov eax, dword ptr [esp + 4]
// 005ddbb8  d901                 fld dword ptr [ecx]
// 005ddbba  d918                 fstp dword ptr [eax]
// 005ddbbc  d94110               fld dword ptr [ecx + 0x10]
// 005ddbbf  d95804               fstp dword ptr [eax + 4]
// 005ddbc2  d94120               fld dword ptr [ecx + 0x20]
// 005ddbc5  d95808               fstp dword ptr [eax + 8]
// 005ddbc8  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toDiagonal@Math@RBX@@SA?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
