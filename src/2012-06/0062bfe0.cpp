// from server: 100% by auto
// roc 2012-06 0062bfe0  unit: G3D::Sphere  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062bfe0
//
// 0062bfe0  8bc1                 mov eax, ecx
// 0062bfe2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062bfe6  d901                 fld dword ptr [ecx]
// 0062bfe8  d918                 fstp dword ptr [eax]
// 0062bfea  d94104               fld dword ptr [ecx + 4]
// 0062bfed  d95804               fstp dword ptr [eax + 4]
// 0062bff0  d94108               fld dword ptr [ecx + 8]
// 0062bff3  d95808               fstp dword ptr [eax + 8]
// 0062bff6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
