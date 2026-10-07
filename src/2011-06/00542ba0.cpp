// roc 2011-06 00542ba0  unit: G3D::Sphere  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00542ba0
//
// 00542ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00542ba4  d901                 fld dword ptr [ecx]
// 00542ba6  d918                 fstp dword ptr [eax]
// 00542ba8  d94108               fld dword ptr [ecx + 8]
// 00542bab  d95804               fstp dword ptr [eax + 4]
// 00542bae  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
