// roc 2007-03 00514520  unit: seg_00510000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514520
//
// 00514520  83ec10               sub esp, 0x10
// 00514523  d9442418             fld dword ptr [esp + 0x18]
// 00514527  c7042400000000       mov dword ptr [esp], 0
// 0051452e  d9542404             fst dword ptr [esp + 4]
// 00514532  d944241c             fld dword ptr [esp + 0x1c]
// 00514536  d9542408             fst dword ptr [esp + 8]
// 0051453a  d9442420             fld dword ptr [esp + 0x20]
// 0051453e  d954240c             fst dword ptr [esp + 0xc]
// 00514542  d9c1                 fld st(1)
// 00514544  deca                 fmulp st(2)
// 00514546  d9c2                 fld st(2)
// 00514548  decb                 fmulp st(3)
// 0051454a  d9c9                 fxch st(1)
// 0051454c  dec2                 faddp st(2)
// 0051454e  dcc8                 fmul st(0), st(0)
// 00514550  dec1                 faddp st(1)
// 00514552  d95c2418             fstp dword ptr [esp + 0x18]
// 00514556  d9442418             fld dword ptr [esp + 0x18]
// 0051455a  e84dad1000           call 0x61f2ac
// 0051455f  d95c2418             fstp dword ptr [esp + 0x18]
// 00514563  d9442418             fld dword ptr [esp + 0x18]
// 00514567  51                   push ecx
// 00514568  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051456c  8d4c2408             lea ecx, [esp + 8]
// 00514570  d944241c             fld dword ptr [esp + 0x1c]
// 00514574  d91c24               fstp dword ptr [esp]
// 00514577  e804f4feff           call 0x503980
// 0051457c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00514580  d9442404             fld dword ptr [esp + 4]
// 00514584  c7003cfd7900         mov dword ptr [eax], 0x79fd3c
// 0051458a  d95804               fstp dword ptr [eax + 4]
// 0051458d  d9442408             fld dword ptr [esp + 8]
// 00514591  d95808               fstp dword ptr [eax + 8]
// 00514594  d944240c             fld dword ptr [esp + 0xc]
// 00514598  d9580c               fstp dword ptr [eax + 0xc]
// 0051459b  d9442424             fld dword ptr [esp + 0x24]
// 0051459f  d8742418             fdiv dword ptr [esp + 0x18]
// 005145a3  d95c2418             fstp dword ptr [esp + 0x18]
// 005145a7  d9442418             fld dword ptr [esp + 0x18]
// 005145ab  d9e0                 fchs 
// 005145ad  d95810               fstp dword ptr [eax + 0x10]
// 005145b0  83c410               add esp, 0x10
// 005145b3  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Plane.cpp (function ?fromEquation@Plane@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Plane.cpp
