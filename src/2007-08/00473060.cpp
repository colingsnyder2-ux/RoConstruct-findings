// roc 2007-08 00473060  unit: G3D::VARArea  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473060
//
// 00473060  8bc1                 mov eax, ecx
// 00473062  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00473066  d901                 fld dword ptr [ecx]
// 00473068  d918                 fstp dword ptr [eax]
// 0047306a  d94104               fld dword ptr [ecx + 4]
// 0047306d  d95804               fstp dword ptr [eax + 4]
// 00473070  d94108               fld dword ptr [ecx + 8]
// 00473073  d95808               fstp dword ptr [eax + 8]
// 00473076  d9410c               fld dword ptr [ecx + 0xc]
// 00473079  d9580c               fstp dword ptr [eax + 0xc]
// 0047307c  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
