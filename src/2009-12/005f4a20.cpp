// roc 2009-12 005f4a20  unit: seg_005f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4a20
//
// 005f4a20  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f4a26  8bc1                 mov eax, ecx
// 005f4a28  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f4a2c  d901                 fld dword ptr [ecx]
// 005f4a2e  d918                 fstp dword ptr [eax]
// 005f4a30  d94104               fld dword ptr [ecx + 4]
// 005f4a33  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f4a38  d95804               fstp dword ptr [eax + 4]
// 005f4a3b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABVVector2@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
