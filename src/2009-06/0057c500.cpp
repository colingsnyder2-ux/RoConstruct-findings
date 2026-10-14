// roc 2009-06 0057c500  unit: G3D::TextInput::WrongSymbol  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c500
//
// 0057c500  d9e8                 fld1 
// 0057c502  83ec60               sub esp, 0x60
// 0057c505  d944246c             fld dword ptr [esp + 0x6c]
// 0057c509  56                   push esi
// 0057c50a  dde1                 fucom st(1)
// 0057c50c  57                   push edi
// 0057c50d  8bf1                 mov esi, ecx
// 0057c50f  dfe0                 fnstsw ax
// 0057c511  ddd9                 fstp st(1)
// 0057c513  f6c444               test ah, 0x44
// 0057c516  7a2e                 jp 0x57c546
// 0057c518  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0057c51c  ddd8                 fstp st(0)
// 0057c51e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0057c522  57                   push edi
// 0057c523  8bce                 mov ecx, esi
// 0057c525  e856daf1ff           call 0x499f80
// 0057c52a  d94724               fld dword ptr [edi + 0x24]
// 0057c52d  d95e24               fstp dword ptr [esi + 0x24]
// 0057c530  8bc6                 mov eax, esi
// 0057c532  d94728               fld dword ptr [edi + 0x28]
// 0057c535  d95e28               fstp dword ptr [esi + 0x28]
// 0057c538  d9472c               fld dword ptr [edi + 0x2c]
// 0057c53b  5f                   pop edi
// 0057c53c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0057c53f  5e                   pop esi
// 0057c540  83c460               add esp, 0x60
// 0057c543  c20c00               ret 0xc
// 0057c546  d9ee                 fldz 
// 0057c548  56                   push esi
// 0057c549  dae9                 fucompp 
// 0057c54b  dfe0                 fnstsw ax
// 0057c54d  f6c444               test ah, 0x44
// 0057c550  7a27                 jp 0x57c579
// 0057c552  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0057c556  8bcf                 mov ecx, edi
// 0057c558  e823daf1ff           call 0x499f80
// 0057c55d  d94624               fld dword ptr [esi + 0x24]
// 0057c560  d95f24               fstp dword ptr [edi + 0x24]
// 0057c563  8bc7                 mov eax, edi
// 0057c565  d94628               fld dword ptr [esi + 0x28]
// 0057c568  d95f28               fstp dword ptr [edi + 0x28]
// 0057c56b  d9462c               fld dword ptr [esi + 0x2c]
// 0057c56e  d95f2c               fstp dword ptr [edi + 0x2c]
// 0057c571  5f                   pop edi
// 0057c572  5e                   pop esi
// 0057c573  83c460               add esp, 0x60
// 0057c576  c20c00               ret 0xc
// 0057c579  8d4c2428             lea ecx, [esp + 0x28]
// 0057c57d  e8fede0000           call 0x58a480
// 0057c582  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0057c586  57                   push edi
// 0057c587  8d4c2418             lea ecx, [esp + 0x18]
// 0057c58b  e8f0de0000           call 0x58a480
// 0057c590  d94724               fld dword ptr [edi + 0x24]
// 0057c593  d9442474             fld dword ptr [esp + 0x74]
// 0057c597  8d442444             lea eax, [esp + 0x44]
// 0057c59b  dcc9                 fmul st(1), st(0)
// 0057c59d  50                   push eax
// 0057c59e  d94728               fld dword ptr [edi + 0x28]
// 0057c5a1  83ec08               sub esp, 8
// 0057c5a4  8d4c2420             lea ecx, [esp + 0x20]
// 0057c5a8  d8c9                 fmul st(1)
// 0057c5aa  8d542440             lea edx, [esp + 0x40]
// 0057c5ae  d9472c               fld dword ptr [edi + 0x2c]
// 0057c5b1  d8ca                 fmul st(2)
// 0057c5b3  d9e8                 fld1 
// 0057c5b5  d8e3                 fsub st(3)
// 0057c5b7  d94624               fld dword ptr [esi + 0x24]
// 0057c5ba  d8c9                 fmul st(1)
// 0057c5bc  d94628               fld dword ptr [esi + 0x28]
// 0057c5bf  d8ca                 fmul st(2)
// 0057c5c1  d9462c               fld dword ptr [esi + 0x2c]
// 0057c5c4  decb                 fmulp st(3)
// 0057c5c6  d9c9                 fxch st(1)
// 0057c5c8  dec6                 faddp st(6)
// 0057c5ca  d9cd                 fxch st(5)
// 0057c5cc  d95c2414             fstp dword ptr [esp + 0x14]
// 0057c5d0  d9cc                 fxch st(4)
// 0057c5d2  dec2                 faddp st(2)
// 0057c5d4  d9c9                 fxch st(1)
// 0057c5d6  d95c2418             fstp dword ptr [esp + 0x18]
// 0057c5da  dec2                 faddp st(2)
// 0057c5dc  d9c9                 fxch st(1)
// 0057c5de  d95c241c             fstp dword ptr [esp + 0x1c]
// 0057c5e2  d90540d08b00         fld dword ptr [0x8bd040]
// 0057c5e8  d95c2404             fstp dword ptr [esp + 4]
// 0057c5ec  d91c24               fstp dword ptr [esp]
// 0057c5ef  51                   push ecx
// 0057c5f0  52                   push edx
// 0057c5f1  8d4c2438             lea ecx, [esp + 0x38]
// 0057c5f5  e866e00000           call 0x58a660
// 0057c5fa  8bc8                 mov ecx, eax
// 0057c5fc  e81fe00000           call 0x58a620
// 0057c601  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0057c605  50                   push eax
// 0057c606  8bce                 mov ecx, esi
// 0057c608  e873d9f1ff           call 0x499f80
// 0057c60d  d9442408             fld dword ptr [esp + 8]
// 0057c611  d95e24               fstp dword ptr [esi + 0x24]
// 0057c614  5f                   pop edi
// 0057c615  d9442408             fld dword ptr [esp + 8]
// 0057c619  8bc6                 mov eax, esi
// 0057c61b  d95e28               fstp dword ptr [esi + 0x28]
// 0057c61e  d944240c             fld dword ptr [esp + 0xc]
// 0057c622  d95e2c               fstp dword ptr [esi + 0x2c]
// 0057c625  5e                   pop esi
// 0057c626  83c460               add esp, 0x60
// 0057c629  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?lerp@CoordinateFrame@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp
