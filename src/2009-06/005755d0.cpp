// from server: 100% by auto
// roc 2009-06 005755d0  unit: G3D::BinaryInput  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005755d0
//
// 005755d0  8b442404             mov eax, dword ptr [esp + 4]
// 005755d4  d94104               fld dword ptr [ecx + 4]
// 005755d7  d918                 fstp dword ptr [eax]
// 005755d9  d94108               fld dword ptr [ecx + 8]
// 005755dc  d95804               fstp dword ptr [eax + 4]
// 005755df  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
