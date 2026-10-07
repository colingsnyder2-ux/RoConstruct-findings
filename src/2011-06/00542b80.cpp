// roc 2011-06 00542b80  unit: G3D::Sphere  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00542b80
//
// 00542b80  8b442404             mov eax, dword ptr [esp + 4]
// 00542b84  d901                 fld dword ptr [ecx]
// 00542b86  d918                 fstp dword ptr [eax]
// 00542b88  d94104               fld dword ptr [ecx + 4]
// 00542b8b  d95804               fstp dword ptr [eax + 4]
// 00542b8e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xy@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
