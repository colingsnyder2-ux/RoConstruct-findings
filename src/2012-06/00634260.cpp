// from server: 100% by auto
// roc 2012-06 00634260  unit: G3D::Random  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00634260
//
// 00634260  8b442404             mov eax, dword ptr [esp + 4]
// 00634264  d901                 fld dword ptr [ecx]
// 00634266  d918                 fstp dword ptr [eax]
// 00634268  d94104               fld dword ptr [ecx + 4]
// 0063426b  d95804               fstp dword ptr [eax + 4]
// 0063426e  d94108               fld dword ptr [ecx + 8]
// 00634271  d95808               fstp dword ptr [eax + 8]
// 00634274  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
