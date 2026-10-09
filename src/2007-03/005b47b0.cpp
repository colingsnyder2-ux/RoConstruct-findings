// roc 2007-03 005b47b0  unit: seg_005b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b47b0
//
// 005b47b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b47b4  8b442404             mov eax, dword ptr [esp + 4]
// 005b47b8  d901                 fld dword ptr [ecx]
// 005b47ba  d918                 fstp dword ptr [eax]
// 005b47bc  d94104               fld dword ptr [ecx + 4]
// 005b47bf  d95804               fstp dword ptr [eax + 4]
// 005b47c2  d94108               fld dword ptr [ecx + 8]
// 005b47c5  d95808               fstp dword ptr [eax + 8]
// 005b47c8  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
