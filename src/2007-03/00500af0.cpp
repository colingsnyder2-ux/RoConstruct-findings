// roc 2007-03 00500af0  unit: seg_00500000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500af0
//
// 00500af0  d9ee                 fldz 
// 00500af2  83ec0c               sub esp, 0xc
// 00500af5  d9442414             fld dword ptr [esp + 0x14]
// 00500af9  dde1                 fucom st(1)
// 00500afb  dfe0                 fnstsw ax
// 00500afd  ddd9                 fstp st(1)
// 00500aff  f6c444               test ah, 0x44
// 00500b02  7b44                 jnp 0x500b48
// 00500b04  d9e8                 fld1 
// 00500b06  8b442410             mov eax, dword ptr [esp + 0x10]
// 00500b0a  def1                 fdivrp st(1)
// 00500b0c  d95c2414             fstp dword ptr [esp + 0x14]
// 00500b10  d901                 fld dword ptr [ecx]
// 00500b12  d9442414             fld dword ptr [esp + 0x14]
// 00500b16  d9c0                 fld st(0)
// 00500b18  deca                 fmulp st(2)
// 00500b1a  d9c9                 fxch st(1)
// 00500b1c  d91c24               fstp dword ptr [esp]
// 00500b1f  d94104               fld dword ptr [ecx + 4]
// 00500b22  d8c9                 fmul st(1)
// 00500b24  d95c2404             fstp dword ptr [esp + 4]
// 00500b28  d84908               fmul dword ptr [ecx + 8]
// 00500b2b  d95c2408             fstp dword ptr [esp + 8]
// 00500b2f  d90424               fld dword ptr [esp]
// 00500b32  d918                 fstp dword ptr [eax]
// 00500b34  d9442404             fld dword ptr [esp + 4]
// 00500b38  d95804               fstp dword ptr [eax + 4]
// 00500b3b  d9442408             fld dword ptr [esp + 8]
// 00500b3f  d95808               fstp dword ptr [eax + 8]
// 00500b42  83c40c               add esp, 0xc
// 00500b45  c20800               ret 8
// 00500b48  a1d0778b00           mov eax, dword ptr [0x8b77d0]
// 00500b4d  ddd8                 fstp st(0)
// 00500b4f  a801                 test al, 1
// 00500b51  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 00500b57  7538                 jne 0x500b91
// 00500b59  83c801               or eax, 1
// 00500b5c  a801                 test al, 1
// 00500b5e  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 00500b63  dd01                 fld qword ptr [ecx]
// 00500b65  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00500b6b  7524                 jne 0x500b91
// 00500b6d  83c801               or eax, 1
// 00500b70  a801                 test al, 1
// 00500b72  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 00500b77  dd01                 fld qword ptr [ecx]
// 00500b79  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00500b7f  7510                 jne 0x500b91
// 00500b81  83c801               or eax, 1
// 00500b84  a3d0778b00           mov dword ptr [0x8b77d0], eax
// 00500b89  dd01                 fld qword ptr [ecx]
// 00500b8b  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00500b91  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00500b97  8b442410             mov eax, dword ptr [esp + 0x10]
// 00500b9b  d95c2414             fstp dword ptr [esp + 0x14]
// 00500b9f  d9442414             fld dword ptr [esp + 0x14]
// 00500ba3  d910                 fst dword ptr [eax]
// 00500ba5  d95004               fst dword ptr [eax + 4]
// 00500ba8  d95808               fstp dword ptr [eax + 8]
// 00500bab  83c40c               add esp, 0xc
// 00500bae  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ??KColor3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
