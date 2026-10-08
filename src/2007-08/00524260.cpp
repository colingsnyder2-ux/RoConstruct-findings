// from server: 100% by auto
// roc 2007-08 00524260  unit: G3D::Line  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524260
//
// 00524260  83ec34               sub esp, 0x34
// 00524263  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00524267  8b5004               mov edx, dword ptr [eax + 4]
// 0052426a  56                   push esi
// 0052426b  8bf1                 mov esi, ecx
// 0052426d  8b08                 mov ecx, dword ptr [eax]
// 0052426f  d906                 fld dword ptr [esi]
// 00524271  894c2408             mov dword ptr [esp + 8], ecx
// 00524275  d9442408             fld dword ptr [esp + 8]
// 00524279  8b4808               mov ecx, dword ptr [eax + 8]
// 0052427c  d9c0                 fld st(0)
// 0052427e  deca                 fmulp st(2)
// 00524280  8954240c             mov dword ptr [esp + 0xc], edx
// 00524284  d944240c             fld dword ptr [esp + 0xc]
// 00524288  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052428b  d9c0                 fld st(0)
// 0052428d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00524291  d84e04               fmul dword ptr [esi + 4]
// 00524294  89542414             mov dword ptr [esp + 0x14], edx
// 00524298  dec3                 faddp st(3)
// 0052429a  d9442410             fld dword ptr [esp + 0x10]
// 0052429e  d9c0                 fld st(0)
// 005242a0  d84e08               fmul dword ptr [esi + 8]
// 005242a3  dec4                 faddp st(4)
// 005242a5  d9460c               fld dword ptr [esi + 0xc]
// 005242a8  d9442414             fld dword ptr [esp + 0x14]
// 005242ac  d9c0                 fld st(0)
// 005242ae  deca                 fmulp st(2)
// 005242b0  d9cd                 fxch st(5)
// 005242b2  dec1                 faddp st(1)
// 005242b4  d95c2440             fstp dword ptr [esp + 0x40]
// 005242b8  d9ee                 fldz 
// 005242ba  d85c2440             fcomp dword ptr [esp + 0x40]
// 005242be  dfe0                 fnstsw ax
// 005242c0  f6c441               test ah, 0x41
// 005242c3  7561                 jne 0x524326
// 005242c5  d9ca                 fxch st(2)
// 005242c7  d9e0                 fchs 
// 005242c9  d95c2418             fstp dword ptr [esp + 0x18]
// 005242cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005242d1  89442408             mov dword ptr [esp + 8], eax
// 005242d5  d9e0                 fchs 
// 005242d7  d95c241c             fstp dword ptr [esp + 0x1c]
// 005242db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005242df  894c240c             mov dword ptr [esp + 0xc], ecx
// 005242e3  d9e0                 fchs 
// 005242e5  d95c2420             fstp dword ptr [esp + 0x20]
// 005242e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005242ed  89542410             mov dword ptr [esp + 0x10], edx
// 005242f1  d9e0                 fchs 
// 005242f3  d95c2424             fstp dword ptr [esp + 0x24]
// 005242f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005242fb  d906                 fld dword ptr [esi]
// 005242fd  89442414             mov dword ptr [esp + 0x14], eax
// 00524301  d84c2418             fmul dword ptr [esp + 0x18]
// 00524305  d944241c             fld dword ptr [esp + 0x1c]
// 00524309  d84e04               fmul dword ptr [esi + 4]
// 0052430c  dec1                 faddp st(1)
// 0052430e  d9442420             fld dword ptr [esp + 0x20]
// 00524312  d84e08               fmul dword ptr [esi + 8]
// 00524315  dec1                 faddp st(1)
// 00524317  d9460c               fld dword ptr [esi + 0xc]
// 0052431a  d84c2424             fmul dword ptr [esp + 0x24]
// 0052431e  dec1                 faddp st(1)
// 00524320  d95c2440             fstp dword ptr [esp + 0x40]
// 00524324  eb08                 jmp 0x52432e
// 00524326  dddb                 fstp st(3)
// 00524328  ddda                 fstp st(2)
// 0052432a  ddd9                 fstp st(1)
// 0052432c  ddd8                 fstp st(0)
// 0052432e  d9442440             fld dword ptr [esp + 0x40]
// 00524332  dc1590657900         fcom qword ptr [0x796590]
// 00524338  dfe0                 fnstsw ax
// 0052433a  f6c441               test ah, 0x41
// 0052433d  7518                 jne 0x524357
// 0052433f  d9e8                 fld1 
// 00524341  d8d9                 fcomp st(1)
// 00524343  dfe0                 fnstsw ax
// 00524345  f6c441               test ah, 0x41
// 00524348  7507                 jne 0x524351
// 0052434a  e80fd01000           call 0x63135e
// 0052434f  eb0e                 jmp 0x52435f
// 00524351  ddd8                 fstp st(0)
// 00524353  d9ee                 fldz 
// 00524355  eb08                 jmp 0x52435f
// 00524357  ddd8                 fstp st(0)
// 00524359  dd05f0057a00         fld qword ptr [0x7a05f0]
// 0052435f  d95c2440             fstp dword ptr [esp + 0x40]
// 00524363  d9442440             fld dword ptr [esp + 0x40]
// 00524367  d9442448             fld dword ptr [esp + 0x48]
// 0052436b  d8d9                 fcomp st(1)
// 0052436d  dfe0                 fnstsw ax
// 0052436f  f6c441               test ah, 0x41
// 00524372  0f8a14010000         jp 0x52448c
// 00524378  d9442444             fld dword ptr [esp + 0x44]
// 0052437c  d9e8                 fld1 
// 0052437e  dee1                 fsubrp st(1)
// 00524380  dec9                 fmulp st(1)
// 00524382  d95c2448             fstp dword ptr [esp + 0x48]
// 00524386  d9442448             fld dword ptr [esp + 0x48]
// 0052438a  e8b7cf1000           call 0x631346
// 0052438f  d95c2448             fstp dword ptr [esp + 0x48]
// 00524393  d9442448             fld dword ptr [esp + 0x48]
// 00524397  d95c2404             fstp dword ptr [esp + 4]
// 0052439b  d9442440             fld dword ptr [esp + 0x40]
// 0052439f  d84c2444             fmul dword ptr [esp + 0x44]
// 005243a3  d95c2444             fstp dword ptr [esp + 0x44]
// 005243a7  d9442444             fld dword ptr [esp + 0x44]
// 005243ab  e896cf1000           call 0x631346
// 005243b0  d95c2444             fstp dword ptr [esp + 0x44]
// 005243b4  d9442444             fld dword ptr [esp + 0x44]
// 005243b8  d95c2448             fstp dword ptr [esp + 0x48]
// 005243bc  d9442440             fld dword ptr [esp + 0x40]
// 005243c0  e881cf1000           call 0x631346
// 005243c5  d95c2444             fstp dword ptr [esp + 0x44]
// 005243c9  d9442444             fld dword ptr [esp + 0x44]
// 005243cd  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005243d1  d95c2444             fstp dword ptr [esp + 0x44]
// 005243d5  d9442408             fld dword ptr [esp + 8]
// 005243d9  d9442448             fld dword ptr [esp + 0x48]
// 005243dd  d9c0                 fld st(0)
// 005243df  deca                 fmulp st(2)
// 005243e1  d9c9                 fxch st(1)
// 005243e3  d95c2428             fstp dword ptr [esp + 0x28]
// 005243e7  d944240c             fld dword ptr [esp + 0xc]
// 005243eb  d8c9                 fmul st(1)
// 005243ed  d95c242c             fstp dword ptr [esp + 0x2c]
// 005243f1  d9442410             fld dword ptr [esp + 0x10]
// 005243f5  d8c9                 fmul st(1)
// 005243f7  d95c2430             fstp dword ptr [esp + 0x30]
// 005243fb  d84c2414             fmul dword ptr [esp + 0x14]
// 005243ff  d95c2434             fstp dword ptr [esp + 0x34]
// 00524403  d906                 fld dword ptr [esi]
// 00524405  d9442404             fld dword ptr [esp + 4]
// 00524409  d9c0                 fld st(0)
// 0052440b  deca                 fmulp st(2)
// 0052440d  d9c9                 fxch st(1)
// 0052440f  d95c2418             fstp dword ptr [esp + 0x18]
// 00524413  d9c0                 fld st(0)
// 00524415  d84e04               fmul dword ptr [esi + 4]
// 00524418  d95c241c             fstp dword ptr [esp + 0x1c]
// 0052441c  d9c0                 fld st(0)
// 0052441e  d84e08               fmul dword ptr [esi + 8]
// 00524421  d95c2420             fstp dword ptr [esp + 0x20]
// 00524425  d84e0c               fmul dword ptr [esi + 0xc]
// 00524428  5e                   pop esi
// 00524429  d95c2420             fstp dword ptr [esp + 0x20]
// 0052442d  d9442414             fld dword ptr [esp + 0x14]
// 00524431  d8442424             fadd dword ptr [esp + 0x24]
// 00524435  d95c2404             fstp dword ptr [esp + 4]
// 00524439  d9442418             fld dword ptr [esp + 0x18]
// 0052443d  d8442428             fadd dword ptr [esp + 0x28]
// 00524441  d95c2408             fstp dword ptr [esp + 8]
// 00524445  d944241c             fld dword ptr [esp + 0x1c]
// 00524449  d844242c             fadd dword ptr [esp + 0x2c]
// 0052444d  d95c240c             fstp dword ptr [esp + 0xc]
// 00524451  d9442420             fld dword ptr [esp + 0x20]
// 00524455  d8442430             fadd dword ptr [esp + 0x30]
// 00524459  d95c2410             fstp dword ptr [esp + 0x10]
// 0052445d  d9442404             fld dword ptr [esp + 4]
// 00524461  d9442440             fld dword ptr [esp + 0x40]
// 00524465  d9c0                 fld st(0)
// 00524467  defa                 fdivp st(2)
// 00524469  d9c9                 fxch st(1)
// 0052446b  d918                 fstp dword ptr [eax]
// 0052446d  d9442408             fld dword ptr [esp + 8]
// 00524471  d8f1                 fdiv st(1)
// 00524473  d95804               fstp dword ptr [eax + 4]
// 00524476  d944240c             fld dword ptr [esp + 0xc]
// 0052447a  d8f1                 fdiv st(1)
// 0052447c  d95808               fstp dword ptr [eax + 8]
// 0052447f  d87c2410             fdivr dword ptr [esp + 0x10]
// 00524483  d9580c               fstp dword ptr [eax + 0xc]
// 00524486  83c434               add esp, 0x34
// 00524489  c21000               ret 0x10
// 0052448c  57                   push edi
// 0052448d  ddd8                 fstp st(0)
// 0052448f  d9442448             fld dword ptr [esp + 0x48]
// 00524493  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00524497  51                   push ecx
// 00524498  d91c24               fstp dword ptr [esp]
// 0052449b  8d4c2410             lea ecx, [esp + 0x10]
// 0052449f  51                   push ecx
// 005244a0  57                   push edi
// 005244a1  8bce                 mov ecx, esi
// 005244a3  e888fcffff           call 0x524130
// 005244a8  8bc7                 mov eax, edi
// 005244aa  5f                   pop edi
// 005244ab  5e                   pop esi
// 005244ac  83c434               add esp, 0x34
// 005244af  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?slerp@Quat@G3D@@QBE?AV12@ABV12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
