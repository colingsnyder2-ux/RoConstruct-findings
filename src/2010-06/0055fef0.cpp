// roc 2010-06 0055fef0  unit: G3D::Line  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055fef0
//
// 0055fef0  8b442404             mov eax, dword ptr [esp + 4]
// 0055fef4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055fef8  3bc1                 cmp eax, ecx
// 0055fefa  742c                 je 0x55ff28
// 0055fefc  d901                 fld dword ptr [ecx]
// 0055fefe  f30f1000             movss xmm0, dword ptr [eax]
// 0055ff02  f30f104804           movss xmm1, dword ptr [eax + 4]
// 0055ff07  d918                 fstp dword ptr [eax]
// 0055ff09  d94104               fld dword ptr [ecx + 4]
// 0055ff0c  f30f105008           movss xmm2, dword ptr [eax + 8]
// 0055ff11  d95804               fstp dword ptr [eax + 4]
// 0055ff14  d94108               fld dword ptr [ecx + 8]
// 0055ff17  d95808               fstp dword ptr [eax + 8]
// 0055ff1a  f30f1101             movss dword ptr [ecx], xmm0
// 0055ff1e  f30f114904           movss dword ptr [ecx + 4], xmm1
// 0055ff23  f30f115108           movss dword ptr [ecx + 8], xmm2
// 0055ff28  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$swap@VVector3@G3D@@@std@@YAXAAVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
