// roc 2009-12 005f3d80  unit: seg_005f0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3d80
//
// 005f3d80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f3d84  d9442408             fld dword ptr [esp + 8]
// 005f3d88  56                   push esi
// 005f3d89  8b742408             mov esi, dword ptr [esp + 8]
// 005f3d8d  50                   push eax
// 005f3d8e  83ec08               sub esp, 8
// 005f3d91  dd1c24               fstp qword ptr [esp]
// 005f3d94  56                   push esi
// 005f3d95  e896ffffff           call 0x5f3d30
// 005f3d9a  83c410               add esp, 0x10
// 005f3d9d  8bc6                 mov eax, esi
// 005f3d9f  5e                   pop esi
// 005f3da0  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
