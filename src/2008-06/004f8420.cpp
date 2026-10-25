// from server: 100% by EspClaude
// roc 2008-06 004f8420  unit: RBX::ViewNew::WedgeBuilder  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f8420
//
// 004f8420  83ec6c               sub esp, 0x6c
// 004f8423  53                   push ebx
// 004f8424  55                   push ebp
// 004f8425  8be9                 mov ebp, ecx
// 004f8427  56                   push esi
// 004f8428  57                   push edi
// 004f8429  8d4504               lea eax, [ebp + 4]
// 004f842c  50                   push eax
// 004f842d  8d4c2474             lea ecx, [esp + 0x74]
// 004f8431  51                   push ecx
// 004f8432  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f8436  e895001800           call 0x6784d0
// 004f843b  0fbf8424b8000000     movsx eax, word ptr [esp + 0xb8]
// 004f8443  89442424             mov dword ptr [esp + 0x24], eax
// 004f8447  0fbf8c24ba000000     movsx ecx, word ptr [esp + 0xba]
// 004f844f  db442424             fild dword ptr [esp + 0x24]
// 004f8453  d9842498000000       fld dword ptr [esp + 0x98]
// 004f845a  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f845e  d8a42490000000       fsub dword ptr [esp + 0x90]
// 004f8465  40                   inc eax
// 004f8466  41                   inc ecx
// 004f8467  0fafc8               imul ecx, eax
// 004f846a  d8f1                 fdiv st(1)
// 004f846c  33db                 xor ebx, ebx
// 004f846e  8bc1                 mov eax, ecx
// 004f8470  ba04000000           mov edx, 4
// 004f8475  894c2430             mov dword ptr [esp + 0x30], ecx
// 004f8479  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f847d  f7e2                 mul edx
// 004f847f  db442424             fild dword ptr [esp + 0x24]
// 004f8483  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f848a  d8a42494000000       fsub dword ptr [esp + 0x94]
// 004f8491  d8f1                 fdiv st(1)
// 004f8493  0f90c3               seto bl
// 004f8496  f7db                 neg ebx
// 004f8498  0bd8                 or ebx, eax
// 004f849a  53                   push ebx
// 004f849b  d95c2444             fstp dword ptr [esp + 0x44]
// 004f849f  d98424b0000000       fld dword ptr [esp + 0xb0]
// 004f84a6  def2                 fdivrp st(2)
// 004f84a8  d9c9                 fxch st(1)
// 004f84aa  d95c2448             fstp dword ptr [esp + 0x48]
// 004f84ae  d8bc24b4000000       fdivr dword ptr [esp + 0xb4]
// 004f84b5  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f84b9  e898841a00           call 0x6a0956
// 004f84be  d9842494000000       fld dword ptr [esp + 0x94]
// 004f84c5  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 004f84cc  d954241c             fst dword ptr [esp + 0x1c]
// 004f84d0  d98424a8000000       fld dword ptr [esp + 0xa8]
// 004f84d7  8bf0                 mov esi, eax
// 004f84d9  33c0                 xor eax, eax
// 004f84db  d95c2420             fstp dword ptr [esp + 0x20]
// 004f84df  83c40c               add esp, 0xc
// 004f84e2  33db                 xor ebx, ebx
// 004f84e4  663bc2               cmp ax, dx
// 004f84e7  668b8424b2000000     mov ax, word ptr [esp + 0xb2]
// 004f84ef  0f8f03020000         jg 0x4f86f8
// 004f84f5  d9ee                 fldz 
// 004f84f7  eb02                 jmp 0x4f84fb
// 004f84f9  d9c9                 fxch st(1)
// 004f84fb  d984248c000000       fld dword ptr [esp + 0x8c]
// 004f8502  33c9                 xor ecx, ecx
// 004f8504  d9542418             fst dword ptr [esp + 0x18]
// 004f8508  33ff                 xor edi, edi
// 004f850a  663bc8               cmp cx, ax
// 004f850d  d98424a0000000       fld dword ptr [esp + 0xa0]
// 004f8514  d954241c             fst dword ptr [esp + 0x1c]
// 004f8518  0f8fb0010000         jg 0x4f86ce
// 004f851e  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 004f8525  03c0                 add eax, eax
// 004f8527  03c0                 add eax, eax
// 004f8529  8d6c2430             lea ebp, [esp + 0x30]
// 004f852d  8d54042c             lea edx, [esp + eax + 0x2c]
// 004f8531  2be8                 sub ebp, eax
// 004f8533  89542420             mov dword ptr [esp + 0x20], edx
// 004f8537  eb0c                 jmp 0x4f8545
// 004f8539  d9ee                 fldz 
// 004f853b  d9442410             fld dword ptr [esp + 0x10]
// 004f853f  d9cb                 fxch st(3)
// 004f8541  d9c9                 fxch st(1)
// 004f8543  d9ca                 fxch st(2)
// 004f8545  d9842498000000       fld dword ptr [esp + 0x98]
// 004f854c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f8550  d95c2454             fstp dword ptr [esp + 0x54]
// 004f8554  d9ca                 fxch st(2)
// 004f8556  d954242c             fst dword ptr [esp + 0x2c]
// 004f855a  d9542430             fst dword ptr [esp + 0x30]
// 004f855e  d9442414             fld dword ptr [esp + 0x14]
// 004f8562  d95d00               fstp dword ptr [ebp]
// 004f8565  d9ca                 fxch st(2)
// 004f8567  d918                 fstp dword ptr [eax]
// 004f8569  d9c9                 fxch st(1)
// 004f856b  d9542458             fst dword ptr [esp + 0x58]
// 004f856f  d954245c             fst dword ptr [esp + 0x5c]
// 004f8573  d9e8                 fld1 
// 004f8575  d95c2460             fstp dword ptr [esp + 0x60]
// 004f8579  d8d2                 fcom st(2)
// 004f857b  dfe0                 fnstsw ax
// 004f857d  d9842480000000       fld dword ptr [esp + 0x80]
// 004f8584  f6c405               test ah, 5
// 004f8587  7a04                 jp 0x4f858d
// 004f8589  dceb                 fsub st(3), st(0)
// 004f858b  eb04                 jmp 0x4f8591
// 004f858d  d9c0                 fld st(0)
// 004f858f  dec4                 faddp st(4)
// 004f8591  d9cb                 fxch st(3)
// 004f8593  d954244c             fst dword ptr [esp + 0x4c]
// 004f8597  d9ca                 fxch st(2)
// 004f8599  d8d1                 fcom st(1)
// 004f859b  dfe0                 fnstsw ax
// 004f859d  f6c441               test ah, 0x41
// 004f85a0  7540                 jne 0x4f85e2
// 004f85a2  dee3                 fsubrp st(3)
// 004f85a4  d9ca                 fxch st(2)
// 004f85a6  d95c2450             fstp dword ptr [esp + 0x50]
// 004f85aa  d8d1                 fcom st(1)
// 004f85ac  dfe0                 fnstsw ax
// 004f85ae  ddd9                 fstp st(1)
// 004f85b0  d9842484000000       fld dword ptr [esp + 0x84]
// 004f85b7  f6c441               test ah, 0x41
// 004f85ba  7512                 jne 0x4f85ce
// 004f85bc  dce9                 fsub st(1), st(0)
// 004f85be  d9c9                 fxch st(1)
// 004f85c0  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f85c4  d86c242c             fsubr dword ptr [esp + 0x2c]
// 004f85c8  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f85cc  eb1e                 jmp 0x4f85ec
// 004f85ce  d9c0                 fld st(0)
// 004f85d0  dec2                 faddp st(2)
// 004f85d2  d9c9                 fxch st(1)
// 004f85d4  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f85d8  d844242c             fadd dword ptr [esp + 0x2c]
// 004f85dc  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f85e0  eb0a                 jmp 0x4f85ec
// 004f85e2  ddd9                 fstp st(1)
// 004f85e4  ddd9                 fstp st(1)
// 004f85e6  dec1                 faddp st(1)
// 004f85e8  d95c2450             fstp dword ptr [esp + 0x50]
// 004f85ec  e8af150100           call 0x509ba0
// 004f85f1  8bc8                 mov ecx, eax
// 004f85f3  d901                 fld dword ptr [ecx]
// 004f85f5  d89c24a4000000       fcomp dword ptr [esp + 0xa4]
// 004f85fc  dfe0                 fnstsw ax
// 004f85fe  f6c444               test ah, 0x44
// 004f8601  7a21                 jp 0x4f8624
// 004f8603  d94104               fld dword ptr [ecx + 4]
// 004f8606  d89c24a8000000       fcomp dword ptr [esp + 0xa8]
// 004f860d  dfe0                 fnstsw ax
// 004f860f  f6c444               test ah, 0x44
// 004f8612  7a10                 jp 0x4f8624
// 004f8614  d984249c000000       fld dword ptr [esp + 0x9c]
// 004f861b  d98424a0000000       fld dword ptr [esp + 0xa0]
// 004f8622  eb08                 jmp 0x4f862c
// 004f8624  d944242c             fld dword ptr [esp + 0x2c]
// 004f8628  d9442430             fld dword ptr [esp + 0x30]
// 004f862c  d905ac9b8100         fld dword ptr [0x819bac]
// 004f8632  8d4c2458             lea ecx, [esp + 0x58]
// 004f8636  dcca                 fmul st(2), st(0)
// 004f8638  51                   push ecx
// 004f8639  d9ca                 fxch st(2)
// 004f863b  8d542468             lea edx, [esp + 0x68]
// 004f863f  52                   push edx
// 004f8640  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f8644  dec9                 fmulp st(1)
// 004f8646  d95c2450             fstp dword ptr [esp + 0x50]
// 004f864a  e881fe1700           call 0x6784d0
// 004f864f  8d442454             lea eax, [esp + 0x54]
// 004f8653  50                   push eax
// 004f8654  8d4c247c             lea ecx, [esp + 0x7c]
// 004f8658  51                   push ecx
// 004f8659  e872fe1700           call 0x6784d0
// 004f865e  6a01                 push 1
// 004f8660  8d542458             lea edx, [esp + 0x58]
// 004f8664  52                   push edx
// 004f8665  8d44247c             lea eax, [esp + 0x7c]
// 004f8669  50                   push eax
// 004f866a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004f8671  51                   push ecx
// 004f8672  e889f90400           call 0x548000
// 004f8677  d9442458             fld dword ptr [esp + 0x58]
// 004f867b  0fbf9424d2000000     movsx edx, word ptr [esp + 0xd2]
// 004f8683  d8442438             fadd dword ptr [esp + 0x38]
// 004f8687  42                   inc edx
// 004f8688  0fafd3               imul edx, ebx
// 004f868b  d9542438             fst dword ptr [esp + 0x38]
// 004f868f  d9442460             fld dword ptr [esp + 0x60]
// 004f8693  d844243c             fadd dword ptr [esp + 0x3c]
// 004f8697  d954243c             fst dword ptr [esp + 0x3c]
// 004f869b  03d7                 add edx, edi
// 004f869d  890496               mov dword ptr [esi + edx*4], eax
// 004f86a0  668b8424d2000000     mov ax, word ptr [esp + 0xd2]
// 004f86a8  0fbfc8               movsx ecx, ax
// 004f86ab  47                   inc edi
// 004f86ac  83c420               add esp, 0x20
// 004f86af  3bf9                 cmp edi, ecx
// 004f86b1  0f8e82feffff         jle 0x4f8539
// 004f86b7  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 004f86be  ddd8                 fstp st(0)
// 004f86c0  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004f86c4  ddd8                 fstp st(0)
// 004f86c6  d9442410             fld dword ptr [esp + 0x10]
// 004f86ca  d9ee                 fldz 
// 004f86cc  eb04                 jmp 0x4f86d2
// 004f86ce  ddd8                 fstp st(0)
// 004f86d0  ddd8                 fstp st(0)
// 004f86d2  d9442434             fld dword ptr [esp + 0x34]
// 004f86d6  0fbfca               movsx ecx, dx
// 004f86d9  dec2                 faddp st(2)
// 004f86db  43                   inc ebx
// 004f86dc  3bd9                 cmp ebx, ecx
// 004f86de  d9c9                 fxch st(1)
// 004f86e0  d9542410             fst dword ptr [esp + 0x10]
// 004f86e4  d944243c             fld dword ptr [esp + 0x3c]
// 004f86e8  d8442414             fadd dword ptr [esp + 0x14]
// 004f86ec  d95c2414             fstp dword ptr [esp + 0x14]
// 004f86f0  0f8e03feffff         jle 0x4f84f9
// 004f86f6  ddd9                 fstp st(1)
// 004f86f8  33c9                 xor ecx, ecx
// 004f86fa  ddd8                 fstp st(0)
// 004f86fc  33db                 xor ebx, ebx
// 004f86fe  663bca               cmp cx, dx
// 004f8701  7d4d                 jge 0x4f8750
// 004f8703  0fbfc8               movsx ecx, ax
// 004f8706  33ff                 xor edi, edi
// 004f8708  85c9                 test ecx, ecx
// 004f870a  7e3c                 jle 0x4f8748
// 004f870c  8d642400             lea esp, [esp]
// 004f8710  8d4101               lea eax, [ecx + 1]
// 004f8713  0fafc3               imul eax, ebx
// 004f8716  03c7                 add eax, edi
// 004f8718  03c8                 add ecx, eax
// 004f871a  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004f871e  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004f8722  52                   push edx
// 004f8723  8b1486               mov edx, dword ptr [esi + eax*4]
// 004f8726  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004f872a  51                   push ecx
// 004f872b  52                   push edx
// 004f872c  50                   push eax
// 004f872d  8bcd                 mov ecx, ebp
// 004f872f  e87c870000           call 0x500eb0
// 004f8734  0fbf8c24b2000000     movsx ecx, word ptr [esp + 0xb2]
// 004f873c  47                   inc edi
// 004f873d  3bf9                 cmp edi, ecx
// 004f873f  7ccf                 jl 0x4f8710
// 004f8741  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 004f8748  0fbfc2               movsx eax, dx
// 004f874b  43                   inc ebx
// 004f874c  3bd8                 cmp ebx, eax
// 004f874e  7cb6                 jl 0x4f8706
// 004f8750  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f8754  33ff                 xor edi, edi
// 004f8756  85db                 test ebx, ebx
// 004f8758  7617                 jbe 0x4f8771
// 004f875a  8d9b00000000         lea ebx, [ebx]
// 004f8760  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 004f8763  51                   push ecx
// 004f8764  e8d7fe0400           call 0x548640
// 004f8769  47                   inc edi
// 004f876a  83c404               add esp, 4
// 004f876d  3bfb                 cmp edi, ebx
// 004f876f  72ef                 jb 0x4f8760
// 004f8771  56                   push esi
// 004f8772  e8d3811a00           call 0x6a094a
// 004f8777  83c404               add esp, 4
// 004f877a  5f                   pop edi
// 004f877b  5e                   pop esi
// 004f877c  5d                   pop ebp
// 004f877d  5b                   pop ebx
// 004f877e  83c46c               add esp, 0x6c
// 004f8781  c23400               ret 0x34

