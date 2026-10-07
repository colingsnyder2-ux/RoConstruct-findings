// roc 2010-06 0056daa0  unit: seg_00560000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056daa0
//
// 0056daa0  51                   push ecx
// 0056daa1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056daa5  f30f1000             movss xmm0, dword ptr [eax]
// 0056daa9  f30f104804           movss xmm1, dword ptr [eax + 4]
// 0056daae  f30f105008           movss xmm2, dword ptr [eax + 8]
// 0056dab3  8b442408             mov eax, dword ptr [esp + 8]
// 0056dab7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056dabb  f30f1019             movss xmm3, dword ptr [ecx]
// 0056dabf  f30f5c4904           subss xmm1, dword ptr [ecx + 4]
// 0056dac4  f30f5c5108           subss xmm2, dword ptr [ecx + 8]
// 0056dac9  f30f115804           movss dword ptr [eax + 4], xmm3
// 0056dace  d94104               fld dword ptr [ecx + 4]
// 0056dad1  d95808               fstp dword ptr [eax + 8]
// 0056dad4  f30f5cc3             subss xmm0, xmm3
// 0056dad8  d94108               fld dword ptr [ecx + 8]
// 0056dadb  c7042400000000       mov dword ptr [esp], 0
// 0056dae2  d9580c               fstp dword ptr [eax + 0xc]
// 0056dae5  c700ec36a200         mov dword ptr [eax], 0xa236ec
// 0056daeb  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0056daf0  f30f114814           movss dword ptr [eax + 0x14], xmm1
// 0056daf5  f30f115018           movss dword ptr [eax + 0x18], xmm2
// 0056dafa  59                   pop ecx
// 0056dafb  c3                   ret 
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?fromTwoPoints@LineSegment@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
