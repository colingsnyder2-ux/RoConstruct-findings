// roc 2012-06 0062ebb0  unit: G3D::Line  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062ebb0
//
// 0062ebb0  8b442404             mov eax, dword ptr [esp + 4]
// 0062ebb4  d901                 fld dword ptr [ecx]
// 0062ebb6  d918                 fstp dword ptr [eax]
// 0062ebb8  d94108               fld dword ptr [ecx + 8]
// 0062ebbb  d95804               fstp dword ptr [eax + 4]
// 0062ebbe  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
