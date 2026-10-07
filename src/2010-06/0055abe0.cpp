// roc 2010-06 0055abe0  unit: G3D::BinaryInput  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055abe0
//
// 0055abe0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 0055abe6  8bc1                 mov eax, ecx
// 0055abe8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055abec  c700340aa200         mov dword ptr [eax], 0xa20a34
// 0055abf2  d901                 fld dword ptr [ecx]
// 0055abf4  d95804               fstp dword ptr [eax + 4]
// 0055abf7  d94104               fld dword ptr [ecx + 4]
// 0055abfa  d95808               fstp dword ptr [eax + 8]
// 0055abfd  d94108               fld dword ptr [ecx + 8]
// 0055ac00  d9580c               fstp dword ptr [eax + 0xc]
// 0055ac03  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0055ac08  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@AAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
