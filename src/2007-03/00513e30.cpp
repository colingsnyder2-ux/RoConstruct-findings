// roc 2007-03 00513e30  unit: seg_00510000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513e30
//
// 00513e30  d9e8                 fld1 
// 00513e32  83ec6c               sub esp, 0x6c
// 00513e35  d9442478             fld dword ptr [esp + 0x78]
// 00513e39  56                   push esi
// 00513e3a  dde1                 fucom st(1)
// 00513e3c  57                   push edi
// 00513e3d  8bf1                 mov esi, ecx
// 00513e3f  dfe0                 fnstsw ax
// 00513e41  ddd9                 fstp st(1)
// 00513e43  f6c444               test ah, 0x44
// 00513e46  7a2e                 jp 0x513e76
// 00513e48  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00513e4c  ddd8                 fstp st(0)
// 00513e4e  8b742478             mov esi, dword ptr [esp + 0x78]
// 00513e52  57                   push edi
// 00513e53  8bce                 mov ecx, esi
// 00513e55  e826abfeff           call 0x4fe980
// 00513e5a  d94724               fld dword ptr [edi + 0x24]
// 00513e5d  d95e24               fstp dword ptr [esi + 0x24]
// 00513e60  8bc6                 mov eax, esi
// 00513e62  d94728               fld dword ptr [edi + 0x28]
// 00513e65  d95e28               fstp dword ptr [esi + 0x28]
// 00513e68  d9472c               fld dword ptr [edi + 0x2c]
// 00513e6b  5f                   pop edi
// 00513e6c  d95e2c               fstp dword ptr [esi + 0x2c]
// 00513e6f  5e                   pop esi
// 00513e70  83c46c               add esp, 0x6c
// 00513e73  c20c00               ret 0xc
// 00513e76  d9ee                 fldz 
// 00513e78  56                   push esi
// 00513e79  dae9                 fucompp 
// 00513e7b  dfe0                 fnstsw ax
// 00513e7d  f6c444               test ah, 0x44
// 00513e80  7a27                 jp 0x513ea9
// 00513e82  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00513e86  8bcf                 mov ecx, edi
// 00513e88  e8f3aafeff           call 0x4fe980
// 00513e8d  d94624               fld dword ptr [esi + 0x24]
// 00513e90  d95f24               fstp dword ptr [edi + 0x24]
// 00513e93  8bc7                 mov eax, edi
// 00513e95  d94628               fld dword ptr [esi + 0x28]
// 00513e98  d95f28               fstp dword ptr [edi + 0x28]
// 00513e9b  d9462c               fld dword ptr [esi + 0x2c]
// 00513e9e  d95f2c               fstp dword ptr [edi + 0x2c]
// 00513ea1  5f                   pop edi
// 00513ea2  5e                   pop esi
// 00513ea3  83c46c               add esp, 0x6c
// 00513ea6  c20c00               ret 0xc
// 00513ea9  8d4c2444             lea ecx, [esp + 0x44]
// 00513ead  e8cead0000           call 0x51ec80
// 00513eb2  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00513eb6  57                   push edi
// 00513eb7  8d4c2434             lea ecx, [esp + 0x34]
// 00513ebb  e8c0ad0000           call 0x51ec80
// 00513ec0  d94724               fld dword ptr [edi + 0x24]
// 00513ec3  d9842480000000       fld dword ptr [esp + 0x80]
// 00513eca  8d442450             lea eax, [esp + 0x50]
// 00513ece  d9c0                 fld st(0)
// 00513ed0  50                   push eax
// 00513ed1  deca                 fmulp st(2)
// 00513ed3  83ec08               sub esp, 8
// 00513ed6  d9c9                 fxch st(1)
// 00513ed8  8d4c243c             lea ecx, [esp + 0x3c]
// 00513edc  8d542420             lea edx, [esp + 0x20]
// 00513ee0  d95c2420             fstp dword ptr [esp + 0x20]
// 00513ee4  d94728               fld dword ptr [edi + 0x28]
// 00513ee7  d8c9                 fmul st(1)
// 00513ee9  d95c2424             fstp dword ptr [esp + 0x24]
// 00513eed  d9472c               fld dword ptr [edi + 0x2c]
// 00513ef0  d8c9                 fmul st(1)
// 00513ef2  d95c2428             fstp dword ptr [esp + 0x28]
// 00513ef6  d9c0                 fld st(0)
// 00513ef8  d9e8                 fld1 
// 00513efa  dee1                 fsubrp st(1)
// 00513efc  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00513f03  d94624               fld dword ptr [esi + 0x24]
// 00513f06  d9842488000000       fld dword ptr [esp + 0x88]
// 00513f0d  d9c0                 fld st(0)
// 00513f0f  deca                 fmulp st(2)
// 00513f11  d9c9                 fxch st(1)
// 00513f13  d95c2414             fstp dword ptr [esp + 0x14]
// 00513f17  d94628               fld dword ptr [esi + 0x28]
// 00513f1a  d8c9                 fmul st(1)
// 00513f1c  d95c2418             fstp dword ptr [esp + 0x18]
// 00513f20  d84e2c               fmul dword ptr [esi + 0x2c]
// 00513f23  d95c241c             fstp dword ptr [esp + 0x1c]
// 00513f27  d9442414             fld dword ptr [esp + 0x14]
// 00513f2b  d8442420             fadd dword ptr [esp + 0x20]
// 00513f2f  d95c2430             fstp dword ptr [esp + 0x30]
// 00513f33  d9442418             fld dword ptr [esp + 0x18]
// 00513f37  d8442424             fadd dword ptr [esp + 0x24]
// 00513f3b  d95c2434             fstp dword ptr [esp + 0x34]
// 00513f3f  d944241c             fld dword ptr [esp + 0x1c]
// 00513f43  d8442428             fadd dword ptr [esp + 0x28]
// 00513f47  d95c2438             fstp dword ptr [esp + 0x38]
// 00513f4b  d90510507900         fld dword ptr [0x795010]
// 00513f51  d95c2404             fstp dword ptr [esp + 4]
// 00513f55  d91c24               fstp dword ptr [esp]
// 00513f58  51                   push ecx
// 00513f59  52                   push edx
// 00513f5a  8d4c2454             lea ecx, [esp + 0x54]
// 00513f5e  e8bdaf0000           call 0x51ef20
// 00513f63  8bc8                 mov ecx, eax
// 00513f65  e886af0000           call 0x51eef0
// 00513f6a  8b742478             mov esi, dword ptr [esp + 0x78]
// 00513f6e  50                   push eax
// 00513f6f  8bce                 mov ecx, esi
// 00513f71  e80aaafeff           call 0x4fe980
// 00513f76  d9442424             fld dword ptr [esp + 0x24]
// 00513f7a  d95e24               fstp dword ptr [esi + 0x24]
// 00513f7d  5f                   pop edi
// 00513f7e  d9442424             fld dword ptr [esp + 0x24]
// 00513f82  8bc6                 mov eax, esi
// 00513f84  d95e28               fstp dword ptr [esi + 0x28]
// 00513f87  d9442428             fld dword ptr [esp + 0x28]
// 00513f8b  d95e2c               fstp dword ptr [esi + 0x2c]
// 00513f8e  5e                   pop esi
// 00513f8f  83c46c               add esp, 0x6c
// 00513f92  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ?lerp@CoordinateFrame@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp
