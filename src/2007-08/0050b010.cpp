// roc 2007-08 0050b010  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b010
//
// 0050b010  8b442404             mov eax, dword ptr [esp + 4]
// 0050b014  d901                 fld dword ptr [ecx]
// 0050b016  d918                 fstp dword ptr [eax]
// 0050b018  d94104               fld dword ptr [ecx + 4]
// 0050b01b  d95804               fstp dword ptr [eax + 4]
// 0050b01e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xy@Vector3@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
