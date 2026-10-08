// roc 2007-03 007349e0  unit: seg_00730000  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007349e0
//
// 007349e0  d9ee                 fldz 
// 007349e2  83ec10               sub esp, 0x10
// 007349e5  83792400             cmp dword ptr [ecx + 0x24], 0
// 007349e9  56                   push esi
// 007349ea  742f                 je 0x734a1b
// 007349ec  8b742418             mov esi, dword ptr [esp + 0x18]
// 007349f0  ddd8                 fstp st(0)
// 007349f2  d944241c             fld dword ptr [esp + 0x1c]
// 007349f6  8d442404             lea eax, [esp + 4]
// 007349fa  d95c2404             fstp dword ptr [esp + 4]
// 007349fe  50                   push eax
// 007349ff  d9442424             fld dword ptr [esp + 0x24]
// 00734a03  8bce                 mov ecx, esi
// 00734a05  d95c240c             fstp dword ptr [esp + 0xc]
// 00734a09  d9442428             fld dword ptr [esp + 0x28]
// 00734a0d  d95c2410             fstp dword ptr [esp + 0x10]
// 00734a11  e8ca01d4ff           call 0x474be0
// 00734a16  e9cf000000           jmp 0x734aea
// 00734a1b  803d2b768b0000       cmp byte ptr [0x8b762b], 0
// 00734a22  0f8596000000         jne 0x734abe
// 00734a28  d9c0                 fld st(0)
// 00734a2a  d9442428             fld dword ptr [esp + 0x28]
// 00734a2e  dde1                 fucom st(1)
// 00734a30  dfe0                 fnstsw ax
// 00734a32  ddd9                 fstp st(1)
// 00734a34  f6c444               test ah, 0x44
// 00734a37  dd05d80c7a00         fld qword ptr [0x7a0cd8]
// 00734a3d  d9e8                 fld1 
// 00734a3f  7a16                 jp 0x734a57
// 00734a41  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00734a44  db4264               fild dword ptr [edx + 0x64]
// 00734a47  d8fa                 fdivr st(2)
// 00734a49  dec3                 faddp st(3)
// 00734a4b  d9ca                 fxch st(2)
// 00734a4d  d95c2428             fstp dword ptr [esp + 0x28]
// 00734a51  d9442428             fld dword ptr [esp + 0x28]
// 00734a55  eb23                 jmp 0x734a7a
// 00734a57  d9c0                 fld st(0)
// 00734a59  ddeb                 fucomp st(3)
// 00734a5b  dfe0                 fnstsw ax
// 00734a5d  f6c444               test ah, 0x44
// 00734a60  7a16                 jp 0x734a78
// 00734a62  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00734a65  db4064               fild dword ptr [eax + 0x64]
// 00734a68  d8fa                 fdivr st(2)
// 00734a6a  deeb                 fsubp st(3)
// 00734a6c  d9ca                 fxch st(2)
// 00734a6e  d95c2428             fstp dword ptr [esp + 0x28]
// 00734a72  d9442428             fld dword ptr [esp + 0x28]
// 00734a76  eb02                 jmp 0x734a7a
// 00734a78  d9ca                 fxch st(2)
// 00734a7a  d944242c             fld dword ptr [esp + 0x2c]
// 00734a7e  dde4                 fucom st(4)
// 00734a80  dfe0                 fnstsw ax
// 00734a82  dddc                 fstp st(4)
// 00734a84  f6c444               test ah, 0x44
// 00734a87  7a16                 jp 0x734a9f
// 00734a89  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00734a8c  ddda                 fstp st(2)
// 00734a8e  da7168               fidiv dword ptr [ecx + 0x68]
// 00734a91  dec2                 faddp st(2)
// 00734a93  d9c9                 fxch st(1)
// 00734a95  d95c242c             fstp dword ptr [esp + 0x2c]
// 00734a99  d944242c             fld dword ptr [esp + 0x2c]
// 00734a9d  eb2f                 jmp 0x734ace
// 00734a9f  d9ca                 fxch st(2)
// 00734aa1  ddeb                 fucomp st(3)
// 00734aa3  dfe0                 fnstsw ax
// 00734aa5  f6c444               test ah, 0x44
// 00734aa8  7a20                 jp 0x734aca
// 00734aaa  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00734aad  da7268               fidiv dword ptr [edx + 0x68]
// 00734ab0  deea                 fsubp st(2)
// 00734ab2  d9c9                 fxch st(1)
// 00734ab4  d95c242c             fstp dword ptr [esp + 0x2c]
// 00734ab8  d944242c             fld dword ptr [esp + 0x2c]
// 00734abc  eb10                 jmp 0x734ace
// 00734abe  ddd8                 fstp st(0)
// 00734ac0  d944242c             fld dword ptr [esp + 0x2c]
// 00734ac4  d9442428             fld dword ptr [esp + 0x28]
// 00734ac8  eb02                 jmp 0x734acc
// 00734aca  ddd8                 fstp st(0)
// 00734acc  d9c9                 fxch st(1)
// 00734ace  8b742418             mov esi, dword ptr [esp + 0x18]
// 00734ad2  d9c9                 fxch st(1)
// 00734ad4  8d442404             lea eax, [esp + 4]
// 00734ad8  d95c2404             fstp dword ptr [esp + 4]
// 00734adc  50                   push eax
// 00734add  6a00                 push 0
// 00734adf  d95c2410             fstp dword ptr [esp + 0x10]
// 00734ae3  8bce                 mov ecx, esi
// 00734ae5  e8a601d4ff           call 0x474c90
// 00734aea  d944241c             fld dword ptr [esp + 0x1c]
// 00734aee  8d4c2404             lea ecx, [esp + 4]
// 00734af2  d95c2404             fstp dword ptr [esp + 4]
// 00734af6  51                   push ecx
// 00734af7  d9442424             fld dword ptr [esp + 0x24]
// 00734afb  8bce                 mov ecx, esi
// 00734afd  d95c240c             fstp dword ptr [esp + 0xc]
// 00734b01  d9442428             fld dword ptr [esp + 0x28]
// 00734b05  d95c2410             fstp dword ptr [esp + 0x10]
// 00734b09  d9ee                 fldz 
// 00734b0b  d95c2414             fstp dword ptr [esp + 0x14]
// 00734b0f  e8fc01d4ff           call 0x474d10
// 00734b14  5e                   pop esi
// 00734b15  83c410               add esp, 0x10
// 00734b18  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?vertex@Sky@G3D@@ABEXPAVRenderDevice@2@MMMMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
