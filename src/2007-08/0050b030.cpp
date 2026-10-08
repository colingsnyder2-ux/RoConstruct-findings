// from server: 100% by auto
// roc 2007-08 0050b030  unit: seg_00500000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b030
//
// 0050b030  8b442404             mov eax, dword ptr [esp + 4]
// 0050b034  d901                 fld dword ptr [ecx]
// 0050b036  d918                 fstp dword ptr [eax]
// 0050b038  d94104               fld dword ptr [ecx + 4]
// 0050b03b  d95804               fstp dword ptr [eax + 4]
// 0050b03e  d94108               fld dword ptr [ecx + 8]
// 0050b041  d95808               fstp dword ptr [eax + 8]
// 0050b044  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?xyz@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
