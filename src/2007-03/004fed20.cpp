// roc 2007-03 004fed20  unit: seg_004f0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fed20
//
// 004fed20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fed24  d9442408             fld dword ptr [esp + 8]
// 004fed28  56                   push esi
// 004fed29  8b742408             mov esi, dword ptr [esp + 8]
// 004fed2d  50                   push eax
// 004fed2e  83ec08               sub esp, 8
// 004fed31  dd1c24               fstp qword ptr [esp]
// 004fed34  56                   push esi
// 004fed35  e896ffffff           call 0x4fecd0
// 004fed3a  83c410               add esp, 0x10
// 004fed3d  8bc6                 mov eax, esi
// 004fed3f  5e                   pop esi
// 004fed40  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
