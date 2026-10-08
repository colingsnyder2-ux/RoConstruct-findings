// roc 2009-12 005f6cf0  unit: G3D::BinaryInput  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6cf0
//
// 005f6cf0  8bc1                 mov eax, ecx
// 005f6cf2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f6cf6  d901                 fld dword ptr [ecx]
// 005f6cf8  d918                 fstp dword ptr [eax]
// 005f6cfa  d94104               fld dword ptr [ecx + 4]
// 005f6cfd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f6d01  d95804               fstp dword ptr [eax + 4]
// 005f6d04  d901                 fld dword ptr [ecx]
// 005f6d06  d95808               fstp dword ptr [eax + 8]
// 005f6d09  d94104               fld dword ptr [ecx + 4]
// 005f6d0c  d9580c               fstp dword ptr [eax + 0xc]
// 005f6d0f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
