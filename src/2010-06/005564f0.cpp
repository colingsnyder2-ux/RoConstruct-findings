// from server: 100% by auto
// roc 2010-06 005564f0  unit: seg_00550000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005564f0
//
// 005564f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005564f4  d9442408             fld dword ptr [esp + 8]
// 005564f8  56                   push esi
// 005564f9  8b742408             mov esi, dword ptr [esp + 8]
// 005564fd  50                   push eax
// 005564fe  83ec08               sub esp, 8
// 00556501  dd1c24               fstp qword ptr [esp]
// 00556504  56                   push esi
// 00556505  e896ffffff           call 0x5564a0
// 0055650a  83c410               add esp, 0x10
// 0055650d  8bc6                 mov eax, esi
// 0055650f  5e                   pop esi
// 00556510  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
