// roc 2011-06 005530a0  unit: G3D::LineSegment  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005530a0
//
// 005530a0  8bc1                 mov eax, ecx
// 005530a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005530a6  d901                 fld dword ptr [ecx]
// 005530a8  d918                 fstp dword ptr [eax]
// 005530aa  d94104               fld dword ptr [ecx + 4]
// 005530ad  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005530b1  d95804               fstp dword ptr [eax + 4]
// 005530b4  d901                 fld dword ptr [ecx]
// 005530b6  d95808               fstp dword ptr [eax + 8]
// 005530b9  d94104               fld dword ptr [ecx + 4]
// 005530bc  d9580c               fstp dword ptr [eax + 0xc]
// 005530bf  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
