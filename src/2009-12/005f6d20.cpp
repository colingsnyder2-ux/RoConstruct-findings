// roc 2009-12 005f6d20  unit: G3D::BinaryInput  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6d20
//
// 005f6d20  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f6d26  8bc1                 mov eax, ecx
// 005f6d28  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f6d2c  d901                 fld dword ptr [ecx]
// 005f6d2e  d918                 fstp dword ptr [eax]
// 005f6d30  d94104               fld dword ptr [ecx + 4]
// 005f6d33  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f6d38  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 005f6d3e  d95804               fstp dword ptr [eax + 4]
// 005f6d41  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 005f6d46  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
