// roc 2011-06 00552240  unit: G3D::Sphere  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00552240
//
// 00552240  8bc1                 mov eax, ecx
// 00552242  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00552246  d901                 fld dword ptr [ecx]
// 00552248  d918                 fstp dword ptr [eax]
// 0055224a  d94104               fld dword ptr [ecx + 4]
// 0055224d  d95804               fstp dword ptr [eax + 4]
// 00552250  d94108               fld dword ptr [ecx + 8]
// 00552253  d95808               fstp dword ptr [eax + 8]
// 00552256  d9410c               fld dword ptr [ecx + 0xc]
// 00552259  d9580c               fstp dword ptr [eax + 0xc]
// 0055225c  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
