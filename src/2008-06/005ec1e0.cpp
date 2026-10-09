// roc 2008-06 005ec1e0  unit: RBX::Sky  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec1e0
//
// 005ec1e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec1e4  d94108               fld dword ptr [ecx + 8]
// 005ec1e7  8b442404             mov eax, dword ptr [esp + 4]
// 005ec1eb  d9e0                 fchs 
// 005ec1ed  d918                 fstp dword ptr [eax]
// 005ec1ef  d94104               fld dword ptr [ecx + 4]
// 005ec1f2  d95804               fstp dword ptr [eax + 4]
// 005ec1f5  d901                 fld dword ptr [ecx]
// 005ec1f7  d95808               fstp dword ptr [eax + 8]
// 005ec1fa  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$02@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