// from server: 93% by EspClaude
// roc-flags: /O2 /fp:fast /GS- /EHsc /MD
// from server: 98% by coldek
// roc 2008-06 004fac10  unit: RBX::ViewNew::TorsoBuilder  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fac10
//
// 004fac10  55                   push ebp
// 004fac11  8bec                 mov ebp, esp
// 004fac13  83e4f8               and esp, 0xfffffff8
// 004fac16  81ec84000000         sub esp, 0x84
// 004fac1c  53                   push ebx
// 004fac1d  56                   push esi
// 004fac1e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 004fac22  57                   push edi
// 004fac23  83c104               add ecx, 4
// 004fac26  51                   push ecx
// 004fac27  8d442464             lea eax, [esp + 0x64]
// 004fac2b  50                   push eax
// 004fac2c  e86f150f00           call 0x5ec1a0
// 004fac31  d9442468             fld dword ptr [esp + 0x68]
// 004fac35  0fbf4534             movsx eax, word ptr [ebp + 0x34]
// 004fac39  d9e1                 fabs 
// 004fac3b  d95c2474             fstp dword ptr [esp + 0x74]
// 004fac3f  8944242c             mov dword ptr [esp + 0x2c], eax
// 004fac43  d944246c             fld dword ptr [esp + 0x6c]
// 004fac47  0fbf7d36             movsx edi, word ptr [ebp + 0x36]
// 004fac4b  d9e1                 fabs 
// 004fac4d  d95c2478             fstp dword ptr [esp + 0x78]
// 004fac51  d9442470             fld dword ptr [esp + 0x70]
// 004fac55  40                   inc eax
// 004fac56  d9e1                 fabs 
// 004fac58  33c9                 xor ecx, ecx
// 004fac5a  d95c247c             fstp dword ptr [esp + 0x7c]
// 004fac5e  ba04000000           mov edx, 4
// 004fac63  db44242c             fild dword ptr [esp + 0x2c]
// 004fac67  897c242c             mov dword ptr [esp + 0x2c], edi
// 004fac6b  d94514               fld dword ptr [ebp + 0x14]
// 004fac6e  47                   inc edi
// 004fac6f  d8650c               fsub dword ptr [ebp + 0xc]
// 004fac72  0faff8               imul edi, eax
// 004fac75  d8f1                 fdiv st(1)
// 004fac77  8bc7                 mov eax, edi
// 004fac79  d95c2444             fstp dword ptr [esp + 0x44]
// 004fac7d  f7e2                 mul edx
// 004fac7f  db44242c             fild dword ptr [esp + 0x2c]
// 004fac83  d94518               fld dword ptr [ebp + 0x18]
// 004fac86  d86510               fsub dword ptr [ebp + 0x10]
// 004fac89  d8f1                 fdiv st(1)
// 004fac8b  0f90c1               seto cl
// 004fac8e  897c242c             mov dword ptr [esp + 0x2c], edi
// 004fac92  f7d9                 neg ecx
// 004fac94  0bc8                 or ecx, eax
// 004fac96  51                   push ecx
// 004fac97  d95c244c             fstp dword ptr [esp + 0x4c]
// 004fac9b  d94528               fld dword ptr [ebp + 0x28]
// 004fac9e  def2                 fdivrp st(2)
// 004faca0  d9c9                 fxch st(1)
// 004faca2  d95c2450             fstp dword ptr [esp + 0x50]
// 004faca6  d87d2c               fdivr dword ptr [ebp + 0x2c]
// 004faca9  d95c2454             fstp dword ptr [esp + 0x54]
// 004facad  e8a45c1a00           call 0x6a0956
// 004facb2  d9450c               fld dword ptr [ebp + 0xc]
// 004facb5  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004facb8  d95c241c             fstp dword ptr [esp + 0x1c]
// 004facbc  d94520               fld dword ptr [ebp + 0x20]
// 004facbf  8bf0                 mov esi, eax
// 004facc1  33c0                 xor eax, eax
// 004facc3  d95c2420             fstp dword ptr [esp + 0x20]
// 004facc7  83c40c               add esp, 0xc
// 004facca  33db                 xor ebx, ebx
// 004faccc  663bc2               cmp ax, dx
// 004faccf  668b4536             mov ax, word ptr [ebp + 0x36]
// 004facd3  0f8f9c010000         jg 0x4fae75
// 004facd9  d9ee                 fldz 
// 004facdb  d94510               fld dword ptr [ebp + 0x10]
// 004facde  33c9                 xor ecx, ecx
// 004face0  d954241c             fst dword ptr [esp + 0x1c]
// 004face4  33ff                 xor edi, edi
// 004face6  663bc8               cmp cx, ax
// 004face9  d94524               fld dword ptr [ebp + 0x24]
// 004facec  d9542420             fst dword ptr [esp + 0x20]
// 004facf0  0f8f51010000         jg 0x4fae47
// 004facf6  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 004facf9  03c9                 add ecx, ecx
// 004facfb  03c9                 add ecx, ecx
// 004facfd  8d442438             lea eax, [esp + 0x38]
// 004fad01  2bc1                 sub eax, ecx
// 004fad03  8d540c34             lea edx, [esp + ecx + 0x34]
// 004fad07  89442428             mov dword ptr [esp + 0x28], eax
// 004fad0b  8954242c             mov dword ptr [esp + 0x2c], edx
// 004fad0f  eb0a                 jmp 0x4fad1b
// 004fad11  d9ee                 fldz 
// 004fad13  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fad17  d9ca                 fxch st(2)
// 004fad19  d9c9                 fxch st(1)
// 004fad1b  d9442410             fld dword ptr [esp + 0x10]
// 004fad1f  8d4c2418             lea ecx, [esp + 0x18]
// 004fad23  d95c2460             fstp dword ptr [esp + 0x60]
// 004fad27  51                   push ecx
// 004fad28  d9c9                 fxch st(1)
// 004fad2a  8d542470             lea edx, [esp + 0x70]
// 004fad2e  d95c2468             fstp dword ptr [esp + 0x68]
// 004fad32  52                   push edx
// 004fad33  d9451c               fld dword ptr [ebp + 0x1c]
// 004fad36  8d4c245c             lea ecx, [esp + 0x5c]
// 004fad3a  d95c2470             fstp dword ptr [esp + 0x70]
// 004fad3e  8d542468             lea edx, [esp + 0x68]
// 004fad42  d9c9                 fxch st(1)
// 004fad44  66895c2420           mov word ptr [esp + 0x20], bx
// 004fad49  d954243c             fst dword ptr [esp + 0x3c]
// 004fad4d  66897c2422           mov word ptr [esp + 0x22], di
// 004fad52  d9542440             fst dword ptr [esp + 0x40]
// 004fad56  d944241c             fld dword ptr [esp + 0x1c]
// 004fad5a  d918                 fstp dword ptr [eax]
// 004fad5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 004fad60  d9c9                 fxch st(1)
// 004fad62  d918                 fstp dword ptr [eax]
// 004fad64  8d44243c             lea eax, [esp + 0x3c]
// 004fad68  50                   push eax
// 004fad69  d9542460             fst dword ptr [esp + 0x60]
// 004fad6d  51                   push ecx
// 004fad6e  d95c2468             fstp dword ptr [esp + 0x68]
// 004fad72  52                   push edx
// 004fad73  d9e8                 fld1 
// 004fad75  d95c2470             fstp dword ptr [esp + 0x70]
// 004fad79  ff5508               call dword ptr [ebp + 8]
// 004fad7c  83c414               add esp, 0x14
// 004fad7f  e81cee0000           call 0x509ba0
// 004fad84  8bc8                 mov ecx, eax
// 004fad86  d901                 fld dword ptr [ecx]
// 004fad88  d85d28               fcomp dword ptr [ebp + 0x28]
// 004fad8b  dfe0                 fnstsw ax
// 004fad8d  f6c444               test ah, 0x44
// 004fad90  7a1b                 jp 0x4fadad
// 004fad92  d94104               fld dword ptr [ecx + 4]
// 004fad95  d85d2c               fcomp dword ptr [ebp + 0x2c]
// 004fad98  dfe0                 fnstsw ax
// 004fad9a  f6c444               test ah, 0x44
// 004fad9d  7a0e                 jp 0x4fadad
// 004fad9f  d94520               fld dword ptr [ebp + 0x20]
// 004fada2  d95c2434             fstp dword ptr [esp + 0x34]
// 004fada6  d94524               fld dword ptr [ebp + 0x24]
// 004fada9  d95c2438             fstp dword ptr [esp + 0x38]
// 004fadad  d9442434             fld dword ptr [esp + 0x34]
// 004fadb1  8d442454             lea eax, [esp + 0x54]
// 004fadb5  d905ac9b8100         fld dword ptr [0x819bac]
// 004fadbb  50                   push eax
// 004fadbc  dcc9                 fmul st(1), st(0)
// 004fadbe  8d4c247c             lea ecx, [esp + 0x7c]
// 004fadc2  d9c9                 fxch st(1)
// 004fadc4  51                   push ecx
// 004fadc5  d95c2454             fstp dword ptr [esp + 0x54]
// 004fadc9  d84c2440             fmul dword ptr [esp + 0x40]
// 004fadcd  d95c2458             fstp dword ptr [esp + 0x58]
// 004fadd1  e8ca130f00           call 0x5ec1a0
// 004fadd6  8d542468             lea edx, [esp + 0x68]
// 004fadda  52                   push edx
// 004faddb  8d842490000000       lea eax, [esp + 0x90]
// 004fade2  50                   push eax
// 004fade3  e8b8130f00           call 0x5ec1a0
// 004fade8  6a01                 push 1
// 004fadea  8d4c2460             lea ecx, [esp + 0x60]
// 004fadee  51                   push ecx
// 004fadef  8d942490000000       lea edx, [esp + 0x90]
// 004fadf6  52                   push edx
// 004fadf7  8d8424a0000000       lea eax, [esp + 0xa0]
// 004fadfe  50                   push eax
// 004fadff  e8fcd10400           call 0x548000
// 004fae04  d9442460             fld dword ptr [esp + 0x60]
// 004fae08  0fbf4d36             movsx ecx, word ptr [ebp + 0x36]
// 004fae0c  d844243c             fadd dword ptr [esp + 0x3c]
// 004fae10  41                   inc ecx
// 004fae11  0fafcb               imul ecx, ebx
// 004fae14  d954243c             fst dword ptr [esp + 0x3c]
// 004fae18  d9442468             fld dword ptr [esp + 0x68]
// 004fae1c  d8442440             fadd dword ptr [esp + 0x40]
// 004fae20  d9542440             fst dword ptr [esp + 0x40]
// 004fae24  03cf                 add ecx, edi
// 004fae26  89048e               mov dword ptr [esi + ecx*4], eax
// 004fae29  668b4536             mov ax, word ptr [ebp + 0x36]
// 004fae2d  0fbfd0               movsx edx, ax
// 004fae30  47                   inc edi
// 004fae31  83c420               add esp, 0x20
// 004fae34  3bfa                 cmp edi, edx
// 004fae36  0f8ed5feffff         jle 0x4fad11
// 004fae3c  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004fae3f  ddd9                 fstp st(1)
// 004fae41  ddd8                 fstp st(0)
// 004fae43  d9ee                 fldz 
// 004fae45  eb04                 jmp 0x4fae4b
// 004fae47  ddd9                 fstp st(1)
// 004fae49  ddd8                 fstp st(0)
// 004fae4b  d944243c             fld dword ptr [esp + 0x3c]
// 004fae4f  0fbfca               movsx ecx, dx
// 004fae52  d8442410             fadd dword ptr [esp + 0x10]
// 004fae56  43                   inc ebx
// 004fae57  3bd9                 cmp ebx, ecx
// 004fae59  d95c2410             fstp dword ptr [esp + 0x10]
// 004fae5d  d9442444             fld dword ptr [esp + 0x44]
// 004fae61  d8442414             fadd dword ptr [esp + 0x14]
// 004fae65  d95c2414             fstp dword ptr [esp + 0x14]
// 004fae69  0f8e6cfeffff         jle 0x4facdb
// 004fae6f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004fae73  ddd8                 fstp st(0)
// 004fae75  33c9                 xor ecx, ecx
// 004fae77  33db                 xor ebx, ebx
// 004fae79  663bca               cmp cx, dx
// 004fae7c  7d47                 jge 0x4faec5
// 004fae7e  0fbfc8               movsx ecx, ax
// 004fae81  33ff                 xor edi, edi
// 004fae83  85c9                 test ecx, ecx
// 004fae85  7e32                 jle 0x4faeb9
// 004fae87  8d4101               lea eax, [ecx + 1]
// 004fae8a  0fafc3               imul eax, ebx
// 004fae8d  03c7                 add eax, edi
// 004fae8f  03c8                 add ecx, eax
// 004fae91  8b548e08             mov edx, dword ptr [esi + ecx*4 + 8]
// 004fae95  8b4c8e04             mov ecx, dword ptr [esi + ecx*4 + 4]
// 004fae99  52                   push edx
// 004fae9a  8b1486               mov edx, dword ptr [esi + eax*4]
// 004fae9d  8b448604             mov eax, dword ptr [esi + eax*4 + 4]
// 004faea1  51                   push ecx
// 004faea2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004faea6  52                   push edx
// 004faea7  50                   push eax
// 004faea8  e803600000           call 0x500eb0
// 004faead  0fbf4d36             movsx ecx, word ptr [ebp + 0x36]
// 004faeb1  47                   inc edi
// 004faeb2  3bf9                 cmp edi, ecx
// 004faeb4  7cd1                 jl 0x4fae87
// 004faeb6  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004faeb9  0fbfc2               movsx eax, dx
// 004faebc  43                   inc ebx
// 004faebd  3bd8                 cmp ebx, eax
// 004faebf  7cc0                 jl 0x4fae81
// 004faec1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004faec5  33db                 xor ebx, ebx
// 004faec7  85ff                 test edi, edi
// 004faec9  7616                 jbe 0x4faee1
// 004faecb  eb03                 jmp 0x4faed0
// 004faecd  8d4900               lea ecx, [ecx]
// 004faed0  8b0c9e               mov ecx, dword ptr [esi + ebx*4]
// 004faed3  51                   push ecx
// 004faed4  e867d70400           call 0x548640
// 004faed9  43                   inc ebx
// 004faeda  83c404               add esp, 4
// 004faedd  3bdf                 cmp ebx, edi
// 004faedf  72ef                 jb 0x4faed0
// 004faee1  56                   push esi
// 004faee2  e8635a1a00           call 0x6a094a
// 004faee7  83c404               add esp, 4
// 004faeea  5f                   pop edi
// 004faeeb  5e                   pop esi
// 004faeec  5b                   pop ebx
// 004faeed  8be5                 mov esp, ebp
// 004faeef  5d                   pop ebp
// 004faef0  c23000               ret 0x30

