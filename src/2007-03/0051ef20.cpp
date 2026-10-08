// roc 2007-03 0051ef20  unit: seg_00510000  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ef20
//
// 0051ef20  83ec34               sub esp, 0x34
// 0051ef23  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0051ef27  8b5004               mov edx, dword ptr [eax + 4]
// 0051ef2a  56                   push esi
// 0051ef2b  8bf1                 mov esi, ecx
// 0051ef2d  8b08                 mov ecx, dword ptr [eax]
// 0051ef2f  d906                 fld dword ptr [esi]
// 0051ef31  894c2408             mov dword ptr [esp + 8], ecx
// 0051ef35  d9442408             fld dword ptr [esp + 8]
// 0051ef39  8b4808               mov ecx, dword ptr [eax + 8]
// 0051ef3c  d9c0                 fld st(0)
// 0051ef3e  deca                 fmulp st(2)
// 0051ef40  8954240c             mov dword ptr [esp + 0xc], edx
// 0051ef44  d944240c             fld dword ptr [esp + 0xc]
// 0051ef48  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051ef4b  d9c0                 fld st(0)
// 0051ef4d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0051ef51  d84e04               fmul dword ptr [esi + 4]
// 0051ef54  89542414             mov dword ptr [esp + 0x14], edx
// 0051ef58  dec3                 faddp st(3)
// 0051ef5a  d9442410             fld dword ptr [esp + 0x10]
// 0051ef5e  d9c0                 fld st(0)
// 0051ef60  d84e08               fmul dword ptr [esi + 8]
// 0051ef63  dec4                 faddp st(4)
// 0051ef65  d9460c               fld dword ptr [esi + 0xc]
// 0051ef68  d9442414             fld dword ptr [esp + 0x14]
// 0051ef6c  d9c0                 fld st(0)
// 0051ef6e  deca                 fmulp st(2)
// 0051ef70  d9cd                 fxch st(5)
// 0051ef72  dec1                 faddp st(1)
// 0051ef74  d95c2440             fstp dword ptr [esp + 0x40]
// 0051ef78  d9ee                 fldz 
// 0051ef7a  d85c2440             fcomp dword ptr [esp + 0x40]
// 0051ef7e  dfe0                 fnstsw ax
// 0051ef80  f6c441               test ah, 0x41
// 0051ef83  7561                 jne 0x51efe6
// 0051ef85  d9ca                 fxch st(2)
// 0051ef87  d9e0                 fchs 
// 0051ef89  d95c2418             fstp dword ptr [esp + 0x18]
// 0051ef8d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051ef91  89442408             mov dword ptr [esp + 8], eax
// 0051ef95  d9e0                 fchs 
// 0051ef97  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051ef9b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051ef9f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0051efa3  d9e0                 fchs 
// 0051efa5  d95c2420             fstp dword ptr [esp + 0x20]
// 0051efa9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0051efad  89542410             mov dword ptr [esp + 0x10], edx
// 0051efb1  d9e0                 fchs 
// 0051efb3  d95c2424             fstp dword ptr [esp + 0x24]
// 0051efb7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051efbb  d906                 fld dword ptr [esi]
// 0051efbd  89442414             mov dword ptr [esp + 0x14], eax
// 0051efc1  d84c2418             fmul dword ptr [esp + 0x18]
// 0051efc5  d944241c             fld dword ptr [esp + 0x1c]
// 0051efc9  d84e04               fmul dword ptr [esi + 4]
// 0051efcc  dec1                 faddp st(1)
// 0051efce  d9442420             fld dword ptr [esp + 0x20]
// 0051efd2  d84e08               fmul dword ptr [esi + 8]
// 0051efd5  dec1                 faddp st(1)
// 0051efd7  d9460c               fld dword ptr [esi + 0xc]
// 0051efda  d84c2424             fmul dword ptr [esp + 0x24]
// 0051efde  dec1                 faddp st(1)
// 0051efe0  d95c2440             fstp dword ptr [esp + 0x40]
// 0051efe4  eb08                 jmp 0x51efee
// 0051efe6  dddb                 fstp st(3)
// 0051efe8  ddda                 fstp st(2)
// 0051efea  ddd9                 fstp st(1)
// 0051efec  ddd8                 fstp st(0)
// 0051efee  d9442440             fld dword ptr [esp + 0x40]
// 0051eff2  dc15a0597900         fcom qword ptr [0x7959a0]
// 0051eff8  dfe0                 fnstsw ax
// 0051effa  f6c441               test ah, 0x41
// 0051effd  7518                 jne 0x51f017
// 0051efff  d9e8                 fld1 
// 0051f001  d8d9                 fcomp st(1)
// 0051f003  dfe0                 fnstsw ax
// 0051f005  f6c441               test ah, 0x41
// 0051f008  7507                 jne 0x51f011
// 0051f00a  e815081000           call 0x61f824
// 0051f00f  eb0e                 jmp 0x51f01f
// 0051f011  ddd8                 fstp st(0)
// 0051f013  d9ee                 fldz 
// 0051f015  eb08                 jmp 0x51f01f
// 0051f017  ddd8                 fstp st(0)
// 0051f019  dd0530fd7900         fld qword ptr [0x79fd30]
// 0051f01f  d95c2440             fstp dword ptr [esp + 0x40]
// 0051f023  d9442440             fld dword ptr [esp + 0x40]
// 0051f027  d9442448             fld dword ptr [esp + 0x48]
// 0051f02b  d8d9                 fcomp st(1)
// 0051f02d  dfe0                 fnstsw ax
// 0051f02f  f6c441               test ah, 0x41
// 0051f032  0f8a14010000         jp 0x51f14c
// 0051f038  d9442444             fld dword ptr [esp + 0x44]
// 0051f03c  d9e8                 fld1 
// 0051f03e  dee1                 fsubrp st(1)
// 0051f040  dec9                 fmulp st(1)
// 0051f042  d95c2448             fstp dword ptr [esp + 0x48]
// 0051f046  d9442448             fld dword ptr [esp + 0x48]
// 0051f04a  e8bd071000           call 0x61f80c
// 0051f04f  d95c2448             fstp dword ptr [esp + 0x48]
// 0051f053  d9442448             fld dword ptr [esp + 0x48]
// 0051f057  d95c2404             fstp dword ptr [esp + 4]
// 0051f05b  d9442440             fld dword ptr [esp + 0x40]
// 0051f05f  d84c2444             fmul dword ptr [esp + 0x44]
// 0051f063  d95c2444             fstp dword ptr [esp + 0x44]
// 0051f067  d9442444             fld dword ptr [esp + 0x44]
// 0051f06b  e89c071000           call 0x61f80c
// 0051f070  d95c2444             fstp dword ptr [esp + 0x44]
// 0051f074  d9442444             fld dword ptr [esp + 0x44]
// 0051f078  d95c2448             fstp dword ptr [esp + 0x48]
// 0051f07c  d9442440             fld dword ptr [esp + 0x40]
// 0051f080  e887071000           call 0x61f80c
// 0051f085  d95c2444             fstp dword ptr [esp + 0x44]
// 0051f089  d9442444             fld dword ptr [esp + 0x44]
// 0051f08d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0051f091  d95c2444             fstp dword ptr [esp + 0x44]
// 0051f095  d9442408             fld dword ptr [esp + 8]
// 0051f099  d9442448             fld dword ptr [esp + 0x48]
// 0051f09d  d9c0                 fld st(0)
// 0051f09f  deca                 fmulp st(2)
// 0051f0a1  d9c9                 fxch st(1)
// 0051f0a3  d95c2428             fstp dword ptr [esp + 0x28]
// 0051f0a7  d944240c             fld dword ptr [esp + 0xc]
// 0051f0ab  d8c9                 fmul st(1)
// 0051f0ad  d95c242c             fstp dword ptr [esp + 0x2c]
// 0051f0b1  d9442410             fld dword ptr [esp + 0x10]
// 0051f0b5  d8c9                 fmul st(1)
// 0051f0b7  d95c2430             fstp dword ptr [esp + 0x30]
// 0051f0bb  d84c2414             fmul dword ptr [esp + 0x14]
// 0051f0bf  d95c2434             fstp dword ptr [esp + 0x34]
// 0051f0c3  d906                 fld dword ptr [esi]
// 0051f0c5  d9442404             fld dword ptr [esp + 4]
// 0051f0c9  d9c0                 fld st(0)
// 0051f0cb  deca                 fmulp st(2)
// 0051f0cd  d9c9                 fxch st(1)
// 0051f0cf  d95c2418             fstp dword ptr [esp + 0x18]
// 0051f0d3  d9c0                 fld st(0)
// 0051f0d5  d84e04               fmul dword ptr [esi + 4]
// 0051f0d8  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051f0dc  d9c0                 fld st(0)
// 0051f0de  d84e08               fmul dword ptr [esi + 8]
// 0051f0e1  d95c2420             fstp dword ptr [esp + 0x20]
// 0051f0e5  d84e0c               fmul dword ptr [esi + 0xc]
// 0051f0e8  5e                   pop esi
// 0051f0e9  d95c2420             fstp dword ptr [esp + 0x20]
// 0051f0ed  d9442414             fld dword ptr [esp + 0x14]
// 0051f0f1  d8442424             fadd dword ptr [esp + 0x24]
// 0051f0f5  d95c2404             fstp dword ptr [esp + 4]
// 0051f0f9  d9442418             fld dword ptr [esp + 0x18]
// 0051f0fd  d8442428             fadd dword ptr [esp + 0x28]
// 0051f101  d95c2408             fstp dword ptr [esp + 8]
// 0051f105  d944241c             fld dword ptr [esp + 0x1c]
// 0051f109  d844242c             fadd dword ptr [esp + 0x2c]
// 0051f10d  d95c240c             fstp dword ptr [esp + 0xc]
// 0051f111  d9442420             fld dword ptr [esp + 0x20]
// 0051f115  d8442430             fadd dword ptr [esp + 0x30]
// 0051f119  d95c2410             fstp dword ptr [esp + 0x10]
// 0051f11d  d9442404             fld dword ptr [esp + 4]
// 0051f121  d9442440             fld dword ptr [esp + 0x40]
// 0051f125  d9c0                 fld st(0)
// 0051f127  defa                 fdivp st(2)
// 0051f129  d9c9                 fxch st(1)
// 0051f12b  d918                 fstp dword ptr [eax]
// 0051f12d  d9442408             fld dword ptr [esp + 8]
// 0051f131  d8f1                 fdiv st(1)
// 0051f133  d95804               fstp dword ptr [eax + 4]
// 0051f136  d944240c             fld dword ptr [esp + 0xc]
// 0051f13a  d8f1                 fdiv st(1)
// 0051f13c  d95808               fstp dword ptr [eax + 8]
// 0051f13f  d87c2410             fdivr dword ptr [esp + 0x10]
// 0051f143  d9580c               fstp dword ptr [eax + 0xc]
// 0051f146  83c434               add esp, 0x34
// 0051f149  c21000               ret 0x10
// 0051f14c  57                   push edi
// 0051f14d  ddd8                 fstp st(0)
// 0051f14f  d9442448             fld dword ptr [esp + 0x48]
// 0051f153  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0051f157  51                   push ecx
// 0051f158  d91c24               fstp dword ptr [esp]
// 0051f15b  8d4c2410             lea ecx, [esp + 0x10]
// 0051f15f  51                   push ecx
// 0051f160  57                   push edi
// 0051f161  8bce                 mov ecx, esi
// 0051f163  e888fcffff           call 0x51edf0
// 0051f168  8bc7                 mov eax, edi
// 0051f16a  5f                   pop edi
// 0051f16b  5e                   pop esi
// 0051f16c  83c434               add esp, 0x34
// 0051f16f  c21000               ret 0x10
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?slerp@Quat@G3D@@QBE?AV12@ABV12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
