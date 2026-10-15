// roc 2008-06 004f7390  unit: RBX::ViewNew::WedgeBuilder  size: 995 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7390
//
// 004f7390  6aff                 push -1
// 004f7392  68e8af7c00           push 0x7cafe8
// 004f7397  64a100000000         mov eax, dword ptr fs:[0]
// 004f739d  50                   push eax
// 004f739e  64892500000000       mov dword ptr fs:[0], esp
// 004f73a5  83ec4c               sub esp, 0x4c
// 004f73a8  53                   push ebx
// 004f73a9  55                   push ebp
// 004f73aa  56                   push esi
// 004f73ab  57                   push edi
// 004f73ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 004f73b0  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 004f73b3  83c104               add ecx, 4
// 004f73b6  c1ed0c               shr ebp, 0xc
// 004f73b9  51                   push ecx
// 004f73ba  8d442448             lea eax, [esp + 0x48]
// 004f73be  83e507               and ebp, 7
// 004f73c1  50                   push eax
// 004f73c2  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 004f73ca  896c2428             mov dword ptr [esp + 0x28], ebp
// 004f73ce  e82d4e0f00           call 0x5ec200
// 004f73d3  d9442454             fld dword ptr [esp + 0x54]
// 004f73d7  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 004f73de  d9e1                 fabs 
// 004f73e0  d9442450             fld dword ptr [esp + 0x50]
// 004f73e4  83c408               add esp, 8
// 004f73e7  d9e1                 fabs 
// 004f73e9  d9442444             fld dword ptr [esp + 0x44]
// 004f73ed  d9e1                 fabs 
// 004f73ef  d9542450             fst dword ptr [esp + 0x50]
// 004f73f3  d9c9                 fxch st(1)
// 004f73f5  d9542454             fst dword ptr [esp + 0x54]
// 004f73f9  d9ca                 fxch st(2)
// 004f73fb  d95c2458             fstp dword ptr [esp + 0x58]
// 004f73ff  85c9                 test ecx, ecx
// 004f7401  750d                 jne 0x4f7410
// 004f7403  ded9                 fcompp 
// 004f7405  dfe0                 fnstsw ax
// 004f7407  f6c405               test ah, 5
// 004f740a  7a08                 jp 0x4f7414
// 004f740c  b001                 mov al, 1
// 004f740e  eb06                 jmp 0x4f7416
// 004f7410  ddd8                 fstp st(0)
// 004f7412  ddd8                 fstp st(0)
// 004f7414  32c0                 xor al, al
// 004f7416  33d2                 xor edx, edx
// 004f7418  84c0                 test al, al
// 004f741a  0f94c2               sete dl
// 004f741d  8bfa                 mov edi, edx
// 004f741f  85c9                 test ecx, ecx
// 004f7421  752f                 jne 0x4f7452
// 004f7423  85ed                 test ebp, ebp
// 004f7425  742b                 je 0x4f7452
// 004f7427  d944bc50             fld dword ptr [esp + edi*4 + 0x50]
// 004f742b  83ec08               sub esp, 8
// 004f742e  d80dac9b8100         fmul dword ptr [0x819bac]
// 004f7434  dd1c24               fstp qword ptr [esp]
// 004f7437  ff15ec278000         call dword ptr [0x8027ec]
// 004f743d  d95c2420             fstp dword ptr [esp + 0x20]
// 004f7441  83c408               add esp, 8
// 004f7444  d9442418             fld dword ptr [esp + 0x18]
// 004f7448  db5c2410             fistp dword ptr [esp + 0x10]
// 004f744c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f7450  eb05                 jmp 0x4f7457
// 004f7452  bb01000000           mov ebx, 1
// 004f7457  33c9                 xor ecx, ecx
// 004f7459  33c0                 xor eax, eax
// 004f745b  66894c2412           mov word ptr [esp + 0x12], cx
// 004f7460  8d0c3f               lea ecx, [edi + edi]
// 004f7463  8d942492000000       lea edx, [esp + 0x92]
// 004f746a  2bd1                 sub edx, ecx
// 004f746c  0fb732               movzx esi, word ptr [edx]
// 004f746f  6689442410           mov word ptr [esp + 0x10], ax
// 004f7474  0fbfc6               movsx eax, si
// 004f7477  99                   cdq 
// 004f7478  f7fb                 idiv ebx
// 004f747a  ba01000000           mov edx, 1
// 004f747f  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004f7487  0fb7c0               movzx eax, ax
// 004f748a  89442418             mov dword ptr [esp + 0x18], eax
// 004f748e  663bd0               cmp dx, ax
// 004f7491  8d442418             lea eax, [esp + 0x18]
// 004f7495  7c04                 jl 0x4f749b
// 004f7497  8d44241c             lea eax, [esp + 0x1c]
// 004f749b  668b00               mov ax, word ptr [eax]
// 004f749e  d9442458             fld dword ptr [esp + 0x58]
// 004f74a2  6689440c10           mov word ptr [esp + ecx + 0x10], ax
// 004f74a7  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f74ab  8d542412             lea edx, [esp + 0x12]
// 004f74af  2bd1                 sub edx, ecx
// 004f74b1  8d442444             lea eax, [esp + 0x44]
// 004f74b5  50                   push eax
// 004f74b6  8d4c2454             lea ecx, [esp + 0x54]
// 004f74ba  668932               mov word ptr [edx], si
// 004f74bd  e80e110200           call 0x5185d0
// 004f74c2  d900                 fld dword ptr [eax]
// 004f74c4  d9e0                 fchs 
// 004f74c6  8d4c2434             lea ecx, [esp + 0x34]
// 004f74ca  d94004               fld dword ptr [eax + 4]
// 004f74cd  51                   push ecx
// 004f74ce  d9e0                 fchs 
// 004f74d0  8d4c2454             lea ecx, [esp + 0x54]
// 004f74d4  d9c9                 fxch st(1)
// 004f74d6  d95c2440             fstp dword ptr [esp + 0x40]
// 004f74da  d95c2444             fstp dword ptr [esp + 0x44]
// 004f74de  e8ed100200           call 0x5185d0
// 004f74e3  d9ee                 fldz 
// 004f74e5  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004f74ec  83e800               sub eax, 0
// 004f74ef  d954242c             fst dword ptr [esp + 0x2c]
// 004f74f3  d9542430             fst dword ptr [esp + 0x30]
// 004f74f7  d9542424             fst dword ptr [esp + 0x24]
// 004f74fb  d9542428             fst dword ptr [esp + 0x28]
// 004f74ff  7444                 je 0x4f7545
// 004f7501  83e801               sub eax, 1
// 004f7504  741e                 je 0x4f7524
// 004f7506  83e801               sub eax, 1
// 004f7509  0f85ac000000         jne 0x4f75bb
// 004f750f  d954242c             fst dword ptr [esp + 0x2c]
// 004f7513  d9542430             fst dword ptr [esp + 0x30]
// 004f7517  d9542424             fst dword ptr [esp + 0x24]
// 004f751b  d95c2428             fstp dword ptr [esp + 0x28]
// 004f751f  e999000000           jmp 0x4f75bd
// 004f7524  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f7528  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f752c  d9401c               fld dword ptr [eax + 0x1c]
// 004f752f  d95c2430             fstp dword ptr [esp + 0x30]
// 004f7533  d94018               fld dword ptr [eax + 0x18]
// 004f7536  d95c2424             fstp dword ptr [esp + 0x24]
// 004f753a  d9401c               fld dword ptr [eax + 0x1c]
// 004f753d  d9e0                 fchs 
// 004f753f  d95c2428             fstp dword ptr [esp + 0x28]
// 004f7543  eb78                 jmp 0x4f75bd
// 004f7545  85ed                 test ebp, ebp
// 004f7547  7529                 jne 0x4f7572
// 004f7549  d905e4a38300         fld dword ptr [0x83a3e4]
// 004f754f  8d04bd00000000       lea eax, [edi*4]
// 004f7556  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f755a  8d542428             lea edx, [esp + 0x28]
// 004f755e  d905ac9b8100         fld dword ptr [0x819bac]
// 004f7564  2bd0                 sub edx, eax
// 004f7566  d95c2430             fstp dword ptr [esp + 0x30]
// 004f756a  d912                 fst dword ptr [edx]
// 004f756c  d95c0424             fstp dword ptr [esp + eax + 0x24]
// 004f7570  eb4b                 jmp 0x4f75bd
// 004f7572  8d34bd00000000       lea esi, [edi*4]
// 004f7579  8d442430             lea eax, [esp + 0x30]
// 004f757d  2bc6                 sub eax, esi
// 004f757f  55                   push ebp
// 004f7580  d918                 fstp dword ptr [eax]
// 004f7582  e869aaffff           call 0x4f1ff0
// 004f7587  d95c3430             fstp dword ptr [esp + esi + 0x30]
// 004f758b  8d4c2458             lea ecx, [esp + 0x58]
// 004f758f  2bce                 sub ecx, esi
// 004f7591  d901                 fld dword ptr [ecx]
// 004f7593  8d54242c             lea edx, [esp + 0x2c]
// 004f7597  dcc0                 fadd st(0), st(0)
// 004f7599  2bd6                 sub edx, esi
// 004f759b  83c404               add esp, 4
// 004f759e  d91a                 fstp dword ptr [edx]
// 004f75a0  d905ac9b8100         fld dword ptr [0x819bac]
// 004f75a6  d95c3424             fstp dword ptr [esp + esi + 0x24]
// 004f75aa  83ff01               cmp edi, 1
// 004f75ad  750e                 jne 0x4f75bd
// 004f75af  d9442424             fld dword ptr [esp + 0x24]
// 004f75b3  d9e0                 fchs 
// 004f75b5  d95c2424             fstp dword ptr [esp + 0x24]
// 004f75b9  eb02                 jmp 0x4f75bd
// 004f75bb  ddd8                 fstp st(0)
// 004f75bd  33ed                 xor ebp, ebp
// 004f75bf  85db                 test ebx, ebx
// 004f75c1  0f8e3a010000         jle 0x4f7701
// 004f75c7  8d43ff               lea eax, [ebx - 1]
// 004f75ca  3be8                 cmp ebp, eax
// 004f75cc  752d                 jne 0x4f75fb
// 004f75ce  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 004f75d6  d944bc50             fld dword ptr [esp + edi*4 + 0x50]
// 004f75da  d954bc34             fst dword ptr [esp + edi*4 + 0x34]
// 004f75de  752b                 jne 0x4f760b
// 004f75e0  837c242000           cmp dword ptr [esp + 0x20], 0
// 004f75e5  7424                 je 0x4f760b
// 004f75e7  d864bc3c             fsub dword ptr [esp + edi*4 + 0x3c]
// 004f75eb  d84cbc24             fmul dword ptr [esp + edi*4 + 0x24]
// 004f75ef  d80de4a38300         fmul dword ptr [0x83a3e4]
// 004f75f5  d95cbc24             fstp dword ptr [esp + edi*4 + 0x24]
// 004f75f9  eb12                 jmp 0x4f760d
// 004f75fb  d944bc3c             fld dword ptr [esp + edi*4 + 0x3c]
// 004f75ff  d8056c6e8200         fadd dword ptr [0x826e6c]
// 004f7605  d95cbc34             fstp dword ptr [esp + edi*4 + 0x34]
// 004f7609  eb02                 jmp 0x4f760d
// 004f760b  ddd8                 fstp st(0)
// 004f760d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f7611  d9442424             fld dword ptr [esp + 0x24]
// 004f7615  50                   push eax
// 004f7616  57                   push edi
// 004f7617  83ec08               sub esp, 8
// 004f761a  8bc4                 mov eax, esp
// 004f761c  d918                 fstp dword ptr [eax]
// 004f761e  89642428             mov dword ptr [esp + 0x28], esp
// 004f7622  d9442438             fld dword ptr [esp + 0x38]
// 004f7626  83ec08               sub esp, 8
// 004f7629  d95804               fstp dword ptr [eax + 4]
// 004f762c  8bc4                 mov eax, esp
// 004f762e  d9442444             fld dword ptr [esp + 0x44]
// 004f7632  89642430             mov dword ptr [esp + 0x30], esp
// 004f7636  d918                 fstp dword ptr [eax]
// 004f7638  83ec14               sub esp, 0x14
// 004f763b  d944245c             fld dword ptr [esp + 0x5c]
// 004f763f  8bcc                 mov ecx, esp
// 004f7641  d95804               fstp dword ptr [eax + 4]
// 004f7644  89642444             mov dword ptr [esp + 0x44], esp
// 004f7648  d9442448             fld dword ptr [esp + 0x48]
// 004f764c  8d542460             lea edx, [esp + 0x60]
// 004f7650  d95c2410             fstp dword ptr [esp + 0x10]
// 004f7654  52                   push edx
// 004f7655  8d44246c             lea eax, [esp + 0x6c]
// 004f7659  50                   push eax
// 004f765a  51                   push ecx
// 004f765b  e870bfffff           call 0x4f35d0
// 004f7660  83ec18               sub esp, 0x18
// 004f7663  8bf4                 mov esi, esp
// 004f7665  c706c8708200         mov dword ptr [esi], 0x8270c8
// 004f766b  d98424c0000000       fld dword ptr [esp + 0xc0]
// 004f7672  d95e04               fstp dword ptr [esi + 4]
// 004f7675  89642468             mov dword ptr [esp + 0x68], esp
// 004f7679  d98424c4000000       fld dword ptr [esp + 0xc4]
// 004f7680  d95e08               fstp dword ptr [esi + 8]
// 004f7683  d98424c8000000       fld dword ptr [esp + 0xc8]
// 004f768a  d95e0c               fstp dword ptr [esi + 0xc]
// 004f768d  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 004f7694  894e10               mov dword ptr [esi + 0x10], ecx
// 004f7697  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004f769e  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 004f76a5  85c0                 test eax, eax
// 004f76a7  7414                 je 0x4f76bd
// 004f76a9  894614               mov dword ptr [esi + 0x14], eax
// 004f76ac  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 004f76b3  83c004               add eax, 4
// 004f76b6  50                   push eax
// 004f76b7  ff15b0218000         call dword ptr [0x8021b0]
// 004f76bd  d98424d4000000       fld dword ptr [esp + 0xd4]
// 004f76c4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004f76c8  d95e18               fstp dword ptr [esi + 0x18]
// 004f76cb  d98424d8000000       fld dword ptr [esp + 0xd8]
// 004f76d2  d95e1c               fstp dword ptr [esi + 0x1c]
// 004f76d5  c70688708200         mov dword ptr [esi], 0x827088
// 004f76db  d98424dc000000       fld dword ptr [esp + 0xdc]
// 004f76e2  c706a8708200         mov dword ptr [esi], 0x8270a8
// 004f76e8  d95e20               fstp dword ptr [esi + 0x20]
// 004f76eb  e890f3ffff           call 0x4f6a80
// 004f76f0  d944bc34             fld dword ptr [esp + edi*4 + 0x34]
// 004f76f4  45                   inc ebp
// 004f76f5  3beb                 cmp ebp, ebx
// 004f76f7  d95cbc3c             fstp dword ptr [esp + edi*4 + 0x3c]
// 004f76fb  0f8cc6feffff         jl 0x4f75c7
// 004f7701  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 004f7708  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 004f7710  85c0                 test eax, eax
// 004f7712  744a                 je 0x4f775e
// 004f7714  83c004               add eax, 4
// 004f7717  50                   push eax
// 004f7718  ff15ac218000         call dword ptr [0x8021ac]
// 004f771e  85c0                 test eax, eax
// 004f7720  753c                 jne 0x4f775e
// 004f7722  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004f7729  8b7108               mov esi, dword ptr [ecx + 8]
// 004f772c  85f6                 test esi, esi
// 004f772e  7422                 je 0x4f7752
// 004f7730  8b0e                 mov ecx, dword ptr [esi]
// 004f7732  8b11                 mov edx, dword ptr [ecx]
// 004f7734  8b4204               mov eax, dword ptr [edx + 4]
// 004f7737  ffd0                 call eax
// 004f7739  8bc6                 mov eax, esi
// 004f773b  8b7604               mov esi, dword ptr [esi + 4]
// 004f773e  50                   push eax
// 004f773f  e8368f1a00           call 0x6a067a
// 004f7744  83c404               add esp, 4
// 004f7747  85f6                 test esi, esi
// 004f7749  75e5                 jne 0x4f7730
// 004f774b  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004f7752  85c9                 test ecx, ecx
// 004f7754  7408                 je 0x4f775e
// 004f7756  8b11                 mov edx, dword ptr [ecx]
// 004f7758  8b02                 mov eax, dword ptr [edx]
// 004f775a  6a01                 push 1
// 004f775c  ffd0                 call eax
// 004f775e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004f7762  5f                   pop edi
// 004f7763  5e                   pop esi
// 004f7764  5d                   pop ebp
// 004f7765  64890d00000000       mov dword ptr fs:[0], ecx
// 004f776c  5b                   pop ebx
// 004f776d  83c458               add esp, 0x58
// 004f7770  c22c00               ret 0x2c

void func_004f7390()
{
}
