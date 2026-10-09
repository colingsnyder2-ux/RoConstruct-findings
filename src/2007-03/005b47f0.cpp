// roc 2007-03 005b47f0  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b47f0
//
// 005b47f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b47f4  8b442404             mov eax, dword ptr [esp + 4]
// 005b47f8  d901                 fld dword ptr [ecx]
// 005b47fa  d918                 fstp dword ptr [eax]
// 005b47fc  d94108               fld dword ptr [ecx + 8]
// 005b47ff  d9e0                 fchs 
// 005b4801  d95804               fstp dword ptr [eax + 4]
// 005b4804  d94104               fld dword ptr [ecx + 4]
// 005b4807  d95808               fstp dword ptr [eax + 8]
// 005b480a  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$03@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
