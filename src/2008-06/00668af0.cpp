// roc 2008-06 00668af0  unit: RBX::JointStage  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668af0
//
// 00668af0  83ec1c               sub esp, 0x1c
// 00668af3  56                   push esi
// 00668af4  8bf1                 mov esi, ecx
// 00668af6  d906                 fld dword ptr [esi]
// 00668af8  57                   push edi
// 00668af9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00668afd  d86724               fsub dword ptr [edi + 0x24]
// 00668b00  8d442408             lea eax, [esp + 8]
// 00668b04  50                   push eax
// 00668b05  8d4c241c             lea ecx, [esp + 0x1c]
// 00668b09  d95c240c             fstp dword ptr [esp + 0xc]
// 00668b0d  51                   push ecx
// 00668b0e  d94604               fld dword ptr [esi + 4]
// 00668b11  d86728               fsub dword ptr [edi + 0x28]
// 00668b14  d95c2414             fstp dword ptr [esp + 0x14]
// 00668b18  d94608               fld dword ptr [esi + 8]
// 00668b1b  d8672c               fsub dword ptr [edi + 0x2c]
// 00668b1e  d95c2418             fstp dword ptr [esp + 0x18]
// 00668b22  e8095bf7ff           call 0x5de630
// 00668b27  8d542420             lea edx, [esp + 0x20]
// 00668b2b  52                   push edx
// 00668b2c  e8ef66f7ff           call 0x5df220
// 00668b31  d85c243c             fcomp dword ptr [esp + 0x3c]
// 00668b35  83c40c               add esp, 0xc
// 00668b38  dfe0                 fnstsw ax
// 00668b3a  f6c441               test ah, 0x41
// 00668b3d  750a                 jne 0x668b49
// 00668b3f  5f                   pop edi
// 00668b40  32c0                 xor al, al
// 00668b42  5e                   pop esi
// 00668b43  83c41c               add esp, 0x1c
// 00668b46  c20c00               ret 0xc
// 00668b49  57                   push edi
// 00668b4a  8d4c240c             lea ecx, [esp + 0xc]
// 00668b4e  e81d4af7ff           call 0x5dd570
// 00668b53  d900                 fld dword ptr [eax]
// 00668b55  d944242c             fld dword ptr [esp + 0x2c]
// 00668b59  8d4c2408             lea ecx, [esp + 8]
// 00668b5d  dcc9                 fmul st(1), st(0)
// 00668b5f  d94004               fld dword ptr [eax + 4]
// 00668b62  d8c9                 fmul st(1)
// 00668b64  d94008               fld dword ptr [eax + 8]
// 00668b67  d8ca                 fmul st(2)
// 00668b69  d9400c               fld dword ptr [eax + 0xc]
// 00668b6c  decb                 fmulp st(3)
// 00668b6e  d9460c               fld dword ptr [esi + 0xc]
// 00668b71  dee4                 fsubrp st(4)
// 00668b73  d9cb                 fxch st(3)
// 00668b75  d95c2408             fstp dword ptr [esp + 8]
// 00668b79  d86e10               fsubr dword ptr [esi + 0x10]
// 00668b7c  d95c240c             fstp dword ptr [esp + 0xc]
// 00668b80  d94614               fld dword ptr [esi + 0x14]
// 00668b83  dee2                 fsubrp st(2)
// 00668b85  d9c9                 fxch st(1)
// 00668b87  d95c2410             fstp dword ptr [esp + 0x10]
// 00668b8b  d86e18               fsubr dword ptr [esi + 0x18]
// 00668b8e  d95c2414             fstp dword ptr [esp + 0x14]
// 00668b92  e819feffff           call 0x6689b0
// 00668b97  d85c2430             fcomp dword ptr [esp + 0x30]
// 00668b9b  dfe0                 fnstsw ax
// 00668b9d  f6c441               test ah, 0x41
// 00668ba0  749d                 je 0x668b3f
// 00668ba2  5f                   pop edi
// 00668ba3  b001                 mov al, 1
// 00668ba5  5e                   pop esi
// 00668ba6  83c41c               add esp, 0x1c
// 00668ba9  c20c00               ret 0xc
// library rbxgs-dll/util\RunningAverage.cpp (function ?withinTolerance@RunningAverageState@RBX@@QAE_NABVCoordinateFrame@G3D@@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/RunningAverage.cpp
