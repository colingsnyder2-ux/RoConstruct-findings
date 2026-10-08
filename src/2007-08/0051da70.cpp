// from server: 100% by auto
// roc 2007-08 0051da70  unit: seg_00510000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051da70
//
// 0051da70  d9e8                 fld1 
// 0051da72  83ec6c               sub esp, 0x6c
// 0051da75  d9442478             fld dword ptr [esp + 0x78]
// 0051da79  56                   push esi
// 0051da7a  dde1                 fucom st(1)
// 0051da7c  57                   push edi
// 0051da7d  8bf1                 mov esi, ecx
// 0051da7f  dfe0                 fnstsw ax
// 0051da81  ddd9                 fstp st(1)
// 0051da83  f6c444               test ah, 0x44
// 0051da86  7a2e                 jp 0x51dab6
// 0051da88  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0051da8c  ddd8                 fstp st(0)
// 0051da8e  8b742478             mov esi, dword ptr [esp + 0x78]
// 0051da92  57                   push edi
// 0051da93  8bce                 mov ecx, esi
// 0051da95  e836bbfeff           call 0x5095d0
// 0051da9a  d94724               fld dword ptr [edi + 0x24]
// 0051da9d  d95e24               fstp dword ptr [esi + 0x24]
// 0051daa0  8bc6                 mov eax, esi
// 0051daa2  d94728               fld dword ptr [edi + 0x28]
// 0051daa5  d95e28               fstp dword ptr [esi + 0x28]
// 0051daa8  d9472c               fld dword ptr [edi + 0x2c]
// 0051daab  5f                   pop edi
// 0051daac  d95e2c               fstp dword ptr [esi + 0x2c]
// 0051daaf  5e                   pop esi
// 0051dab0  83c46c               add esp, 0x6c
// 0051dab3  c20c00               ret 0xc
// 0051dab6  d9ee                 fldz 
// 0051dab8  56                   push esi
// 0051dab9  dae9                 fucompp 
// 0051dabb  dfe0                 fnstsw ax
// 0051dabd  f6c444               test ah, 0x44
// 0051dac0  7a27                 jp 0x51dae9
// 0051dac2  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0051dac6  8bcf                 mov ecx, edi
// 0051dac8  e803bbfeff           call 0x5095d0
// 0051dacd  d94624               fld dword ptr [esi + 0x24]
// 0051dad0  d95f24               fstp dword ptr [edi + 0x24]
// 0051dad3  8bc7                 mov eax, edi
// 0051dad5  d94628               fld dword ptr [esi + 0x28]
// 0051dad8  d95f28               fstp dword ptr [edi + 0x28]
// 0051dadb  d9462c               fld dword ptr [esi + 0x2c]
// 0051dade  d95f2c               fstp dword ptr [edi + 0x2c]
// 0051dae1  5f                   pop edi
// 0051dae2  5e                   pop esi
// 0051dae3  83c46c               add esp, 0x6c
// 0051dae6  c20c00               ret 0xc
// 0051dae9  8d4c2444             lea ecx, [esp + 0x44]
// 0051daed  e8ce640000           call 0x523fc0
// 0051daf2  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0051daf6  57                   push edi
// 0051daf7  8d4c2434             lea ecx, [esp + 0x34]
// 0051dafb  e8c0640000           call 0x523fc0
// 0051db00  d94724               fld dword ptr [edi + 0x24]
// 0051db03  d9842480000000       fld dword ptr [esp + 0x80]
// 0051db0a  8d442450             lea eax, [esp + 0x50]
// 0051db0e  d9c0                 fld st(0)
// 0051db10  50                   push eax
// 0051db11  deca                 fmulp st(2)
// 0051db13  83ec08               sub esp, 8
// 0051db16  d9c9                 fxch st(1)
// 0051db18  8d4c243c             lea ecx, [esp + 0x3c]
// 0051db1c  8d542420             lea edx, [esp + 0x20]
// 0051db20  d95c2420             fstp dword ptr [esp + 0x20]
// 0051db24  d94728               fld dword ptr [edi + 0x28]
// 0051db27  d8c9                 fmul st(1)
// 0051db29  d95c2424             fstp dword ptr [esp + 0x24]
// 0051db2d  d9472c               fld dword ptr [edi + 0x2c]
// 0051db30  d8c9                 fmul st(1)
// 0051db32  d95c2428             fstp dword ptr [esp + 0x28]
// 0051db36  d9c0                 fld st(0)
// 0051db38  d9e8                 fld1 
// 0051db3a  dee1                 fsubrp st(1)
// 0051db3c  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0051db43  d94624               fld dword ptr [esi + 0x24]
// 0051db46  d9842488000000       fld dword ptr [esp + 0x88]
// 0051db4d  d9c0                 fld st(0)
// 0051db4f  deca                 fmulp st(2)
// 0051db51  d9c9                 fxch st(1)
// 0051db53  d95c2414             fstp dword ptr [esp + 0x14]
// 0051db57  d94628               fld dword ptr [esi + 0x28]
// 0051db5a  d8c9                 fmul st(1)
// 0051db5c  d95c2418             fstp dword ptr [esp + 0x18]
// 0051db60  d84e2c               fmul dword ptr [esi + 0x2c]
// 0051db63  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051db67  d9442414             fld dword ptr [esp + 0x14]
// 0051db6b  d8442420             fadd dword ptr [esp + 0x20]
// 0051db6f  d95c2430             fstp dword ptr [esp + 0x30]
// 0051db73  d9442418             fld dword ptr [esp + 0x18]
// 0051db77  d8442424             fadd dword ptr [esp + 0x24]
// 0051db7b  d95c2434             fstp dword ptr [esp + 0x34]
// 0051db7f  d944241c             fld dword ptr [esp + 0x1c]
// 0051db83  d8442428             fadd dword ptr [esp + 0x28]
// 0051db87  d95c2438             fstp dword ptr [esp + 0x38]
// 0051db8b  d905005c7900         fld dword ptr [0x795c00]
// 0051db91  d95c2404             fstp dword ptr [esp + 4]
// 0051db95  d91c24               fstp dword ptr [esp]
// 0051db98  51                   push ecx
// 0051db99  52                   push edx
// 0051db9a  8d4c2454             lea ecx, [esp + 0x54]
// 0051db9e  e8bd660000           call 0x524260
// 0051dba3  8bc8                 mov ecx, eax
// 0051dba5  e886660000           call 0x524230
// 0051dbaa  8b742478             mov esi, dword ptr [esp + 0x78]
// 0051dbae  50                   push eax
// 0051dbaf  8bce                 mov ecx, esi
// 0051dbb1  e81abafeff           call 0x5095d0
// 0051dbb6  d9442424             fld dword ptr [esp + 0x24]
// 0051dbba  d95e24               fstp dword ptr [esi + 0x24]
// 0051dbbd  5f                   pop edi
// 0051dbbe  d9442424             fld dword ptr [esp + 0x24]
// 0051dbc2  8bc6                 mov eax, esi
// 0051dbc4  d95e28               fstp dword ptr [esi + 0x28]
// 0051dbc7  d9442428             fld dword ptr [esp + 0x28]
// 0051dbcb  d95e2c               fstp dword ptr [esi + 0x2c]
// 0051dbce  5e                   pop esi
// 0051dbcf  83c46c               add esp, 0x6c
// 0051dbd2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lerp@CoordinateFrame@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
