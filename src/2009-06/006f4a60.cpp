// from server: 100% by auto
// roc 2009-06 006f4a60  unit: RBX::HUMAN::GettingUp  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4a60
//
// 006f4a60  8b442404             mov eax, dword ptr [esp + 4]
// 006f4a64  d94104               fld dword ptr [ecx + 4]
// 006f4a67  d918                 fstp dword ptr [eax]
// 006f4a69  d94108               fld dword ptr [ecx + 8]
// 006f4a6c  d95804               fstp dword ptr [eax + 4]
// 006f4a6f  d9410c               fld dword ptr [ecx + 0xc]
// 006f4a72  d95808               fstp dword ptr [eax + 8]
// 006f4a75  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?yzw@Vector4@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
