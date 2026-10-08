// from server: 100% by auto
// roc 2008-06 006662d0  unit: RBX::PartDragTool  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006662d0
//
// 006662d0  8b442404             mov eax, dword ptr [esp + 4]
// 006662d4  d94104               fld dword ptr [ecx + 4]
// 006662d7  d918                 fstp dword ptr [eax]
// 006662d9  d94108               fld dword ptr [ecx + 8]
// 006662dc  d95804               fstp dword ptr [eax + 4]
// 006662df  d9410c               fld dword ptr [ecx + 0xc]
// 006662e2  d95808               fstp dword ptr [eax + 8]
// 006662e5  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?yzw@Vector4@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
