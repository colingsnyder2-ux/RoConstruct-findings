// from server: 100% by auto
// roc 2012-06 00634240  unit: G3D::Random  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00634240
//
// 00634240  8b442404             mov eax, dword ptr [esp + 4]
// 00634244  d901                 fld dword ptr [ecx]
// 00634246  d918                 fstp dword ptr [eax]
// 00634248  d94104               fld dword ptr [ecx + 4]
// 0063424b  d95804               fstp dword ptr [eax + 4]
// 0063424e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xy@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
