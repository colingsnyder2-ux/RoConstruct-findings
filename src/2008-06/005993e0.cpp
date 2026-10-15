// roc 2008-06 005993e0  unit: RBX::VPartInstance::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005993e0
//
// 005993e0  83ec50               sub esp, 0x50
// 005993e3  56                   push esi
// 005993e4  8bf1                 mov esi, ecx
// 005993e6  8b86c4020000         mov eax, dword ptr [esi + 0x2c4]
// 005993ec  d94004               fld dword ptr [eax + 4]
// 005993ef  83c004               add eax, 4
// 005993f2  d905ac9b8100         fld dword ptr [0x819bac]
// 005993f8  57                   push edi
// 005993f9  dcc9                 fmul st(1), st(0)
// 005993fb  83ec08               sub esp, 8
// 005993fe  d9c9                 fxch st(1)
// 00599400  d9542424             fst dword ptr [esp + 0x24]
// 00599404  d94004               fld dword ptr [eax + 4]
// 00599407  d8ca                 fmul st(2)
// 00599409  d94008               fld dword ptr [eax + 8]
// 0059940c  decb                 fmulp st(3)
// 0059940e  d9ca                 fxch st(2)
// 00599410  d95c242c             fstp dword ptr [esp + 0x2c]
// 00599414  d9c9                 fxch st(1)
// 00599416  d9e0                 fchs 
// 00599418  d95c241c             fstp dword ptr [esp + 0x1c]
// 0059941c  dd1c24               fstp qword ptr [esp]
// 0059941f  e88c871000           call 0x6a1bb0
// 00599424  d95c2414             fstp dword ptr [esp + 0x14]
// 00599428  83c408               add esp, 8
// 0059942b  d944240c             fld dword ptr [esp + 0xc]
// 0059942f  db5c2408             fistp dword ptr [esp + 8]
// 00599433  db442408             fild dword ptr [esp + 8]
// 00599437  83ec08               sub esp, 8
// 0059943a  d86c2424             fsubr dword ptr [esp + 0x24]
// 0059943e  d95c2418             fstp dword ptr [esp + 0x18]
// 00599442  d944242c             fld dword ptr [esp + 0x2c]
// 00599446  dd1c24               fstp qword ptr [esp]
// 00599449  e862871000           call 0x6a1bb0
// 0059944e  d95c2414             fstp dword ptr [esp + 0x14]
// 00599452  83c408               add esp, 8
// 00599455  d944240c             fld dword ptr [esp + 0xc]
// 00599459  db5c2408             fistp dword ptr [esp + 8]
// 0059945d  db442408             fild dword ptr [esp + 8]
// 00599461  d86c2424             fsubr dword ptr [esp + 0x24]
// 00599465  d95c2418             fstp dword ptr [esp + 0x18]
// 00599469  e8b2a9f7ff           call 0x513e20
// 0059946e  50                   push eax
// 0059946f  8d4c242c             lea ecx, [esp + 0x2c]
// 00599473  e8a89df7ff           call 0x513220
// 00599478  d9442410             fld dword ptr [esp + 0x10]
// 0059947c  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00599480  d95c244c             fstp dword ptr [esp + 0x4c]
// 00599484  d9442414             fld dword ptr [esp + 0x14]
// 00599488  8d442428             lea eax, [esp + 0x28]
// 0059948c  d95c2450             fstp dword ptr [esp + 0x50]
// 00599490  50                   push eax
// 00599491  d944241c             fld dword ptr [esp + 0x1c]
// 00599495  57                   push edi
// 00599496  8d8e28020000         lea ecx, [esi + 0x228]
// 0059949c  d95c245c             fstp dword ptr [esp + 0x5c]
// 005994a0  e81bee0400           call 0x5e82c0
// 005994a5  8bc8                 mov ecx, eax
// 005994a7  e854d2edff           call 0x476700
// 005994ac  8bc7                 mov eax, edi
// 005994ae  5f                   pop edi
// 005994af  5e                   pop esi
// 005994b0  83c450               add esp, 0x50
// 005994b3  c20400               ret 4
// library rbxgs/roc_unit_4f842e31c2d089ba.cpp (function ?worldSnapLocation@PartInstance@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_4f842e31c2d089ba.cpp
