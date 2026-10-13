// roc 2008-06 006892d0  unit: Ogre::RbxSubEntity  size: 3423 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006892d0
//
// 006892d0  6aff                 push -1
// 006892d2  64a100000000         mov eax, dword ptr fs:[0]
// 006892d8  6884e07d00           push 0x7de084
// 006892dd  50                   push eax
// 006892de  b8c02e0000           mov eax, 0x2ec0
// 006892e3  64892500000000       mov dword ptr fs:[0], esp
// 006892ea  e831820100           call 0x6a1520
// 006892ef  55                   push ebp
// 006892f0  56                   push esi
// 006892f1  8bb424e02e0000       mov esi, dword ptr [esp + 0x2ee0]
// 006892f8  57                   push edi
// 006892f9  8bf9                 mov edi, ecx
// 006892fb  85f6                 test esi, esi
// 006892fd  751b                 jne 0x68931a
// 006892ff  8b8c24dc2e0000       mov ecx, dword ptr [esp + 0x2edc]
// 00689306  8b01                 mov eax, dword ptr [ecx]
// 00689308  8b9424e02e0000       mov edx, dword ptr [esp + 0x2ee0]
// 0068930f  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 00689315  52                   push edx
// 00689316  ffd0                 call eax
// 00689318  8bf0                 mov esi, eax
// 0068931a  d9ee                 fldz 
// 0068931c  8b8c24ec2e0000       mov ecx, dword ptr [esp + 0x2eec]
// 00689323  d9542430             fst dword ptr [esp + 0x30]
// 00689327  33ed                 xor ebp, ebp
// 00689329  81f9f0000000         cmp ecx, 0xf0
// 0068932f  d9942488000000       fst dword ptr [esp + 0x88]
// 00689336  d9542420             fst dword ptr [esp + 0x20]
// 0068933a  d9542428             fst dword ptr [esp + 0x28]
// 0068933e  d9542444             fst dword ptr [esp + 0x44]
// 00689342  7c0c                 jl 0x689350
// 00689344  b9ef000000           mov ecx, 0xef
// 00689349  898c24ec2e0000       mov dword ptr [esp + 0x2eec], ecx
// 00689350  8b9424f02e0000       mov edx, dword ptr [esp + 0x2ef0]
// 00689357  81faf0000000         cmp edx, 0xf0
// 0068935d  7c0c                 jl 0x68936b
// 0068935f  baef000000           mov edx, 0xef
// 00689364  899424f02e0000       mov dword ptr [esp + 0x2ef0], edx
// 0068936b  83f902               cmp ecx, 2
// 0068936e  0f8c1a220000         jl 0x68b58e
// 00689374  83fa01               cmp edx, 1
// 00689377  0f8c11220000         jl 0x68b58e
// 0068937d  d98424e82e0000       fld dword ptr [esp + 0x2ee8]
// 00689384  d8d1                 fcom st(1)
// 00689386  dfe0                 fnstsw ax
// 00689388  f6c405               test ah, 5
// 0068938b  0f8bfb210000         jnp 0x68b58c
// 00689391  8b07                 mov eax, dword ptr [edi]
// 00689393  c644242f00           mov byte ptr [esp + 0x2f], 0
// 00689398  c644241b00           mov byte ptr [esp + 0x1b], 0
// 0068939d  85c0                 test eax, eax
// 0068939f  7505                 jne 0x6893a6
// 006893a1  c644241b01           mov byte ptr [esp + 0x1b], 1
// 006893a6  83f801               cmp eax, 1
// 006893a9  7515                 jne 0x6893c0
// 006893ab  8b470c               mov eax, dword ptr [edi + 0xc]
// 006893ae  85c0                 test eax, eax
// 006893b0  7405                 je 0x6893b7
// 006893b2  c644242f01           mov byte ptr [esp + 0x2f], 1
// 006893b7  83f801               cmp eax, 1
// 006893ba  7504                 jne 0x6893c0
// 006893bc  8844241b             mov byte ptr [esp + 0x1b], al
// 006893c0  d90534c48100         fld dword ptr [0x81c434]
// 006893c6  33c0                 xor eax, eax
// 006893c8  53                   push ebx
// 006893c9  89442414             mov dword ptr [esp + 0x14], eax
// 006893cd  85c9                 test ecx, ecx
// 006893cf  7e55                 jle 0x689426
// 006893d1  db8424f02e0000       fild dword ptr [esp + 0x2ef0]
// 006893d8  807c241f00           cmp byte ptr [esp + 0x1f], 0
// 006893dd  db442414             fild dword ptr [esp + 0x14]
// 006893e1  8b1de8468000         mov ebx, dword ptr [0x8046e8]
// 006893e7  d80b                 fmul dword ptr [ebx]
// 006893e9  d8ca                 fmul st(2)
// 006893eb  d8f1                 fdiv st(1)
// 006893ed  d9c0                 fld st(0)
// 006893ef  d9fe                 fsin 
// 006893f1  d99484d0010000       fst dword ptr [esp + eax*4 + 0x1d0]
// 006893f8  d9c9                 fxch st(1)
// 006893fa  d9ff                 fcos 
// 006893fc  d9948490050000       fst dword ptr [esp + eax*4 + 0x590]
// 00689403  7412                 je 0x689417
// 00689405  d9c9                 fxch st(1)
// 00689407  d99c84100d0000       fstp dword ptr [esp + eax*4 + 0xd10]
// 0068940e  d99c8450090000       fstp dword ptr [esp + eax*4 + 0x950]
// 00689415  eb04                 jmp 0x68941b
// 00689417  ddd8                 fstp st(0)
// 00689419  ddd8                 fstp st(0)
// 0068941b  40                   inc eax
// 0068941c  3bc1                 cmp eax, ecx
// 0068941e  89442414             mov dword ptr [esp + 0x14], eax
// 00689422  7cb4                 jl 0x6893d8
// 00689424  ddd8                 fstp st(0)
// 00689426  33c0                 xor eax, eax
// 00689428  89442410             mov dword ptr [esp + 0x10], eax
// 0068942c  85d2                 test edx, edx
// 0068942e  7c6b                 jl 0x68949b
// 00689430  db8424f42e0000       fild dword ptr [esp + 0x2ef4]
// 00689437  807c241f00           cmp byte ptr [esp + 0x1f], 0
// 0068943c  db442410             fild dword ptr [esp + 0x10]
// 00689440  8b1de8468000         mov ebx, dword ptr [0x8046e8]
// 00689446  d80b                 fmul dword ptr [ebx]
// 00689448  d8f1                 fdiv st(1)
// 0068944a  742c                 je 0x689478
// 0068944c  d9c0                 fld st(0)
// 0068944e  d9fe                 fsin 
// 00689450  396f08               cmp dword ptr [edi + 8], ebp
// 00689453  750d                 jne 0x689462
// 00689455  d99c8450180000       fstp dword ptr [esp + eax*4 + 0x1850]
// 0068945c  d9c0                 fld st(0)
// 0068945e  d9ff                 fcos 
// 00689460  eb0f                 jmp 0x689471
// 00689462  d9e0                 fchs 
// 00689464  d99c8450180000       fstp dword ptr [esp + eax*4 + 0x1850]
// 0068946b  d9c0                 fld st(0)
// 0068946d  d9ff                 fcos 
// 0068946f  d9e0                 fchs 
// 00689471  d99c8490140000       fstp dword ptr [esp + eax*4 + 0x1490]
// 00689478  d9c0                 fld st(0)
// 0068947a  40                   inc eax
// 0068947b  3bc2                 cmp eax, edx
// 0068947d  d9fe                 fsin 
// 0068947f  89442410             mov dword ptr [esp + 0x10], eax
// 00689483  d8cc                 fmul st(4)
// 00689485  d99c84cc100000       fstp dword ptr [esp + eax*4 + 0x10cc]
// 0068948c  d9ff                 fcos 
// 0068948e  d8cb                 fmul st(3)
// 00689490  d99c840c1c0000       fstp dword ptr [esp + eax*4 + 0x1c0c]
// 00689497  7e9e                 jle 0x689437
// 00689499  ddd8                 fstp st(0)
// 0068949b  807c243300           cmp byte ptr [esp + 0x33], 0
// 006894a0  ddd9                 fstp st(1)
// 006894a2  d9c9                 fxch st(1)
// 006894a4  8d8494d0100000       lea eax, [esp + edx*4 + 0x10d0]
// 006894ab  d99424d0100000       fst dword ptr [esp + 0x10d0]
// 006894b2  89442420             mov dword ptr [esp + 0x20], eax
// 006894b6  d918                 fstp dword ptr [eax]
// 006894b8  0f84a3000000         je 0x689561
// 006894be  dd0538e78100         fld qword ptr [0x81e738]
// 006894c4  8b1de8468000         mov ebx, dword ptr [0x8046e8]
// 006894ca  33c0                 xor eax, eax
// 006894cc  89442414             mov dword ptr [esp + 0x14], eax
// 006894d0  85c9                 test ecx, ecx
// 006894d2  7e34                 jle 0x689508
// 006894d4  d903                 fld dword ptr [ebx]
// 006894d6  deca                 fmulp st(2)
// 006894d8  db8424f02e0000       fild dword ptr [esp + 0x2ef0]
// 006894df  db442414             fild dword ptr [esp + 0x14]
// 006894e3  40                   inc eax
// 006894e4  3bc1                 cmp eax, ecx
// 006894e6  89442414             mov dword ptr [esp + 0x14], eax
// 006894ea  d8e2                 fsub st(2)
// 006894ec  d8cb                 fmul st(3)
// 006894ee  d8f1                 fdiv st(1)
// 006894f0  d9c0                 fld st(0)
// 006894f2  d9fe                 fsin 
// 006894f4  d99c84cc1f0000       fstp dword ptr [esp + eax*4 + 0x1fcc]
// 006894fb  d9ff                 fcos 
// 006894fd  d99c848c230000       fstp dword ptr [esp + eax*4 + 0x238c]
// 00689504  7cd9                 jl 0x6894df
// 00689506  ddda                 fstp st(2)
// 00689508  33c0                 xor eax, eax
// 0068950a  ddd9                 fstp st(1)
// 0068950c  89442410             mov dword ptr [esp + 0x10], eax
// 00689510  85d2                 test edx, edx
// 00689512  7c4d                 jl 0x689561
// 00689514  db8424f42e0000       fild dword ptr [esp + 0x2ef4]
// 0068951b  8b4f08               mov ecx, dword ptr [edi + 8]
// 0068951e  db442410             fild dword ptr [esp + 0x10]
// 00689522  d8e2                 fsub st(2)
// 00689524  d80b                 fmul dword ptr [ebx]
// 00689526  d8f1                 fdiv st(1)
// 00689528  d9c0                 fld st(0)
// 0068952a  d9fe                 fsin 
// 0068952c  85c9                 test ecx, ecx
// 0068952e  750b                 jne 0x68953b
// 00689530  d99c8450270000       fstp dword ptr [esp + eax*4 + 0x2750]
// 00689537  d9ff                 fcos 
// 00689539  eb0d                 jmp 0x689548
// 0068953b  d9e0                 fchs 
// 0068953d  d99c8450270000       fstp dword ptr [esp + eax*4 + 0x2750]
// 00689544  d9ff                 fcos 
// 00689546  d9e0                 fchs 
// 00689548  d99c84102b0000       fstp dword ptr [esp + eax*4 + 0x2b10]
// 0068954f  40                   inc eax
// 00689550  3bc2                 cmp eax, edx
// 00689552  89442410             mov dword ptr [esp + 0x10], eax
// 00689556  7ec6                 jle 0x68951e
// 00689558  8b8c24f02e0000       mov ecx, dword ptr [esp + 0x2ef0]
// 0068955f  ddd8                 fstp st(0)
// 00689561  807c241f00           cmp byte ptr [esp + 0x1f], 0
// 00689566  ddd8                 fstp st(0)
// 00689568  d98424d0010000       fld dword ptr [esp + 0x1d0]
// 0068956f  d99c8cd0010000       fstp dword ptr [esp + ecx*4 + 0x1d0]
// 00689576  d9842490050000       fld dword ptr [esp + 0x590]
// 0068957d  d99c8c90050000       fstp dword ptr [esp + ecx*4 + 0x590]
// 00689584  741c                 je 0x6895a2
// 00689586  d98424100d0000       fld dword ptr [esp + 0xd10]
// 0068958d  d99c8c100d0000       fstp dword ptr [esp + ecx*4 + 0xd10]
// 00689594  d9842450090000       fld dword ptr [esp + 0x950]
// 0068959b  d99c8c50090000       fstp dword ptr [esp + ecx*4 + 0x950]
// 006895a2  807c243300           cmp byte ptr [esp + 0x33], 0
// 006895a7  741c                 je 0x6895c5
// 006895a9  d98424d01f0000       fld dword ptr [esp + 0x1fd0]
// 006895b0  d99c8cd01f0000       fstp dword ptr [esp + ecx*4 + 0x1fd0]
// 006895b7  d9842490230000       fld dword ptr [esp + 0x2390]
// 006895be  d99c8c90230000       fstp dword ptr [esp + ecx*4 + 0x2390]
// 006895c5  8b470c               mov eax, dword ptr [edi + 0xc]
// 006895c8  83f803               cmp eax, 3
// 006895cb  0f87b61f0000         ja 0x68b587
// 006895d1  ff2485acb56800       jmp dword ptr [eax*4 + 0x68b5ac]
// 006895d8  807f0400             cmp byte ptr [edi + 4], 0
// 006895dc  0f8526060000         jne 0x689c08
// 006895e2  4a                   dec edx
// 006895e3  bb01000000           mov ebx, 1
// 006895e8  6816b78000           push 0x80b716
// 006895ed  8d8c249c010000       lea ecx, [esp + 0x19c]
// 006895f4  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 006895fb  89942494000000       mov dword ptr [esp + 0x94], edx
// 00689602  ff1558248000         call dword ptr [0x802458]
// 00689608  8b16                 mov edx, dword ptr [esi]
// 0068960a  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 00689610  6a06                 push 6
// 00689612  8d84249c010000       lea eax, [esp + 0x19c]
// 00689619  50                   push eax
// 0068961a  8bce                 mov ecx, esi
// 0068961c  c78424e02e000000000000 mov dword ptr [esp + 0x2ee0], 0
// 00689627  ffd2                 call edx
// 00689629  8d8c2498010000       lea ecx, [esp + 0x198]
// 00689630  c78424d82e0000ffffffff mov dword ptr [esp + 0x2ed8], 0xffffffff
// 0068963b  ff1568248000         call dword ptr [0x802468]
// 00689641  d9ee                 fldz 
// 00689643  d85f10               fcomp dword ptr [edi + 0x10]
// 00689646  8d4f10               lea ecx, [edi + 0x10]
// 00689649  dfe0                 fnstsw ax
// 0068964b  f6c441               test ah, 0x41
// 0068964e  7a0d                 jp 0x68965d
// 00689650  8b06                 mov eax, dword ptr [esi]
// 00689652  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00689658  51                   push ecx
// 00689659  8bce                 mov ecx, esi
// 0068965b  ffd2                 call edx
// 0068965d  d94728               fld dword ptr [edi + 0x28]
// 00689660  8b06                 mov eax, dword ptr [esi]
// 00689662  d88424ec2e0000       fadd dword ptr [esp + 0x2eec]
// 00689669  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 0068966f  83ec0c               sub esp, 0xc
// 00689672  8bce                 mov ecx, esi
// 00689674  d95c2408             fstp dword ptr [esp + 8]
// 00689678  d94724               fld dword ptr [edi + 0x24]
// 0068967b  d95c2404             fstp dword ptr [esp + 4]
// 0068967f  d94720               fld dword ptr [edi + 0x20]
// 00689682  d91c24               fstp dword ptr [esp]
// 00689685  ffd2                 call edx
// 00689687  8b06                 mov eax, dword ptr [esi]
// 00689689  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 0068968f  6a00                 push 0
// 00689691  8bce                 mov ecx, esi
// 00689693  ffd2                 call edx
// 00689695  8b07                 mov eax, dword ptr [edi]
// 00689697  83e800               sub eax, 0
// 0068969a  741d                 je 0x6896b9
// 0068969c  83e801               sub eax, 1
// 0068969f  7566                 jne 0x689707
// 006896a1  d9842454270000       fld dword ptr [esp + 0x2754]
// 006896a8  d95c2434             fstp dword ptr [esp + 0x34]
// 006896ac  d98424142b0000       fld dword ptr [esp + 0x2b14]
// 006896b3  d95c242c             fstp dword ptr [esp + 0x2c]
// 006896b7  eb4e                 jmp 0x689707
// 006896b9  d9842454180000       fld dword ptr [esp + 0x1854]
// 006896c0  8b06                 mov eax, dword ptr [esi]
// 006896c2  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 006896c8  d95c2434             fstp dword ptr [esp + 0x34]
// 006896cc  d9842494140000       fld dword ptr [esp + 0x1494]
// 006896d3  83ec0c               sub esp, 0xc
// 006896d6  d95c2438             fstp dword ptr [esp + 0x38]
// 006896da  8bce                 mov ecx, esi
// 006896dc  d984249c140000       fld dword ptr [esp + 0x149c]
// 006896e3  d95c2408             fstp dword ptr [esp + 8]
// 006896e7  d984245c180000       fld dword ptr [esp + 0x185c]
// 006896ee  d984245c090000       fld dword ptr [esp + 0x95c]
// 006896f5  d8c9                 fmul st(1)
// 006896f7  d95c2404             fstp dword ptr [esp + 4]
// 006896fb  d88c241c0d0000       fmul dword ptr [esp + 0xd1c]
// 00689702  d91c24               fstp dword ptr [esp]
// 00689705  ffd2                 call edx
// 00689707  837f0800             cmp dword ptr [edi + 8], 0
// 0068970b  d98424d4100000       fld dword ptr [esp + 0x10d4]
// 00689712  0f85e5010000         jne 0x6898fd
// 00689718  8bac24f02e0000       mov ebp, dword ptr [esp + 0x2ef0]
// 0068971f  85ed                 test ebp, ebp
// 00689721  0f8d10010000         jge 0x689837
// 00689727  ddd8                 fstp st(0)
// 00689729  8b06                 mov eax, dword ptr [esi]
// 0068972b  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 00689731  8bce                 mov ecx, esi
// 00689733  ffd2                 call edx
// 00689735  6816b78000           push 0x80b716
// 0068973a  8d8c2464010000       lea ecx, [esp + 0x164]
// 00689741  ff1558248000         call dword ptr [0x802458]
// 00689747  8b06                 mov eax, dword ptr [esi]
// 00689749  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0068974f  6a06                 push 6
// 00689751  8d8c2464010000       lea ecx, [esp + 0x164]
// 00689758  51                   push ecx
// 00689759  bd01000000           mov ebp, 1
// 0068975e  8bce                 mov ecx, esi
// 00689760  89ac24e02e0000       mov dword ptr [esp + 0x2ee0], ebp
// 00689767  ffd2                 call edx
// 00689769  8d8c2460010000       lea ecx, [esp + 0x160]
// 00689770  c78424d82e0000ffffffff mov dword ptr [esp + 0x2ed8], 0xffffffff
// 0068977b  ff1568248000         call dword ptr [0x802468]
// 00689781  d9ee                 fldz 
// 00689783  d85f10               fcomp dword ptr [edi + 0x10]
// 00689786  8d4f10               lea ecx, [edi + 0x10]
// 00689789  dfe0                 fnstsw ax
// 0068978b  f6c441               test ah, 0x41
// 0068978e  7a0d                 jp 0x68979d
// 00689790  8b06                 mov eax, dword ptr [esi]
// 00689792  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00689798  51                   push ecx
// 00689799  8bce                 mov ecx, esi
// 0068979b  ffd2                 call edx
// 0068979d  d94728               fld dword ptr [edi + 0x28]
// 006897a0  8b06                 mov eax, dword ptr [esi]
// 006897a2  d8a424ec2e0000       fsub dword ptr [esp + 0x2eec]
// 006897a9  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 006897af  83ec0c               sub esp, 0xc
// 006897b2  8bce                 mov ecx, esi
// 006897b4  d95c2408             fstp dword ptr [esp + 8]
// 006897b8  d94724               fld dword ptr [edi + 0x24]
// 006897bb  d95c2404             fstp dword ptr [esp + 4]
// 006897bf  d94720               fld dword ptr [edi + 0x20]
// 006897c2  d91c24               fstp dword ptr [esp]
// 006897c5  ffd2                 call edx
// 006897c7  8b06                 mov eax, dword ptr [esi]
// 006897c9  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 006897cf  6a00                 push 0
// 006897d1  8bce                 mov ecx, esi
// 006897d3  ffd2                 call edx
// 006897d5  837f0800             cmp dword ptr [edi + 8], 0
// 006897d9  0f8540030000         jne 0x689b1f
// 006897df  8b442420             mov eax, dword ptr [esp + 0x20]
// 006897e3  d940fc               fld dword ptr [eax - 4]
// 006897e6  8b8424f42e0000       mov eax, dword ptr [esp + 0x2ef4]
// 006897ed  8b0f                 mov ecx, dword ptr [edi]
// 006897ef  d9542428             fst dword ptr [esp + 0x28]
// 006897f3  83e900               sub ecx, 0
// 006897f6  d984840c1c0000       fld dword ptr [esp + eax*4 + 0x1c0c]
// 006897fd  d95c243c             fstp dword ptr [esp + 0x3c]
// 00689801  0f84d2010000         je 0x6899d9
// 00689807  2bcd                 sub ecx, ebp
// 00689809  0f8520020000         jne 0x689a2f
// 0068980f  d9848450270000       fld dword ptr [esp + eax*4 + 0x2750]
// 00689816  d95c2434             fstp dword ptr [esp + 0x34]
// 0068981a  d98484102b0000       fld dword ptr [esp + eax*4 + 0x2b10]
// 00689821  d95c242c             fstp dword ptr [esp + 0x2c]
// 00689825  e905020000           jmp 0x689a2f
// 0068982a  8d9b00000000         lea ebx, [ebx]
// 00689830  d98424d4100000       fld dword ptr [esp + 0x10d4]
// 00689837  d94728               fld dword ptr [edi + 0x28]
// 0068983a  8b06                 mov eax, dword ptr [esi]
// 0068983c  d88424141c0000       fadd dword ptr [esp + 0x1c14]
// 00689843  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 00689849  83ec0c               sub esp, 0xc
// 0068984c  8bce                 mov ecx, esi
// 0068984e  d95c2408             fstp dword ptr [esp + 8]
// 00689852  d984ac9c050000       fld dword ptr [esp + ebp*4 + 0x59c]
// 00689859  d8c9                 fmul st(1)
// 0068985b  d84724               fadd dword ptr [edi + 0x24]
// 0068985e  d95c2404             fstp dword ptr [esp + 4]
// 00689862  d88cacdc010000       fmul dword ptr [esp + ebp*4 + 0x1dc]
// 00689869  d84720               fadd dword ptr [edi + 0x20]
// 0068986c  d91c24               fstp dword ptr [esp]
// 0068986f  ffd2                 call edx
// 00689871  8b06                 mov eax, dword ptr [esi]
// 00689873  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00689879  53                   push ebx
// 0068987a  8bce                 mov ecx, esi
// 0068987c  ffd2                 call edx
// 0068987e  8b07                 mov eax, dword ptr [edi]
// 00689880  43                   inc ebx
// 00689881  83e800               sub eax, 0
// 00689884  7435                 je 0x6898bb
// 00689886  83e801               sub eax, 1
// 00689889  7564                 jne 0x6898ef
// 0068988b  3bac24f02e0000       cmp ebp, dword ptr [esp + 0x2ef0]
// 00689892  745b                 je 0x6898ef
// 00689894  d944242c             fld dword ptr [esp + 0x2c]
// 00689898  83ec0c               sub esp, 0xc
// 0068989b  d95c2408             fstp dword ptr [esp + 8]
// 0068989f  d984aca0230000       fld dword ptr [esp + ebp*4 + 0x23a0]
// 006898a6  d9442440             fld dword ptr [esp + 0x40]
// 006898aa  dcc9                 fmul st(1), st(0)
// 006898ac  d9c9                 fxch st(1)
// 006898ae  d95c2404             fstp dword ptr [esp + 4]
// 006898b2  d88cace01f0000       fmul dword ptr [esp + ebp*4 + 0x1fe0]
// 006898b9  eb25                 jmp 0x6898e0
// 006898bb  d944242c             fld dword ptr [esp + 0x2c]
// 006898bf  83ec0c               sub esp, 0xc
// 006898c2  d95c2408             fstp dword ptr [esp + 8]
// 006898c6  d984ac5c090000       fld dword ptr [esp + ebp*4 + 0x95c]
// 006898cd  d9442440             fld dword ptr [esp + 0x40]
// 006898d1  dcc9                 fmul st(1), st(0)
// 006898d3  d9c9                 fxch st(1)
// 006898d5  d95c2404             fstp dword ptr [esp + 4]
// 006898d9  d88cac1c0d0000       fmul dword ptr [esp + ebp*4 + 0xd1c]
// 006898e0  8b06                 mov eax, dword ptr [esi]
// 006898e2  d91c24               fstp dword ptr [esp]
// 006898e5  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 006898eb  8bce                 mov ecx, esi
// 006898ed  ffd2                 call edx
// 006898ef  83ed01               sub ebp, 1
// 006898f2  0f8938ffffff         jns 0x689830
// 006898f8  e92cfeffff           jmp 0x689729
// 006898fd  33ed                 xor ebp, ebp
// 006898ff  39ac24f02e0000       cmp dword ptr [esp + 0x2ef0], ebp
// 00689906  0f8c1bfeffff         jl 0x689727
// 0068990c  eb09                 jmp 0x689917
// 0068990e  8bff                 mov edi, edi
// 00689910  d98424d4100000       fld dword ptr [esp + 0x10d4]
// 00689917  d94728               fld dword ptr [edi + 0x28]
// 0068991a  8b06                 mov eax, dword ptr [esi]
// 0068991c  d88424141c0000       fadd dword ptr [esp + 0x1c14]
// 00689923  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 00689929  83ec0c               sub esp, 0xc
// 0068992c  8bce                 mov ecx, esi
// 0068992e  d95c2408             fstp dword ptr [esp + 8]
// 00689932  d984ac9c050000       fld dword ptr [esp + ebp*4 + 0x59c]
// 00689939  d8c9                 fmul st(1)
// 0068993b  d84724               fadd dword ptr [edi + 0x24]
// 0068993e  d95c2404             fstp dword ptr [esp + 4]
// 00689942  d88cacdc010000       fmul dword ptr [esp + ebp*4 + 0x1dc]
// 00689949  d84720               fadd dword ptr [edi + 0x20]
// 0068994c  d91c24               fstp dword ptr [esp]
// 0068994f  ffd2                 call edx
// 00689951  8b06                 mov eax, dword ptr [esi]
// 00689953  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00689959  53                   push ebx
// 0068995a  8bce                 mov ecx, esi
// 0068995c  ffd2                 call edx
// 0068995e  8b07                 mov eax, dword ptr [edi]
// 00689960  43                   inc ebx
// 00689961  83e800               sub eax, 0
// 00689964  742c                 je 0x689992
// 00689966  83e801               sub eax, 1
// 00689969  755b                 jne 0x6899c6
// 0068996b  d944242c             fld dword ptr [esp + 0x2c]
// 0068996f  83ec0c               sub esp, 0xc
// 00689972  d95c2408             fstp dword ptr [esp + 8]
// 00689976  d984ac9c230000       fld dword ptr [esp + ebp*4 + 0x239c]
// 0068997d  d9442440             fld dword ptr [esp + 0x40]
// 00689981  dcc9                 fmul st(1), st(0)
// 00689983  d9c9                 fxch st(1)
// 00689985  d95c2404             fstp dword ptr [esp + 4]
// 00689989  d88cacdc1f0000       fmul dword ptr [esp + ebp*4 + 0x1fdc]
// 00689990  eb25                 jmp 0x6899b7
// 00689992  d944242c             fld dword ptr [esp + 0x2c]
// 00689996  83ec0c               sub esp, 0xc
// 00689999  d95c2408             fstp dword ptr [esp + 8]
// 0068999d  d984ac5c090000       fld dword ptr [esp + ebp*4 + 0x95c]
// 006899a4  d9442440             fld dword ptr [esp + 0x40]
// 006899a8  dcc9                 fmul st(1), st(0)
// 006899aa  d9c9                 fxch st(1)
// 006899ac  d95c2404             fstp dword ptr [esp + 4]
// 006899b0  d88cac1c0d0000       fmul dword ptr [esp + ebp*4 + 0xd1c]
// 006899b7  8b06                 mov eax, dword ptr [esi]
// 006899b9  d91c24               fstp dword ptr [esp]
// 006899bc  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 006899c2  8bce                 mov ecx, esi
// 006899c4  ffd2                 call edx
// 006899c6  45                   inc ebp
// 006899c7  3bac24f02e0000       cmp ebp, dword ptr [esp + 0x2ef0]
// 006899ce  0f8e3cffffff         jle 0x689910
// 006899d4  e950fdffff           jmp 0x689729
// 006899d9  8b16                 mov edx, dword ptr [esi]
// 006899db  ddd8                 fstp st(0)
// 006899dd  d984844c180000       fld dword ptr [esp + eax*4 + 0x184c]
// 006899e4  8d8c8450180000       lea ecx, [esp + eax*4 + 0x1850]
// 006899eb  d95c2434             fstp dword ptr [esp + 0x34]
// 006899ef  83ec0c               sub esp, 0xc
// 006899f2  d9848498140000       fld dword ptr [esp + eax*4 + 0x1498]
// 006899f9  d95c2438             fstp dword ptr [esp + 0x38]
// 006899fd  d984849c140000       fld dword ptr [esp + eax*4 + 0x149c]
// 00689a04  d95c2408             fstp dword ptr [esp + 8]
// 00689a08  d984845c090000       fld dword ptr [esp + eax*4 + 0x95c]
// 00689a0f  d809                 fmul dword ptr [ecx]
// 00689a11  d95c2404             fstp dword ptr [esp + 4]
// 00689a15  d984841c0d0000       fld dword ptr [esp + eax*4 + 0xd1c]
// 00689a1c  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 00689a22  d809                 fmul dword ptr [ecx]
// 00689a24  8bce                 mov ecx, esi
// 00689a26  d91c24               fstp dword ptr [esp]
// 00689a29  ffd0                 call eax
// 00689a2b  d9442428             fld dword ptr [esp + 0x28]
// 00689a2f  33db                 xor ebx, ebx
// 00689a31  399c24f02e0000       cmp dword ptr [esp + 0x2ef0], ebx
// 00689a38  7d1a                 jge 0x689a54
// 00689a3a  ddd8                 fstp st(0)
// 00689a3c  8b16                 mov edx, dword ptr [esi]
// 00689a3e  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 00689a44  8bce                 mov ecx, esi
// 00689a46  ffd0                 call eax
// 00689a48  e9c9010000           jmp 0x689c16
// 00689a4d  8d4900               lea ecx, [ecx]
// 00689a50  d9442428             fld dword ptr [esp + 0x28]
// 00689a54  d94728               fld dword ptr [edi + 0x28]
// 00689a57  8b16                 mov edx, dword ptr [esi]
// 00689a59  d844243c             fadd dword ptr [esp + 0x3c]
// 00689a5d  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 00689a63  83ec0c               sub esp, 0xc
// 00689a66  8bce                 mov ecx, esi
// 00689a68  d95c2408             fstp dword ptr [esp + 8]
// 00689a6c  d9849c9c050000       fld dword ptr [esp + ebx*4 + 0x59c]
// 00689a73  d8c9                 fmul st(1)
// 00689a75  d84724               fadd dword ptr [edi + 0x24]
// 00689a78  d95c2404             fstp dword ptr [esp + 4]
// 00689a7c  d88c9cdc010000       fmul dword ptr [esp + ebx*4 + 0x1dc]
// 00689a83  d84720               fadd dword ptr [edi + 0x20]
// 00689a86  d91c24               fstp dword ptr [esp]
// 00689a89  ffd0                 call eax
// 00689a8b  8b16                 mov edx, dword ptr [esi]
// 00689a8d  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 00689a93  55                   push ebp
// 00689a94  8bce                 mov ecx, esi
// 00689a96  ffd0                 call eax
// 00689a98  8b07                 mov eax, dword ptr [edi]
// 00689a9a  45                   inc ebp
// 00689a9b  83e800               sub eax, 0
// 00689a9e  742c                 je 0x689acc
// 00689aa0  83e801               sub eax, 1
// 00689aa3  755b                 jne 0x689b00
// 00689aa5  d944242c             fld dword ptr [esp + 0x2c]
// 00689aa9  83ec0c               sub esp, 0xc
// 00689aac  d95c2408             fstp dword ptr [esp + 8]
// 00689ab0  d9849c9c230000       fld dword ptr [esp + ebx*4 + 0x239c]
// 00689ab7  d9442440             fld dword ptr [esp + 0x40]
// 00689abb  dcc9                 fmul st(1), st(0)
// 00689abd  d9c9                 fxch st(1)
// 00689abf  d95c2404             fstp dword ptr [esp + 4]
// 00689ac3  d88c9cdc1f0000       fmul dword ptr [esp + ebx*4 + 0x1fdc]
// 00689aca  eb25                 jmp 0x689af1
// 00689acc  d944242c             fld dword ptr [esp + 0x2c]
// 00689ad0  83ec0c               sub esp, 0xc
// 00689ad3  d95c2408             fstp dword ptr [esp + 8]
// 00689ad7  d9849c5c090000       fld dword ptr [esp + ebx*4 + 0x95c]
// 00689ade  d9442440             fld dword ptr [esp + 0x40]
// 00689ae2  dcc9                 fmul st(1), st(0)
// 00689ae4  d9c9                 fxch st(1)
// 00689ae6  d95c2404             fstp dword ptr [esp + 4]
// 00689aea  d88c9c1c0d0000       fmul dword ptr [esp + ebx*4 + 0xd1c]
// 00689af1  8b16                 mov edx, dword ptr [esi]
// 00689af3  d91c24               fstp dword ptr [esp]
// 00689af6  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 00689afc  8bce                 mov ecx, esi
// 00689afe  ffd0                 call eax
// 00689b00  43                   inc ebx
// 00689b01  3b9c24f02e0000       cmp ebx, dword ptr [esp + 0x2ef0]
// 00689b08  0f8e42ffffff         jle 0x689a50
// 00689b0e  8b16                 mov edx, dword ptr [esi]
// 00689b10  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 00689b16  8bce                 mov ecx, esi
// 00689b18  ffd0                 call eax
// 00689b1a  e9f7000000           jmp 0x689c16
// 00689b1f  8b9c24f02e0000       mov ebx, dword ptr [esp + 0x2ef0]
// 00689b26  85db                 test ebx, ebx
// 00689b28  0f8c0effffff         jl 0x689a3c
// 00689b2e  8bff                 mov edi, edi
// 00689b30  d94728               fld dword ptr [edi + 0x28]
// 00689b33  8b16                 mov edx, dword ptr [esi]
// 00689b35  d88424141c0000       fadd dword ptr [esp + 0x1c14]
// 00689b3c  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 00689b42  83ec0c               sub esp, 0xc
// 00689b45  8bce                 mov ecx, esi
// 00689b47  d95c2408             fstp dword ptr [esp + 8]
// 00689b4b  d9849c9c050000       fld dword ptr [esp + ebx*4 + 0x59c]
// 00689b52  d98424e0100000       fld dword ptr [esp + 0x10e0]
// 00689b59  dcc9                 fmul st(1), st(0)
// 00689b5b  d9c9                 fxch st(1)
// 00689b5d  d84724               fadd dword ptr [edi + 0x24]
// 00689b60  d95c2404             fstp dword ptr [esp + 4]
// 00689b64  d88c9cdc010000       fmul dword ptr [esp + ebx*4 + 0x1dc]
// 00689b6b  d84720               fadd dword ptr [edi + 0x20]
// 00689b6e  d91c24               fstp dword ptr [esp]
// 00689b71  ffd0                 call eax
// 00689b73  8b16                 mov edx, dword ptr [esi]
// 00689b75  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 00689b7b  55                   push ebp
// 00689b7c  8bce                 mov ecx, esi
// 00689b7e  ffd0                 call eax
// 00689b80  8b07                 mov eax, dword ptr [edi]
// 00689b82  45                   inc ebp
// 00689b83  83e800               sub eax, 0
// 00689b86  7435                 je 0x689bbd
// 00689b88  83e801               sub eax, 1
// 00689b8b  7564                 jne 0x689bf1
// 00689b8d  3b9c24f02e0000       cmp ebx, dword ptr [esp + 0x2ef0]
// 00689b94  745b                 je 0x689bf1
// 00689b96  d944242c             fld dword ptr [esp + 0x2c]
// 00689b9a  83ec0c               sub esp, 0xc
// 00689b9d  d95c2408             fstp dword ptr [esp + 8]
// 00689ba1  d9849ca0230000       fld dword ptr [esp + ebx*4 + 0x23a0]
// 00689ba8  d9442440             fld dword ptr [esp + 0x40]
// 00689bac  dcc9                 fmul st(1), st(0)
// 00689bae  d9c9                 fxch st(1)
// 00689bb0  d95c2404             fstp dword ptr [esp + 4]
// 00689bb4  d88c9ce01f0000       fmul dword ptr [esp + ebx*4 + 0x1fe0]
// 00689bbb  eb25                 jmp 0x689be2
// 00689bbd  d944242c             fld dword ptr [esp + 0x2c]
// 00689bc1  83ec0c               sub esp, 0xc
// 00689bc4  d95c2408             fstp dword ptr [esp + 8]
// 00689bc8  d9849c5c090000       fld dword ptr [esp + ebx*4 + 0x95c]
// 00689bcf  d9442440             fld dword ptr [esp + 0x40]
// 00689bd3  dcc9                 fmul st(1), st(0)
// 00689bd5  d9c9                 fxch st(1)
// 00689bd7  d95c2404             fstp dword ptr [esp + 4]
// 00689bdb  d88c9c1c0d0000       fmul dword ptr [esp + ebx*4 + 0xd1c]
// 00689be2  8b16                 mov edx, dword ptr [esi]
// 00689be4  d91c24               fstp dword ptr [esp]
// 00689be7  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 00689bed  8bce                 mov ecx, esi
// 00689bef  ffd0                 call eax
// 00689bf1  83eb01               sub ebx, 1
// 00689bf4  0f8936ffffff         jns 0x689b30
// 00689bfa  8b16                 mov edx, dword ptr [esi]
// 00689bfc  8b8228010000         mov eax, dword ptr [edx + 0x128]
// 00689c02  8bce                 mov ecx, esi
// 00689c04  ffd0                 call eax
// 00689c06  eb0e                 jmp 0x689c16
// 00689c08  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00689c0f  89942490000000       mov dword ptr [esp + 0x90], edx
// 00689c16  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00689c1d  3b9c2490000000       cmp ebx, dword ptr [esp + 0x90]
// 00689c24  895c2410             mov dword ptr [esp + 0x10], ebx
// 00689c28  0f8d59190000         jge 0x68b587
// 00689c2e  8bff                 mov edi, edi
// 00689c30  d9849c101c0000       fld dword ptr [esp + ebx*4 + 0x1c10]
// 00689c37  8b07                 mov eax, dword ptr [edi]
// 00689c39  83e800               sub eax, 0
// 00689c3c  d95c2424             fstp dword ptr [esp + 0x24]
// 00689c40  d9849c141c0000       fld dword ptr [esp + ebx*4 + 0x1c14]
// 00689c47  d95c243c             fstp dword ptr [esp + 0x3c]
// 00689c4b  d9849cd0100000       fld dword ptr [esp + ebx*4 + 0x10d0]
// 00689c52  d95c2440             fstp dword ptr [esp + 0x40]
// 00689c56  d9849cd4100000       fld dword ptr [esp + ebx*4 + 0x10d4]
// 00689c5d  d95c2428             fstp dword ptr [esp + 0x28]
// 00689c61  7420                 je 0x689c83
// 00689c63  83e801               sub eax, 1
// 00689c66  0f8579000000         jne 0x689ce5
// 00689c6c  d9849c54270000       fld dword ptr [esp + ebx*4 + 0x2754]
// 00689c73  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00689c7a  d9849c142b0000       fld dword ptr [esp + ebx*4 + 0x2b14]
// 00689c81  eb5e                 jmp 0x689ce1
// 00689c83  837f0800             cmp dword ptr [edi + 8], 0
// 00689c87  752d                 jne 0x689cb6
// 00689c89  d9849c54180000       fld dword ptr [esp + ebx*4 + 0x1854]
// 00689c90  d95c2434             fstp dword ptr [esp + 0x34]
// 00689c94  d9849c94140000       fld dword ptr [esp + ebx*4 + 0x1494]
// 00689c9b  d95c242c             fstp dword ptr [esp + 0x2c]
// 00689c9f  d9849c50180000       fld dword ptr [esp + ebx*4 + 0x1850]
// 00689ca6  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00689cad  d9849c90140000       fld dword ptr [esp + ebx*4 + 0x1490]
// 00689cb4  eb2b                 jmp 0x689ce1
// 00689cb6  d9849c50180000       fld dword ptr [esp + ebx*4 + 0x1850]
// 00689cbd  d95c2434             fstp dword ptr [esp + 0x34]
// 00689cc1  d9849c90140000       fld dword ptr [esp + ebx*4 + 0x1490]
// 00689cc8  d95c242c             fstp dword ptr [esp + 0x2c]
// 00689ccc  d9849c54180000       fld dword ptr [esp + ebx*4 + 0x1854]
// 00689cd3  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00689cda  d9849c94140000       fld dword ptr [esp + ebx*4 + 0x1494]
// 00689ce1  d95c2448             fstp dword ptr [esp + 0x48]
// 00689ce5  6a04                 push 4
// 00689ce7  e8346c0100           call 0x6a0920
// 00689cec  83c404               add esp, 4
// 00689cef  85c0                 test eax, eax
// 00689cf1  7408                 je 0x689cfb
// 00689cf3  8d4c2468             lea ecx, [esp + 0x68]
// 00689cf7  8908                 mov dword ptr [eax], ecx
// 00689cf9  eb02                 jmp 0x689cfd
// 00689cfb  33c0                 xor eax, eax
// 00689cfd  89442468             mov dword ptr [esp + 0x68], eax
// 00689d01  33c0                 xor eax, eax
// 00689d03  89442474             mov dword ptr [esp + 0x74], eax
// 00689d07  89442478             mov dword ptr [esp + 0x78], eax
// 00689d0b  8944247c             mov dword ptr [esp + 0x7c], eax
// 00689d0f  6a04                 push 4
// 00689d11  c78424dc2e000003000000 mov dword ptr [esp + 0x2edc], 3
// 00689d1c  e8ff6b0100           call 0x6a0920
// 00689d21  83c404               add esp, 4
// 00689d24  85c0                 test eax, eax
// 00689d26  7408                 je 0x689d30
// 00689d28  8d542450             lea edx, [esp + 0x50]
// 00689d2c  8910                 mov dword ptr [eax], edx
// 00689d2e  eb02                 jmp 0x689d32
// 00689d30  33c0                 xor eax, eax
// 00689d32  89442450             mov dword ptr [esp + 0x50], eax
// 00689d36  33c0                 xor eax, eax
// 00689d38  8944245c             mov dword ptr [esp + 0x5c], eax
// 00689d3c  89442460             mov dword ptr [esp + 0x60], eax
// 00689d40  89442464             mov dword ptr [esp + 0x64], eax
// 00689d44  c68424d82e000005     mov byte ptr [esp + 0x2ed8], 5
// 00689d4c  3b9c2494000000       cmp ebx, dword ptr [esp + 0x94]
// 00689d53  7547                 jne 0x689d9c
// 00689d55  6816b78000           push 0x80b716
// 00689d5a  8d8c24b8010000       lea ecx, [esp + 0x1b8]
// 00689d61  ff1558248000         call dword ptr [0x802458]
// 00689d67  8b06                 mov eax, dword ptr [esi]
// 00689d69  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00689d6f  6a04                 push 4
// 00689d71  8d8c24b8010000       lea ecx, [esp + 0x1b8]
// 00689d78  51                   push ecx
// 00689d79  8bce                 mov ecx, esi
// 00689d7b  c68424e02e000006     mov byte ptr [esp + 0x2ee0], 6
// 00689d83  ffd2                 call edx
// 00689d85  8d8c24b4010000       lea ecx, [esp + 0x1b4]
// 00689d8c  c68424d82e000005     mov byte ptr [esp + 0x2ed8], 5
// 00689d94  ff1568248000         call dword ptr [0x802468]
// 00689d9a  33ed                 xor ebp, ebp
// 00689d9c  d9ee                 fldz 
// 00689d9e  8d4f10               lea ecx, [edi + 0x10]
// 00689da1  d819                 fcomp dword ptr [ecx]
// 00689da3  dfe0                 fnstsw ax
// 00689da5  f6c441               test ah, 0x41
// 00689da8  7a0d                 jp 0x689db7
// 00689daa  8b06                 mov eax, dword ptr [esi]
// 00689dac  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00689db2  51                   push ecx
// 00689db3  8bce                 mov ecx, esi
// 00689db5  ffd2                 call edx
// 00689db7  33c0                 xor eax, eax
// 00689db9  398424f02e0000       cmp dword ptr [esp + 0x2ef0], eax
// 00689dc0  89442414             mov dword ptr [esp + 0x14], eax
// 00689dc4  0f8c7f110000         jl 0x68af49
// 00689dca  8d9b00000000         lea ebx, [ebx]
// 00689dd0  833f00               cmp dword ptr [edi], 0
// 00689dd3  752f                 jne 0x689e04
// 00689dd5  d98484100d0000       fld dword ptr [esp + eax*4 + 0xd10]
// 00689ddc  d9442434             fld dword ptr [esp + 0x34]
// 00689de0  dcc9                 fmul st(1), st(0)
// 00689de2  d88c8450090000       fmul dword ptr [esp + eax*4 + 0x950]
// 00689de9  d9c9                 fxch st(1)
// 00689deb  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00689df2  d99c2484000000       fstp dword ptr [esp + 0x84]
// 00689df9  d944242c             fld dword ptr [esp + 0x2c]
// 00689dfd  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00689e04  837f0800             cmp dword ptr [edi + 8], 0
// 00689e08  0f8542040000         jne 0x68a250
// 00689e0e  807f0400             cmp byte ptr [edi + 4], 0
// 00689e12  743d                 je 0x689e51
// 00689e14  8d4b01               lea ecx, [ebx + 1]
// 00689e17  894c2420             mov dword ptr [esp + 0x20], ecx
// 00689e1b  db442420             fild dword ptr [esp + 0x20]
// 00689e1f  83ec08               sub esp, 8
// 00689e22  8b06                 mov eax, dword ptr [esi]
// 00689e24  8b900c010000         mov edx, dword ptr [eax + 0x10c]
// 00689e2a  dab424fc2e0000       fidiv dword ptr [esp + 0x2efc]
// 00689e31  8bce                 mov ecx, esi
// 00689e33  d9e8                 fld1 
// 00689e35  d9c0                 fld st(0)
// 00689e37  dee2                 fsubrp st(2)
// 00689e39  d9c9                 fxch st(1)
// 00689e3b  d95c2404             fstp dword ptr [esp + 4]
// 00689e3f  db44241c             fild dword ptr [esp + 0x1c]
// 00689e43  dab424f82e0000       fidiv dword ptr [esp + 0x2ef8]
// 00689e4a  dee9                 fsubp st(1)
// 00689e4c  d91c24               fstp dword ptr [esp]
// 00689e4f  ffd2                 call edx
// 00689e51  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00689e55  2b4c2474             sub ecx, dword ptr [esp + 0x74]
// 00689e59  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00689e5e  f7e9                 imul ecx
// 00689e60  d1fa                 sar edx, 1
// 00689e62  8bc2                 mov eax, edx
// 00689e64  c1e81f               shr eax, 0x1f
// 00689e67  03c2                 add eax, edx
// 00689e69  89442418             mov dword ptr [esp + 0x18], eax
// 00689e6d  83f802               cmp eax, 2
// 00689e70  0f827b030000         jb 0x68a1f1
// 00689e76  8bc8                 mov ecx, eax
// 00689e78  81e101000080         and ecx, 0x80000001
// 00689e7e  7905                 jns 0x689e85
// 00689e80  49                   dec ecx
// 00689e81  83c9fe               or ecx, 0xfffffffe
// 00689e84  41                   inc ecx
// 00689e85  0f84b4010000         je 0x68a03f
// 00689e8b  8d58ff               lea ebx, [eax - 1]
// 00689e8e  3bd8                 cmp ebx, eax
// 00689e90  7206                 jb 0x689e98
// 00689e92  ff1590288000         call dword ptr [0x802890]
// 00689e98  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00689e9c  8b16                 mov edx, dword ptr [esi]
// 00689e9e  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 00689ea4  8d045b               lea eax, [ebx + ebx*2]
// 00689ea7  8d0481               lea eax, [ecx + eax*4]
// 00689eaa  50                   push eax
// 00689eab  8bce                 mov ecx, esi
// 00689ead  ffd2                 call edx
// 00689eaf  8b06                 mov eax, dword ptr [esi]
// 00689eb1  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00689eb7  55                   push ebp
// 00689eb8  8bce                 mov ecx, esi
// 00689eba  ffd2                 call edx
// 00689ebc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00689ec0  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00689ec4  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00689ec9  f7e9                 imul ecx
// 00689ecb  d1fa                 sar edx, 1
// 00689ecd  8bc2                 mov eax, edx
// 00689ecf  c1e81f               shr eax, 0x1f
// 00689ed2  03c2                 add eax, edx
// 00689ed4  45                   inc ebp
// 00689ed5  3bd8                 cmp ebx, eax
// 00689ed7  7206                 jb 0x689edf
// 00689ed9  ff1590288000         call dword ptr [0x802890]
// 00689edf  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00689ee3  8b16                 mov edx, dword ptr [esi]
// 00689ee5  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00689eeb  8d045b               lea eax, [ebx + ebx*2]
// 00689eee  8d0481               lea eax, [ecx + eax*4]
// 00689ef1  50                   push eax
// 00689ef2  8bce                 mov ecx, esi
// 00689ef4  ffd2                 call edx
// 00689ef6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00689efa  2b4c2474             sub ecx, dword ptr [esp + 0x74]
// 00689efe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00689f02  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00689f07  f7e9                 imul ecx
// 00689f09  d1fa                 sar edx, 1
// 00689f0b  8bc2                 mov eax, edx
// 00689f0d  c1e81f               shr eax, 0x1f
// 00689f10  83c3fe               add ebx, -2
// 00689f13  03c2                 add eax, edx
// 00689f15  3bd8                 cmp ebx, eax
// 00689f17  7206                 jb 0x689f1f
// 00689f19  ff1590288000         call dword ptr [0x802890]
// 00689f1f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00689f23  8b16                 mov edx, dword ptr [esi]
// 00689f25  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 00689f2b  8d045b               lea eax, [ebx + ebx*2]
// 00689f2e  8d0481               lea eax, [ecx + eax*4]
// 00689f31  50                   push eax
// 00689f32  8bce                 mov ecx, esi
// 00689f34  ffd2                 call edx
// 00689f36  8b06                 mov eax, dword ptr [esi]
// 00689f38  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00689f3e  55                   push ebp
// 00689f3f  8bce                 mov ecx, esi
// 00689f41  ffd2                 call edx
// 00689f43  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00689f47  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00689f4b  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00689f50  f7e9                 imul ecx
// 00689f52  d1fa                 sar edx, 1
// 00689f54  8bc2                 mov eax, edx
// 00689f56  c1e81f               shr eax, 0x1f
// 00689f59  03c2                 add eax, edx
// 00689f5b  45                   inc ebp
// 00689f5c  3bd8                 cmp ebx, eax
// 00689f5e  7206                 jb 0x689f66
// 00689f60  ff1590288000         call dword ptr [0x802890]
// 00689f66  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00689f6a  8b16                 mov edx, dword ptr [esi]
// 00689f6c  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00689f72  8d045b               lea eax, [ebx + ebx*2]
// 00689f75  8d0481               lea eax, [ecx + eax*4]
// 00689f78  50                   push eax
// 00689f79  8bce                 mov ecx, esi
// 00689f7b  ffd2                 call edx
// 00689f7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00689f81  03c9                 add ecx, ecx
// 00689f83  03c9                 add ecx, ecx
// 00689f85  d9840c90050000       fld dword ptr [esp + ecx + 0x590]
// 00689f8c  8d840c90050000       lea eax, [esp + ecx + 0x590]
// 00689f93  d9442428             fld dword ptr [esp + 0x28]
// 00689f97  8944244c             mov dword ptr [esp + 0x4c], eax
// 00689f9b  dcc9                 fmul st(1), st(0)
// 00689f9d  8d840cd0010000       lea eax, [esp + ecx + 0x1d0]
// 00689fa4  d9c9                 fxch st(1)
// 00689fa6  83ec0c               sub esp, 0xc
// 00689fa9  89442450             mov dword ptr [esp + 0x50], eax
// 00689fad  d9542444             fst dword ptr [esp + 0x44]
// 00689fb1  894c2424             mov dword ptr [esp + 0x24], ecx
// 00689fb5  d900                 fld dword ptr [eax]
// 00689fb7  8b06                 mov eax, dword ptr [esi]
// 00689fb9  deca                 fmulp st(2)
// 00689fbb  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 00689fc1  d9c9                 fxch st(1)
// 00689fc3  8bce                 mov ecx, esi
// 00689fc5  d954242c             fst dword ptr [esp + 0x2c]
// 00689fc9  d94728               fld dword ptr [edi + 0x28]
// 00689fcc  d8442448             fadd dword ptr [esp + 0x48]
// 00689fd0  d95c2408             fstp dword ptr [esp + 8]
// 00689fd4  d9c9                 fxch st(1)
// 00689fd6  d84724               fadd dword ptr [edi + 0x24]
// 00689fd9  d95c2404             fstp dword ptr [esp + 4]
// 00689fdd  d84720               fadd dword ptr [edi + 0x20]
// 00689fe0  d91c24               fstp dword ptr [esp]
// 00689fe3  ffd2                 call edx
// 00689fe5  8b06                 mov eax, dword ptr [esi]
// 00689fe7  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00689fed  55                   push ebp
// 00689fee  8bce                 mov ecx, esi
// 00689ff0  ffd2                 call edx
// 00689ff2  8b06                 mov eax, dword ptr [esi]
// 00689ff4  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 00689ffa  8d8c2480000000       lea ecx, [esp + 0x80]
// 0068a001  51                   push ecx
// 0068a002  8bce                 mov ecx, esi
// 0068a004  45                   inc ebp
// 0068a005  ffd2                 call edx
// 0068a007  d9442420             fld dword ptr [esp + 0x20]
// 0068a00b  d84720               fadd dword ptr [edi + 0x20]
// 0068a00e  8d8424c8000000       lea eax, [esp + 0xc8]
// 0068a015  d9442438             fld dword ptr [esp + 0x38]
// 0068a019  d84724               fadd dword ptr [edi + 0x24]
// 0068a01c  d94728               fld dword ptr [edi + 0x28]
// 0068a01f  d844243c             fadd dword ptr [esp + 0x3c]
// 0068a023  d9ca                 fxch st(2)
// 0068a025  d99c24c8000000       fstp dword ptr [esp + 0xc8]

void func_006892d0()
{
}
