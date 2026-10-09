// roc 2008-06 005ec1a0  unit: RBX::Sky  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec1a0
//
// 005ec1a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec1a4  8b442404             mov eax, dword ptr [esp + 4]
// 005ec1a8  d94108               fld dword ptr [ecx + 8]
// 005ec1ab  d918                 fstp dword ptr [eax]
// 005ec1ad  d94104               fld dword ptr [ecx + 4]
// 005ec1b0  d95804               fstp dword ptr [eax + 4]
// 005ec1b3  d901                 fld dword ptr [ecx]
// 005ec1b5  d9e0                 fchs 
// 005ec1b7  d95808               fstp dword ptr [eax + 8]
// 005ec1ba  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$0A@@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
