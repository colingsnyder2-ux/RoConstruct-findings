// from server: 100% by auto
// roc 2012-06 00634210  unit: G3D::Random  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00634210
//
// 00634210  8bc1                 mov eax, ecx
// 00634212  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634216  d901                 fld dword ptr [ecx]
// 00634218  d918                 fstp dword ptr [eax]
// 0063421a  d94104               fld dword ptr [ecx + 4]
// 0063421d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634221  d95804               fstp dword ptr [eax + 4]
// 00634224  d901                 fld dword ptr [ecx]
// 00634226  d95808               fstp dword ptr [eax + 8]
// 00634229  d94104               fld dword ptr [ecx + 4]
// 0063422c  d9580c               fstp dword ptr [eax + 0xc]
// 0063422f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
