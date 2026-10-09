// roc 2009-06 00682dd0  unit: RBX::Sky  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682dd0
//
// 00682dd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00682dd4  d94108               fld dword ptr [ecx + 8]
// 00682dd7  8b442404             mov eax, dword ptr [esp + 4]
// 00682ddb  d9e0                 fchs 
// 00682ddd  d918                 fstp dword ptr [eax]
// 00682ddf  d94104               fld dword ptr [ecx + 4]
// 00682de2  d95804               fstp dword ptr [eax + 4]
// 00682de5  d901                 fld dword ptr [ecx]
// 00682de7  d95808               fstp dword ptr [eax + 8]
// 00682dea  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$02@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
