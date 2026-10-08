// from server: 100% by auto
// roc 2010-06 00559b70  unit: G3D::BinaryInput  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00559b70
//
// 00559b70  8bc1                 mov eax, ecx
// 00559b72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559b76  d901                 fld dword ptr [ecx]
// 00559b78  d918                 fstp dword ptr [eax]
// 00559b7a  d94104               fld dword ptr [ecx + 4]
// 00559b7d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00559b81  d95804               fstp dword ptr [eax + 4]
// 00559b84  d901                 fld dword ptr [ecx]
// 00559b86  d95808               fstp dword ptr [eax + 8]
// 00559b89  d94104               fld dword ptr [ecx + 4]
// 00559b8c  d9580c               fstp dword ptr [eax + 0xc]
// 00559b8f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
