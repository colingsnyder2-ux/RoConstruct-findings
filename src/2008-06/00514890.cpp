// roc 2008-06 00514890  unit: G3D::GCamera  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514890
//
// 00514890  8b442404             mov eax, dword ptr [esp + 4]
// 00514894  d901                 fld dword ptr [ecx]
// 00514896  d918                 fstp dword ptr [eax]
// 00514898  d94104               fld dword ptr [ecx + 4]
// 0051489b  d95804               fstp dword ptr [eax + 4]
// 0051489e  d94108               fld dword ptr [ecx + 8]
// 005148a1  d95808               fstp dword ptr [eax + 8]
// 005148a4  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
