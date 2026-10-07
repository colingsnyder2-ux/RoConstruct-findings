// roc 2009-06 0058a150  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a150
//
// 0058a150  8b442404             mov eax, dword ptr [esp + 4]
// 0058a154  d901                 fld dword ptr [ecx]
// 0058a156  d918                 fstp dword ptr [eax]
// 0058a158  d94104               fld dword ptr [ecx + 4]
// 0058a15b  d95804               fstp dword ptr [eax + 4]
// 0058a15e  d94108               fld dword ptr [ecx + 8]
// 0058a161  d95808               fstp dword ptr [eax + 8]
// 0058a164  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
