// roc 2007-03 005b4810  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4810
//
// 005b4810  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b4814  d901                 fld dword ptr [ecx]
// 005b4816  8b442404             mov eax, dword ptr [esp + 4]
// 005b481a  d9e0                 fchs 
// 005b481c  d918                 fstp dword ptr [eax]
// 005b481e  d94104               fld dword ptr [ecx + 4]
// 005b4821  d95804               fstp dword ptr [eax + 4]
// 005b4824  d94108               fld dword ptr [ecx + 8]
// 005b4827  d9e0                 fchs 
// 005b4829  d95808               fstp dword ptr [eax + 8]
// 005b482c  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$04@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
