// from server: 100% by auto
// roc 2010-06 00559bd0  unit: G3D::BinaryInput  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00559bd0
//
// 00559bd0  8b442404             mov eax, dword ptr [esp + 4]
// 00559bd4  d901                 fld dword ptr [ecx]
// 00559bd6  d918                 fstp dword ptr [eax]
// 00559bd8  d94104               fld dword ptr [ecx + 4]
// 00559bdb  d95804               fstp dword ptr [eax + 4]
// 00559bde  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xy@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
