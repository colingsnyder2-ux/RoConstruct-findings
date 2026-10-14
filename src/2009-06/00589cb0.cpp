// roc 2009-06 00589cb0  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589cb0
//
// 00589cb0  83ec10               sub esp, 0x10
// 00589cb3  d9442418             fld dword ptr [esp + 0x18]
// 00589cb7  51                   push ecx
// 00589cb8  d9542408             fst dword ptr [esp + 8]
// 00589cbc  8d4c2408             lea ecx, [esp + 8]
// 00589cc0  d9442420             fld dword ptr [esp + 0x20]
// 00589cc4  c744240400000000     mov dword ptr [esp + 4], 0
// 00589ccc  d954240c             fst dword ptr [esp + 0xc]
// 00589cd0  d9442424             fld dword ptr [esp + 0x24]
// 00589cd4  d9542410             fst dword ptr [esp + 0x10]
// 00589cd8  d9c2                 fld st(2)
// 00589cda  decb                 fmulp st(3)
// 00589cdc  d9c1                 fld st(1)
// 00589cde  deca                 fmulp st(2)
// 00589ce0  d9ca                 fxch st(2)
// 00589ce2  dec1                 faddp st(1)
// 00589ce4  d9c1                 fld st(1)
// 00589ce6  deca                 fmulp st(2)
// 00589ce8  dec1                 faddp st(1)
// 00589cea  d9fa                 fsqrt 
// 00589cec  d954241c             fst dword ptr [esp + 0x1c]
// 00589cf0  d91c24               fstp dword ptr [esp]
// 00589cf3  e888b6feff           call 0x575380
// 00589cf8  d9442404             fld dword ptr [esp + 4]
// 00589cfc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00589d00  c70014b78c00         mov dword ptr [eax], 0x8cb714
// 00589d06  d95804               fstp dword ptr [eax + 4]
// 00589d09  d9442408             fld dword ptr [esp + 8]
// 00589d0d  d95808               fstp dword ptr [eax + 8]
// 00589d10  d944240c             fld dword ptr [esp + 0xc]
// 00589d14  d9580c               fstp dword ptr [eax + 0xc]
// 00589d17  d9442424             fld dword ptr [esp + 0x24]
// 00589d1b  d8742418             fdiv dword ptr [esp + 0x18]
// 00589d1f  d9e0                 fchs 
// 00589d21  d95810               fstp dword ptr [eax + 0x10]
// 00589d24  83c410               add esp, 0x10
// 00589d27  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Plane.cpp (function ?fromEquation@Plane@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Plane.cpp
