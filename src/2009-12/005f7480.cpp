// roc 2009-12 005f7480  unit: G3D::Line  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f7480
//
// 005f7480  51                   push ecx
// 005f7481  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f7485  f30f1000             movss xmm0, dword ptr [eax]
// 005f7489  f30f104804           movss xmm1, dword ptr [eax + 4]
// 005f748e  f30f105008           movss xmm2, dword ptr [eax + 8]
// 005f7493  8b442408             mov eax, dword ptr [esp + 8]
// 005f7497  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f749b  f30f1019             movss xmm3, dword ptr [ecx]
// 005f749f  f30f5c4904           subss xmm1, dword ptr [ecx + 4]
// 005f74a4  f30f5c5108           subss xmm2, dword ptr [ecx + 8]
// 005f74a9  f30f115804           movss dword ptr [eax + 4], xmm3
// 005f74ae  d94104               fld dword ptr [ecx + 4]
// 005f74b1  d95808               fstp dword ptr [eax + 8]
// 005f74b4  f30f5cc3             subss xmm0, xmm3
// 005f74b8  d94108               fld dword ptr [ecx + 8]
// 005f74bb  c7042400000000       mov dword ptr [esp], 0
// 005f74c2  d9580c               fstp dword ptr [eax + 0xc]
// 005f74c5  c7006c279c00         mov dword ptr [eax], 0x9c276c
// 005f74cb  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 005f74d0  f30f114814           movss dword ptr [eax + 0x14], xmm1
// 005f74d5  f30f115018           movss dword ptr [eax + 0x18], xmm2
// 005f74da  59                   pop ecx
// 005f74db  c3                   ret 
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?fromTwoPoints@LineSegment@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
