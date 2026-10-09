// roc 2008-06 005ec1c0  unit: RBX::Sky  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec1c0
//
// 005ec1c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec1c4  d901                 fld dword ptr [ecx]
// 005ec1c6  8b442404             mov eax, dword ptr [esp + 4]
// 005ec1ca  d9e0                 fchs 
// 005ec1cc  d918                 fstp dword ptr [eax]
// 005ec1ce  d94108               fld dword ptr [ecx + 8]
// 005ec1d1  d95804               fstp dword ptr [eax + 4]
// 005ec1d4  d94104               fld dword ptr [ecx + 4]
// 005ec1d7  d95808               fstp dword ptr [eax + 8]
// 005ec1da  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$00@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
