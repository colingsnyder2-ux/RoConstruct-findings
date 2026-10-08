// from server: 100% by auto
// roc 2007-08 0051e160  unit: seg_00510000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e160
//
// 0051e160  83ec10               sub esp, 0x10
// 0051e163  d9442418             fld dword ptr [esp + 0x18]
// 0051e167  c7042400000000       mov dword ptr [esp], 0
// 0051e16e  d9542404             fst dword ptr [esp + 4]
// 0051e172  d944241c             fld dword ptr [esp + 0x1c]
// 0051e176  d9542408             fst dword ptr [esp + 8]
// 0051e17a  d9442420             fld dword ptr [esp + 0x20]
// 0051e17e  d954240c             fst dword ptr [esp + 0xc]
// 0051e182  d9c1                 fld st(1)
// 0051e184  deca                 fmulp st(2)
// 0051e186  d9c2                 fld st(2)
// 0051e188  decb                 fmulp st(3)
// 0051e18a  d9c9                 fxch st(1)
// 0051e18c  dec2                 faddp st(2)
// 0051e18e  dcc8                 fmul st(0), st(0)
// 0051e190  dec1                 faddp st(1)
// 0051e192  d95c2418             fstp dword ptr [esp + 0x18]
// 0051e196  d9442418             fld dword ptr [esp + 0x18]
// 0051e19a  e86d2c1100           call 0x630e0c
// 0051e19f  d95c2418             fstp dword ptr [esp + 0x18]
// 0051e1a3  d9442418             fld dword ptr [esp + 0x18]
// 0051e1a7  51                   push ecx
// 0051e1a8  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051e1ac  8d4c2408             lea ecx, [esp + 8]
// 0051e1b0  d944241c             fld dword ptr [esp + 0x1c]
// 0051e1b4  d91c24               fstp dword ptr [esp]
// 0051e1b7  e82411ffff           call 0x50f2e0
// 0051e1bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051e1c0  d9442404             fld dword ptr [esp + 4]
// 0051e1c4  c700fc057a00         mov dword ptr [eax], 0x7a05fc
// 0051e1ca  d95804               fstp dword ptr [eax + 4]
// 0051e1cd  d9442408             fld dword ptr [esp + 8]
// 0051e1d1  d95808               fstp dword ptr [eax + 8]
// 0051e1d4  d944240c             fld dword ptr [esp + 0xc]
// 0051e1d8  d9580c               fstp dword ptr [eax + 0xc]
// 0051e1db  d9442424             fld dword ptr [esp + 0x24]
// 0051e1df  d8742418             fdiv dword ptr [esp + 0x18]
// 0051e1e3  d95c2418             fstp dword ptr [esp + 0x18]
// 0051e1e7  d9442418             fld dword ptr [esp + 0x18]
// 0051e1eb  d9e0                 fchs 
// 0051e1ed  d95810               fstp dword ptr [eax + 0x10]
// 0051e1f0  83c410               add esp, 0x10
// 0051e1f3  c3                   ret 
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?fromEquation@Plane@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
