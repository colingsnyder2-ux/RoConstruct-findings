// roc 2009-12 005fe650  unit: G3D::H::PAV?$Array::?$Set  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe650
//
// 005fe650  8b442404             mov eax, dword ptr [esp + 4]
// 005fe654  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe658  3bc1                 cmp eax, ecx
// 005fe65a  742c                 je 0x5fe688
// 005fe65c  d901                 fld dword ptr [ecx]
// 005fe65e  f30f1000             movss xmm0, dword ptr [eax]
// 005fe662  f30f104804           movss xmm1, dword ptr [eax + 4]
// 005fe667  d918                 fstp dword ptr [eax]
// 005fe669  d94104               fld dword ptr [ecx + 4]
// 005fe66c  f30f105008           movss xmm2, dword ptr [eax + 8]
// 005fe671  d95804               fstp dword ptr [eax + 4]
// 005fe674  d94108               fld dword ptr [ecx + 8]
// 005fe677  d95808               fstp dword ptr [eax + 8]
// 005fe67a  f30f1101             movss dword ptr [ecx], xmm0
// 005fe67e  f30f114904           movss dword ptr [ecx + 4], xmm1
// 005fe683  f30f115108           movss dword ptr [ecx + 8], xmm2
// 005fe688  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$swap@VVector3@G3D@@@std@@YAXAAVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
