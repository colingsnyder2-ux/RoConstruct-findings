// roc 2008-06 00606780  unit: RBX::ContactConnector  size: 720 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606780
//
// 00606780  83ec3c               sub esp, 0x3c
// 00606783  d9ee                 fldz 
// 00606785  56                   push esi
// 00606786  8bf1                 mov esi, ecx
// 00606788  d9542420             fst dword ptr [esp + 0x20]
// 0060678c  8b4608               mov eax, dword ptr [esi + 8]
// 0060678f  d9542424             fst dword ptr [esp + 0x24]
// 00606793  57                   push edi
// 00606794  d954242c             fst dword ptr [esp + 0x2c]
// 00606798  8d7e08               lea edi, [esi + 8]
// 0060679b  d9542434             fst dword ptr [esp + 0x34]
// 0060679f  d9542438             fst dword ptr [esp + 0x38]
// 006067a3  d954243c             fst dword ptr [esp + 0x3c]
// 006067a7  83f806               cmp eax, 6
// 006067aa  7777                 ja 0x606823
// 006067ac  ff2485346a6000       jmp dword ptr [eax*4 + 0x606a34]
// 006067b3  8d442424             lea eax, [esp + 0x24]
// 006067b7  ddd8                 fstp st(0)
// 006067b9  50                   push eax
// 006067ba  8bcf                 mov ecx, edi
// 006067bc  e89fcd0000           call 0x613560
// 006067c1  eb5e                 jmp 0x606821
// 006067c3  8d4c2424             lea ecx, [esp + 0x24]
// 006067c7  ddd8                 fstp st(0)
// 006067c9  51                   push ecx
// 006067ca  8bcf                 mov ecx, edi
// 006067cc  e8cfce0000           call 0x6136a0
// 006067d1  eb4e                 jmp 0x606821
// 006067d3  8d542424             lea edx, [esp + 0x24]
// 006067d7  ddd8                 fstp st(0)
// 006067d9  52                   push edx
// 006067da  8bcf                 mov ecx, edi
// 006067dc  e8afca0000           call 0x613290
// 006067e1  eb3e                 jmp 0x606821
// 006067e3  8d442424             lea eax, [esp + 0x24]
// 006067e7  ddd8                 fstp st(0)
// 006067e9  50                   push eax
// 006067ea  8bcf                 mov ecx, edi
// 006067ec  e84fcc0000           call 0x613440
// 006067f1  eb2e                 jmp 0x606821
// 006067f3  8d4c2424             lea ecx, [esp + 0x24]
// 006067f7  ddd8                 fstp st(0)
// 006067f9  51                   push ecx
// 006067fa  8bcf                 mov ecx, edi
// 006067fc  e8dfc90000           call 0x6131e0
// 00606801  eb1e                 jmp 0x606821
// 00606803  8d542424             lea edx, [esp + 0x24]
// 00606807  ddd8                 fstp st(0)
// 00606809  52                   push edx
// 0060680a  8bcf                 mov ecx, edi
// 0060680c  e80fcb0000           call 0x613320
// 00606811  eb0e                 jmp 0x606821
// 00606813  8d442424             lea eax, [esp + 0x24]
// 00606817  ddd8                 fstp st(0)
// 00606819  50                   push eax
// 0060681a  8bcf                 mov ecx, edi
// 0060681c  e89fd10000           call 0x6139c0
// 00606821  d9ee                 fldz 
// 00606823  d8542430             fcom dword ptr [esp + 0x30]
// 00606827  dfe0                 fnstsw ax
// 00606829  f6c441               test ah, 0x41
// 0060682c  0f85e9010000         jne 0x606a1b
// 00606832  ff0578b89700         inc dword ptr [0x97b878]
// 00606838  d954240c             fst dword ptr [esp + 0xc]
// 0060683c  8d4c2424             lea ecx, [esp + 0x24]
// 00606840  d9542410             fst dword ptr [esp + 0x10]
// 00606844  51                   push ecx
// 00606845  d95c2418             fstp dword ptr [esp + 0x18]
// 00606849  8d542410             lea edx, [esp + 0x10]
// 0060684d  52                   push edx
// 0060684e  8d442410             lea eax, [esp + 0x10]
// 00606852  50                   push eax
// 00606853  8bcf                 mov ecx, edi
// 00606855  e886c80000           call 0x6130e0
// 0060685a  d944240c             fld dword ptr [esp + 0xc]
// 0060685e  d9442448             fld dword ptr [esp + 0x48]
// 00606862  dcc9                 fmul st(1), st(0)
// 00606864  d9442410             fld dword ptr [esp + 0x10]
// 00606868  d8c9                 fmul st(1)
// 0060686a  d9442414             fld dword ptr [esp + 0x14]
// 0060686e  deca                 fmulp st(2)
// 00606870  d9ca                 fxch st(2)
// 00606872  d84644               fadd dword ptr [esi + 0x44]
// 00606875  d95e44               fstp dword ptr [esi + 0x44]
// 00606878  d94648               fld dword ptr [esi + 0x48]
// 0060687b  dec2                 faddp st(2)
// 0060687d  d9c9                 fxch st(1)
// 0060687f  d95e48               fstp dword ptr [esi + 0x48]
// 00606882  d8464c               fadd dword ptr [esi + 0x4c]
// 00606885  d95e4c               fstp dword ptr [esi + 0x4c]
// 00606888  d9462c               fld dword ptr [esi + 0x2c]
// 0060688b  d80df8498200         fmul dword ptr [0x8249f8]
// 00606891  d9464c               fld dword ptr [esi + 0x4c]
// 00606894  d94648               fld dword ptr [esi + 0x48]
// 00606897  d94644               fld dword ptr [esi + 0x44]
// 0060689a  dcc8                 fmul st(0), st(0)
// 0060689c  d9c1                 fld st(1)
// 0060689e  deca                 fmulp st(2)
// 006068a0  dec1                 faddp st(1)
// 006068a2  d9c1                 fld st(1)
// 006068a4  deca                 fmulp st(2)
// 006068a6  dec1                 faddp st(1)
// 006068a8  d9fa                 fsqrt 
// 006068aa  d8c9                 fmul st(1)
// 006068ac  d94630               fld dword ptr [esi + 0x30]
// 006068af  d84e40               fmul dword ptr [esi + 0x40]
// 006068b2  d8d1                 fcom st(1)
// 006068b4  dfe0                 fnstsw ax
// 006068b6  f6c405               test ah, 5
// 006068b9  7a29                 jp 0x6068e4
// 006068bb  d9c9                 fxch st(1)
// 006068bd  dc1520288400         fcom qword ptr [0x842820]
// 006068c3  dfe0                 fnstsw ax
// 006068c5  f6c441               test ah, 0x41
// 006068c8  751e                 jne 0x6068e8
// 006068ca  def9                 fdivp st(1)
// 006068cc  d94644               fld dword ptr [esi + 0x44]
// 006068cf  d8c9                 fmul st(1)
// 006068d1  d95e44               fstp dword ptr [esi + 0x44]
// 006068d4  d94648               fld dword ptr [esi + 0x48]
// 006068d7  d8c9                 fmul st(1)
// 006068d9  d95e48               fstp dword ptr [esi + 0x48]
// 006068dc  d84e4c               fmul dword ptr [esi + 0x4c]
// 006068df  d95e4c               fstp dword ptr [esi + 0x4c]
// 006068e2  eb08                 jmp 0x6068ec
// 006068e4  ddd9                 fstp st(1)
// 006068e6  eb02                 jmp 0x6068ea
// 006068e8  ddd8                 fstp st(0)
// 006068ea  ddd8                 fstp st(0)
// 006068ec  d9464c               fld dword ptr [esi + 0x4c]
// 006068ef  d944242c             fld dword ptr [esp + 0x2c]
// 006068f3  dcc9                 fmul st(1), st(0)
// 006068f5  d94648               fld dword ptr [esi + 0x48]
// 006068f8  d9442428             fld dword ptr [esp + 0x28]
// 006068fc  dcc9                 fmul st(1), st(0)
// 006068fe  d9cb                 fxch st(3)
// 00606900  dec1                 faddp st(1)
// 00606902  d94644               fld dword ptr [esi + 0x44]
// 00606905  d9442424             fld dword ptr [esp + 0x24]
// 00606909  dcc9                 fmul st(1), st(0)
// 0060690b  d9ca                 fxch st(2)
// 0060690d  dec1                 faddp st(1)
// 0060690f  d9c0                 fld st(0)
// 00606911  d8ca                 fmul st(2)
// 00606913  d9c4                 fld st(4)
// 00606915  d8ca                 fmul st(2)
// 00606917  d9c4                 fld st(4)
// 00606919  decb                 fmulp st(3)
// 0060691b  d94644               fld dword ptr [esi + 0x44]
// 0060691e  dee2                 fsubrp st(2)
// 00606920  d9c9                 fxch st(1)
// 00606922  d95e44               fstp dword ptr [esi + 0x44]
// 00606925  d86e48               fsubr dword ptr [esi + 0x48]
// 00606928  d95e48               fstp dword ptr [esi + 0x48]
// 0060692b  d86e4c               fsubr dword ptr [esi + 0x4c]
// 0060692e  d95e4c               fstp dword ptr [esi + 0x4c]
// 00606931  d9ee                 fldz 
// 00606933  d8563c               fcom dword ptr [esi + 0x3c]
// 00606936  dfe0                 fnstsw ax
// 00606938  d9058c748200         fld dword ptr [0x82748c]
// 0060693e  f6c444               test ah, 0x44
// 00606941  7b0f                 jnp 0x606952
// 00606943  d9463c               fld dword ptr [esi + 0x3c]
// 00606946  d8c1                 fadd st(1)
// 00606948  d80d1c288400         fmul dword ptr [0x84281c]
// 0060694e  d8e1                 fsub st(1)
// 00606950  eb14                 jmp 0x606966
// 00606952  d9c1                 fld st(1)
// 00606954  d85e38               fcomp dword ptr [esi + 0x38]
// 00606957  dfe0                 fnstsw ax
// 00606959  f6c444               test ah, 0x44
// 0060695c  7a04                 jp 0x606962
// 0060695e  d9c1                 fld st(1)
// 00606960  eb04                 jmp 0x606966
// 00606962  d9442430             fld dword ptr [esp + 0x30]
// 00606966  d9563c               fst dword ptr [esi + 0x3c]
// 00606969  d9c2                 fld st(2)
// 0060696b  d85e38               fcomp dword ptr [esi + 0x38]
// 0060696e  dfe0                 fnstsw ax
// 00606970  f6c444               test ah, 0x44
// 00606973  7b15                 jnp 0x60698a
// 00606975  d94638               fld dword ptr [esi + 0x38]
// 00606978  dec2                 faddp st(2)
// 0060697a  d9c9                 fxch st(1)
// 0060697c  d80d1c288400         fmul dword ptr [0x84281c]
// 00606982  d8258c748200         fsub dword ptr [0x82748c]
// 00606988  eb06                 jmp 0x606990
// 0060698a  ddd9                 fstp st(1)
// 0060698c  d9442430             fld dword ptr [esp + 0x30]
// 00606990  d95638               fst dword ptr [esi + 0x38]
// 00606993  d9ca                 fxch st(2)
// 00606995  d8542408             fcom dword ptr [esp + 8]
// 00606999  dfe0                 fnstsw ax
// 0060699b  f6c441               test ah, 0x41
// 0060699e  7505                 jne 0x6069a5
// 006069a0  d9462c               fld dword ptr [esi + 0x2c]
// 006069a3  eb03                 jmp 0x6069a8
// 006069a5  d94634               fld dword ptr [esi + 0x34]
// 006069a8  d95c2448             fstp dword ptr [esp + 0x48]
// 006069ac  d9ca                 fxch st(2)
// 006069ae  d8642430             fsub dword ptr [esp + 0x30]
// 006069b2  d84c2448             fmul dword ptr [esp + 0x48]
// 006069b6  d95640               fst dword ptr [esi + 0x40]
// 006069b9  d9c9                 fxch st(1)
// 006069bb  d85c2430             fcomp dword ptr [esp + 0x30]
// 006069bf  dfe0                 fnstsw ax
// 006069c1  f6c401               test ah, 1
// 006069c4  7504                 jne 0x6069ca
// 006069c6  ddd9                 fstp st(1)
// 006069c8  eb02                 jmp 0x6069cc
// 006069ca  ddd8                 fstp st(0)
// 006069cc  d95640               fst dword ptr [esi + 0x40]
// 006069cf  8d4c2434             lea ecx, [esp + 0x34]
// 006069d3  d94644               fld dword ptr [esi + 0x44]
// 006069d6  51                   push ecx
// 006069d7  d8cd                 fmul st(5)
// 006069d9  8d54241c             lea edx, [esp + 0x1c]
// 006069dd  d94648               fld dword ptr [esi + 0x48]
// 006069e0  52                   push edx
// 006069e1  d8ce                 fmul st(6)
// 006069e3  8bcf                 mov ecx, edi
// 006069e5  d9464c               fld dword ptr [esi + 0x4c]
// 006069e8  decf                 fmulp st(7)
// 006069ea  d9c2                 fld st(2)
// 006069ec  decc                 fmulp st(4)
// 006069ee  d9cd                 fxch st(5)
// 006069f0  d8ca                 fmul st(2)
// 006069f2  d9cc                 fxch st(4)
// 006069f4  deca                 fmulp st(2)
// 006069f6  deea                 fsubp st(2)
// 006069f8  d9c9                 fxch st(1)
// 006069fa  d95c2420             fstp dword ptr [esp + 0x20]
// 006069fe  d9c9                 fxch st(1)
// 00606a00  dee2                 fsubrp st(2)
// 00606a02  d9c9                 fxch st(1)
// 00606a04  d95c2424             fstp dword ptr [esp + 0x24]
// 00606a08  dee1                 fsubrp st(1)
// 00606a0a  d95c2428             fstp dword ptr [esp + 0x28]
// 00606a0e  e86dc60000           call 0x613080
// 00606a13  5f                   pop edi
// 00606a14  5e                   pop esi
// 00606a15  83c43c               add esp, 0x3c
// 00606a18  c20800               ret 8
// 00606a1b  ff057cb89700         inc dword ptr [0x97b87c]
// 00606a21  d95638               fst dword ptr [esi + 0x38]
// 00606a24  d9563c               fst dword ptr [esi + 0x3c]
// 00606a27  5f                   pop edi
// 00606a28  d95e40               fstp dword ptr [esi + 0x40]
// 00606a2b  5e                   pop esi
// 00606a2c  83c43c               add esp, 0x3c
// 00606a2f  c20800               ret 8
// 00606a32  8bff                 mov edi, edi
// 00606a34  d36760               shl dword ptr [edi + 0x60], cl
// 00606a37  00f3                 add bl, dh
// 00606a39  6760                 pushal 
// 00606a3b  0003                 add byte ptr [ebx], al
// 00606a3d  686000e367           push 0x67e30060
// 00606a42  60                   pushal 
// 00606a43  00b3676000c3         add byte ptr [ebx - 0x3cff9f99], dh
// 00606a49  6760                 pushal 
// 00606a4b  0013                 add byte ptr [ebx], dl
// library rbxgs/roc_contact_counter_open_a53cbed5341d1a27.cpp (function ?computeForce@ContactConnector@RBX@@UAEXM_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_contact_counter_open_a53cbed5341d1a27.cpp
