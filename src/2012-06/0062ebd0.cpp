// roc 2012-06 0062ebd0  unit: G3D::Line  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062ebd0
//
// 0062ebd0  8b442404             mov eax, dword ptr [esp + 4]
// 0062ebd4  d94104               fld dword ptr [ecx + 4]
// 0062ebd7  d918                 fstp dword ptr [eax]
// 0062ebd9  d94108               fld dword ptr [ecx + 8]
// 0062ebdc  d95804               fstp dword ptr [eax + 4]
// 0062ebdf  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
