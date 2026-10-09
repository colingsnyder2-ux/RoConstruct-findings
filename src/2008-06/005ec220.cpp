// roc 2008-06 005ec220  unit: RBX::Sky  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec220
//
// 005ec220  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec224  d901                 fld dword ptr [ecx]
// 005ec226  8b442404             mov eax, dword ptr [esp + 4]
// 005ec22a  d9e0                 fchs 
// 005ec22c  d918                 fstp dword ptr [eax]
// 005ec22e  d94104               fld dword ptr [ecx + 4]
// 005ec231  d95804               fstp dword ptr [eax + 4]
// 005ec234  d94108               fld dword ptr [ecx + 8]
// 005ec237  d9e0                 fchs 
// 005ec239  d95808               fstp dword ptr [eax + 8]
// 005ec23c  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$04@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
