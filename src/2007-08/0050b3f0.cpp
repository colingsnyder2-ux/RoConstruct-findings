// from server: 100% by auto
// roc 2007-08 0050b3f0  unit: seg_00500000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b3f0
//
// 0050b3f0  d9ee                 fldz 
// 0050b3f2  83ec0c               sub esp, 0xc
// 0050b3f5  d9442414             fld dword ptr [esp + 0x14]
// 0050b3f9  dde1                 fucom st(1)
// 0050b3fb  dfe0                 fnstsw ax
// 0050b3fd  ddd9                 fstp st(1)
// 0050b3ff  f6c444               test ah, 0x44
// 0050b402  7b44                 jnp 0x50b448
// 0050b404  d9e8                 fld1 
// 0050b406  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050b40a  def1                 fdivrp st(1)
// 0050b40c  d95c2414             fstp dword ptr [esp + 0x14]
// 0050b410  d901                 fld dword ptr [ecx]
// 0050b412  d9442414             fld dword ptr [esp + 0x14]
// 0050b416  d9c0                 fld st(0)
// 0050b418  deca                 fmulp st(2)
// 0050b41a  d9c9                 fxch st(1)
// 0050b41c  d91c24               fstp dword ptr [esp]
// 0050b41f  d94104               fld dword ptr [ecx + 4]
// 0050b422  d8c9                 fmul st(1)
// 0050b424  d95c2404             fstp dword ptr [esp + 4]
// 0050b428  d84908               fmul dword ptr [ecx + 8]
// 0050b42b  d95c2408             fstp dword ptr [esp + 8]
// 0050b42f  d90424               fld dword ptr [esp]
// 0050b432  d918                 fstp dword ptr [eax]
// 0050b434  d9442404             fld dword ptr [esp + 4]
// 0050b438  d95804               fstp dword ptr [eax + 4]
// 0050b43b  d9442408             fld dword ptr [esp + 8]
// 0050b43f  d95808               fstp dword ptr [eax + 8]
// 0050b442  83c40c               add esp, 0xc
// 0050b445  c20800               ret 8
// 0050b448  a108d18b00           mov eax, dword ptr [0x8bd108]
// 0050b44d  ddd8                 fstp st(0)
// 0050b44f  a801                 test al, 1
// 0050b451  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 0050b457  7538                 jne 0x50b491
// 0050b459  83c801               or eax, 1
// 0050b45c  a801                 test al, 1
// 0050b45e  a308d18b00           mov dword ptr [0x8bd108], eax
// 0050b463  dd01                 fld qword ptr [ecx]
// 0050b465  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050b46b  7524                 jne 0x50b491
// 0050b46d  83c801               or eax, 1
// 0050b470  a801                 test al, 1
// 0050b472  a308d18b00           mov dword ptr [0x8bd108], eax
// 0050b477  dd01                 fld qword ptr [ecx]
// 0050b479  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050b47f  7510                 jne 0x50b491
// 0050b481  83c801               or eax, 1
// 0050b484  a308d18b00           mov dword ptr [0x8bd108], eax
// 0050b489  dd01                 fld qword ptr [ecx]
// 0050b48b  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050b491  dd0500d18b00         fld qword ptr [0x8bd100]
// 0050b497  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050b49b  d95c2414             fstp dword ptr [esp + 0x14]
// 0050b49f  d9442414             fld dword ptr [esp + 0x14]
// 0050b4a3  d910                 fst dword ptr [eax]
// 0050b4a5  d95004               fst dword ptr [eax + 4]
// 0050b4a8  d95808               fstp dword ptr [eax + 8]
// 0050b4ab  83c40c               add esp, 0xc
// 0050b4ae  c20800               ret 8
// library g3d-6.09/G3Dcpp\Color3.cpp (function ??KColor3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
