// roc 2009-06 00682d90  unit: RBX::Sky  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682d90
//
// 00682d90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00682d94  d901                 fld dword ptr [ecx]
// 00682d96  8b442404             mov eax, dword ptr [esp + 4]
// 00682d9a  d9e0                 fchs 
// 00682d9c  d918                 fstp dword ptr [eax]
// 00682d9e  d94108               fld dword ptr [ecx + 8]
// 00682da1  d95804               fstp dword ptr [eax + 4]
// 00682da4  d94104               fld dword ptr [ecx + 4]
// 00682da7  d95808               fstp dword ptr [eax + 8]
// 00682daa  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$00@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
