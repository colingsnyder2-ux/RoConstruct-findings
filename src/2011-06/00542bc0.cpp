// roc 2011-06 00542bc0  unit: G3D::Sphere  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00542bc0
//
// 00542bc0  8b442404             mov eax, dword ptr [esp + 4]
// 00542bc4  d94104               fld dword ptr [ecx + 4]
// 00542bc7  d918                 fstp dword ptr [eax]
// 00542bc9  d94108               fld dword ptr [ecx + 8]
// 00542bcc  d95804               fstp dword ptr [eax + 4]
// 00542bcf  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?yz@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
