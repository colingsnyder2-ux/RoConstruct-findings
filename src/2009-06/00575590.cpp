// from server: 100% by auto
// roc 2009-06 00575590  unit: G3D::BinaryInput  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575590
//
// 00575590  8b442404             mov eax, dword ptr [esp + 4]
// 00575594  d901                 fld dword ptr [ecx]
// 00575596  d918                 fstp dword ptr [eax]
// 00575598  d94104               fld dword ptr [ecx + 4]
// 0057559b  d95804               fstp dword ptr [eax + 4]
// 0057559e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xy@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
