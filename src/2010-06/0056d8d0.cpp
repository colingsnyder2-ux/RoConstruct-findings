// from server: 100% by auto
// roc 2010-06 0056d8d0  unit: seg_00560000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d8d0
//
// 0056d8d0  8bc1                 mov eax, ecx
// 0056d8d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d8d6  d901                 fld dword ptr [ecx]
// 0056d8d8  c700080ca200         mov dword ptr [eax], 0xa20c08
// 0056d8de  d95804               fstp dword ptr [eax + 4]
// 0056d8e1  d94104               fld dword ptr [ecx + 4]
// 0056d8e4  d95808               fstp dword ptr [eax + 8]
// 0056d8e7  d94108               fld dword ptr [ecx + 8]
// 0056d8ea  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d8ee  d9580c               fstp dword ptr [eax + 0xc]
// 0056d8f1  d901                 fld dword ptr [ecx]
// 0056d8f3  d95810               fstp dword ptr [eax + 0x10]
// 0056d8f6  d94104               fld dword ptr [ecx + 4]
// 0056d8f9  d95814               fstp dword ptr [eax + 0x14]
// 0056d8fc  d94108               fld dword ptr [ecx + 8]
// 0056d8ff  d95818               fstp dword ptr [eax + 0x18]
// 0056d902  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0LineSegment@G3D@@IAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