extern "C" double __cdecl fabs(double);

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
};

struct GridSize {
    short x, y;
};

extern void __cdecl copyVector(Vec3*, const Vec3*);
extern const Vec2& __cdecl currentTextureSize();
extern int __cdecl allocateVertex(const Vec3*, const Vec3*, const Vec2*, int);
extern void __cdecl releaseVertex(int);
extern const float textureScale;

struct VertexCallback {
    float inset;
    float bevel;
    void operator()(Vec3* p, Vec3* n, Vec2* t, const Vec3* dims, const GridSize* idx)
    {
        if (p->x > 0)
            p->x -= inset;
        else
            p->x += inset;
        if (p->y > 0) {
            p->y -= inset;
            if (p->x > 0) {
                p->x -= bevel;
                t->x -= bevel;
            } else {
                p->x += bevel;
                t->x += bevel;
            }
        } else {
            p->y += inset;
        }
    }
};

struct TorsoBuilder {
    char prefix[4];
    Vec3 dimensions;

    void build(VertexCallback, Vec2, Vec2, float, Vec2, Vec2, int, GridSize);
    void quad(int, int, int, int);
};

//#pragma float_control(precise, off, push)

void TorsoBuilder::build(
    VertexCallback callback,
    Vec2 minimum,
    Vec2 maximum,
    float depth,
    Vec2 textureOrigin,
    Vec2 textureExtent,
    int axis,
    GridSize divisions)
{
    Vec3 absoluteDimensions;
    {
        Vec3 copiedDimensions;
        copyVector(&copiedDimensions, &dimensions);
        absoluteDimensions.x = (float)fabs(copiedDimensions.x);
        absoluteDimensions.y = (float)fabs(copiedDimensions.y);
        absoluteDimensions.z = (float)fabs(copiedDimensions.z);
    }

    float x = 0, u = 0, y = 0, v = 0;

    Vec2 positionStep;
    positionStep.x = (maximum.x - minimum.x) / divisions.x;
    positionStep.y = (maximum.y - minimum.y) / divisions.y;

    Vec2 textureStep;
    textureStep.x = textureExtent.x / divisions.x;
    textureStep.y = textureExtent.y / divisions.y;

    unsigned count = (divisions.x + 1) * (divisions.y + 1);
    int* vertices = new int[count];

    x = minimum.x;
    u = textureOrigin.x;

    for (int i = 0; i <= divisions.x; ++i) {
        y = minimum.y;
        v = textureOrigin.y;
        GridSize index;
        index.x = (short)i;

        for (int j = 0; j <= divisions.y; ++j) {
            Vec3 position;
            position.x = x;
            position.y = y;
            position.z = depth;

            Vec2 texture;
            texture.x = 0.0f;
            texture.y = 0.0f;
            (&texture.y)[-axis] = u;
            (&texture.x)[axis] = v;

            Vec3 normal;
            normal.x = 0.0f;
            normal.y = 0.0f;
            normal.z = 1.0f;

            index.y = (short)j;

            callback(&position, &normal, &texture, &absoluteDimensions, &index);

            const Vec2& size = currentTextureSize();
            float tx, ty;
            if (textureExtent.x == size.x && textureExtent.y == size.y) {
                tx = textureOrigin.x;
                ty = textureOrigin.y;
            } else {
                tx = texture.x;
                ty = texture.y;
            }

            Vec2 scaledTexture;
            scaledTexture.x = tx * textureScale;
            scaledTexture.y = ty * textureScale;

            Vec3 copiedNormal;
            Vec3 copiedPosition;
            copyVector(&copiedNormal, &normal);
            copyVector(&copiedPosition, &position);

            vertices[i * (divisions.y + 1) + j] =
                allocateVertex(&copiedPosition, &copiedNormal, &scaledTexture, 1);

            y += positionStep.y;
            v += textureStep.y;
        }

        x += positionStep.x;
        u += textureStep.x;
    }

    for (int i = 0; i < divisions.x; ++i) {
        for (int j = 0; j < divisions.y; ++j) {
            int index = (divisions.y + 1) * i + j;
            int next = index + divisions.y;
            quad(vertices[index + 1], vertices[index],
                 vertices[next + 1], vertices[next + 2]);
        }
    }

    for (unsigned i = 0; i < count; ++i)
        releaseVertex(vertices[i]);

    delete[] vertices;
}

//#pragma float_control(pop)
