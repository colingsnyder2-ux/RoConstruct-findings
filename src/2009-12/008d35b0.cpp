// roc 2009-12 008d35b0  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d35b0
//
// 008d35b0  83ec28               sub esp, 0x28
// 008d35b3  53                   push ebx
// 008d35b4  55                   push ebp
// 008d35b5  56                   push esi
// 008d35b6  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d35ba  8b06                 mov eax, dword ptr [esi]
// 008d35bc  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d35bf  8be9                 mov ebp, ecx
// 008d35c1  57                   push edi
// 008d35c2  8bce                 mov ecx, esi
// 008d35c4  896c2414             mov dword ptr [esp + 0x14], ebp
// 008d35c8  ffd2                 call edx
// 008d35ca  85c0                 test eax, eax
// 008d35cc  7437                 je 0x8d3605
// 008d35ce  8b06                 mov eax, dword ptr [esi]
// 008d35d0  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d35d3  bf02000000           mov edi, 2
// 008d35d8  8bce                 mov ecx, esi
// 008d35da  8d5fff               lea ebx, [edi - 1]
// 008d35dd  8bef                 mov ebp, edi
// 008d35df  ffd2                 call edx
// 008d35e1  50                   push eax
// 008d35e2  83ec10               sub esp, 0x10
// 008d35e5  8bc4                 mov eax, esp
// 008d35e7  8938                 mov dword ptr [eax], edi
// 008d35e9  895804               mov dword ptr [eax + 4], ebx
// 008d35ec  896808               mov dword ptr [eax + 8], ebp
// 008d35ef  8bcf                 mov ecx, edi
// 008d35f1  89480c               mov dword ptr [eax + 0xc], ecx
// 008d35f4  8d442458             lea eax, [esp + 0x58]
// 008d35f8  50                   push eax
// 008d35f9  e882110000           call 0x8d4780
// 008d35fe  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d3602  83c418               add esp, 0x18
// 008d3605  8b16                 mov edx, dword ptr [esi]
// 008d3607  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d360a  8bce                 mov ecx, esi
// 008d360c  ffd0                 call eax
// 008d360e  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 008d3611  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008d3614  50                   push eax
// 008d3615  83ec10               sub esp, 0x10
// 008d3618  8bc4                 mov eax, esp
// 008d361a  8908                 mov dword ptr [eax], ecx
// 008d361c  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008d361f  895004               mov dword ptr [eax + 4], edx
// 008d3622  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 008d3625  894808               mov dword ptr [eax + 8], ecx
// 008d3628  89500c               mov dword ptr [eax + 0xc], edx
// 008d362b  8d442458             lea eax, [esp + 0x58]
// 008d362f  50                   push eax
// 008d3630  e84b110000           call 0x8d4780
// 008d3635  83c418               add esp, 0x18
// 008d3638  8bce                 mov ecx, esi
// 008d363a  e821adffff           call 0x8ce360
// 008d363f  83f804               cmp eax, 4
// 008d3642  7537                 jne 0x8d367b
// 008d3644  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d3648  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d364c  83ec10               sub esp, 0x10
// 008d364f  8bc4                 mov eax, esp
// 008d3651  8908                 mov dword ptr [eax], ecx
// 008d3653  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d3657  895004               mov dword ptr [eax + 4], edx
// 008d365a  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d365e  894808               mov dword ptr [eax + 8], ecx
// 008d3661  89500c               mov dword ptr [eax + 0xc], edx
// 008d3664  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d3668  50                   push eax
// 008d3669  56                   push esi
// 008d366a  8bcd                 mov ecx, ebp
// 008d366c  e8fff5ffff           call 0x8d2c70
// 008d3671  5f                   pop edi
// 008d3672  5e                   pop esi
// 008d3673  5d                   pop ebp
// 008d3674  5b                   pop ebx
// 008d3675  83c428               add esp, 0x28
// 008d3678  c21800               ret 0x18
// 008d367b  33db                 xor ebx, ebx
// 008d367d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 008d3680  7e55                 jle 0x8d36d7
// 008d3682  85db                 test ebx, ebx
// 008d3684  7c0d                 jl 0x8d3693
// 008d3686  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 008d3689  7d08                 jge 0x8d3693
// 008d368b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d368e  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008d3691  eb02                 jmp 0x8d3695
// 008d3693  33ff                 xor edi, edi
// 008d3695  8bcf                 mov ecx, edi
// 008d3697  e854fde9ff           call 0x7733f0
// 008d369c  85c0                 test eax, eax
// 008d369e  7415                 je 0x8d36b5
// 008d36a0  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d36a6  8b11                 mov edx, dword ptr [ecx]
// 008d36a8  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d36ac  8b5218               mov edx, dword ptr [edx + 0x18]
// 008d36af  57                   push edi
// 008d36b0  50                   push eax
// 008d36b1  ffd2                 call edx
// 008d36b3  eb02                 jmp 0x8d36b7
// 008d36b5  33c0                 xor eax, eax
// 008d36b7  8bcf                 mov ecx, edi
// 008d36b9  894724               mov dword ptr [edi + 0x24], eax
// 008d36bc  894720               mov dword ptr [edi + 0x20], eax
// 008d36bf  e82cfde9ff           call 0x7733f0
// 008d36c4  85c0                 test eax, eax
// 008d36c6  7409                 je 0x8d36d1
// 008d36c8  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 008d36ce  014720               add dword ptr [edi + 0x20], eax
// 008d36d1  43                   inc ebx
// 008d36d2  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 008d36d5  7cab                 jl 0x8d3682
// 008d36d7  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008d36db  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d36e1  8b11                 mov edx, dword ptr [ecx]
// 008d36e3  8b5208               mov edx, dword ptr [edx + 8]
// 008d36e6  56                   push esi
// 008d36e7  83ec10               sub esp, 0x10
// 008d36ea  8bc4                 mov eax, esp
// 008d36ec  8938                 mov dword ptr [eax], edi
// 008d36ee  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008d36f2  897804               mov dword ptr [eax + 4], edi
// 008d36f5  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008d36f9  897808               mov dword ptr [eax + 8], edi
// 008d36fc  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008d3700  89780c               mov dword ptr [eax + 0xc], edi
// 008d3703  8d44243c             lea eax, [esp + 0x3c]
// 008d3707  50                   push eax
// 008d3708  ffd2                 call edx
// 008d370a  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d370e  8b08                 mov ecx, dword ptr [eax]
// 008d3710  894e24               mov dword ptr [esi + 0x24], ecx
// 008d3713  8b5004               mov edx, dword ptr [eax + 4]
// 008d3716  895628               mov dword ptr [esi + 0x28], edx
// 008d3719  8b4808               mov ecx, dword ptr [eax + 8]
// 008d371c  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d371f  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d3722  895630               mov dword ptr [esi + 0x30], edx
// 008d3725  7537                 jne 0x8d375e
// 008d3727  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d372b  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d372f  83ec10               sub esp, 0x10
// 008d3732  8bc4                 mov eax, esp
// 008d3734  8908                 mov dword ptr [eax], ecx
// 008d3736  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d373a  895004               mov dword ptr [eax + 4], edx
// 008d373d  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d3741  894808               mov dword ptr [eax + 8], ecx
// 008d3744  89500c               mov dword ptr [eax + 0xc], edx
// 008d3747  56                   push esi
// 008d3748  8d44243c             lea eax, [esp + 0x3c]
// 008d374c  50                   push eax
// 008d374d  8bcd                 mov ecx, ebp
// 008d374f  e89cf1ffff           call 0x8d28f0
// 008d3754  5f                   pop edi
// 008d3755  5e                   pop esi
// 008d3756  5d                   pop ebp
// 008d3757  5b                   pop ebx
// 008d3758  83c428               add esp, 0x28
// 008d375b  c21800               ret 0x18
// 008d375e  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d3764  8b11                 mov edx, dword ptr [ecx]
// 008d3766  8b5210               mov edx, dword ptr [edx + 0x10]
// 008d3769  8d442418             lea eax, [esp + 0x18]
// 008d376d  50                   push eax
// 008d376e  ffd2                 call edx
// 008d3770  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d3776  8b01                 mov eax, dword ptr [ecx]
// 008d3778  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d377b  56                   push esi
// 008d377c  ffd2                 call edx
// 008d377e  8bd8                 mov ebx, eax
// 008d3780  8b06                 mov eax, dword ptr [esi]
// 008d3782  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3785  8bce                 mov ecx, esi
// 008d3787  895c2414             mov dword ptr [esp + 0x14], ebx
// 008d378b  ffd2                 call edx
// 008d378d  83f802               cmp eax, 2
// 008d3790  7411                 je 0x8d37a3
// 008d3792  8b06                 mov eax, dword ptr [esi]
// 008d3794  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3797  8bce                 mov ecx, esi
// 008d3799  ffd2                 call edx
// 008d379b  85c0                 test eax, eax
// 008d379d  0f8568020000         jne 0x8d3a0b
// 008d37a3  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d37a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d37ab  8b16                 mov edx, dword ptr [esi]
// 008d37ad  8d3c01               lea edi, [ecx + eax]
// 008d37b0  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d37b3  8bce                 mov ecx, esi
// 008d37b5  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d37b9  ffd0                 call eax
// 008d37bb  83f802               cmp eax, 2
// 008d37be  750e                 jne 0x8d37ce
// 008d37c0  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008d37c4  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 008d37c8  2bfb                 sub edi, ebx
// 008d37ca  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d37ce  03fb                 add edi, ebx
// 008d37d0  8bce                 mov ecx, esi
// 008d37d2  897c2410             mov dword ptr [esp + 0x10], edi
// 008d37d6  e885abffff           call 0x8ce360
// 008d37db  83f801               cmp eax, 1
// 008d37de  7551                 jne 0x8d3831
// 008d37e0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d37e4  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d37e8  8b7e70               mov edi, dword ptr [esi + 0x70]
// 008d37eb  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d37ef  2b442420             sub eax, dword ptr [esp + 0x20]
// 008d37f3  83ef01               sub edi, 1
// 008d37f6  89442440             mov dword ptr [esp + 0x40], eax
// 008d37fa  782c                 js 0x8d3828
// 008d37fc  8d642400             lea esp, [esp]
// 008d3800  85ff                 test edi, edi
// 008d3802  7c0d                 jl 0x8d3811
// 008d3804  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d3807  7d08                 jge 0x8d3811
// 008d3809  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d380c  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 008d380f  eb02                 jmp 0x8d3813
// 008d3811  33c9                 xor ecx, ecx
// 008d3813  8b11                 mov edx, dword ptr [ecx]
// 008d3815  8b5204               mov edx, dword ptr [edx + 4]
// 008d3818  8d442440             lea eax, [esp + 0x40]
// 008d381c  50                   push eax
// 008d381d  ffd2                 call edx
// 008d381f  83ef01               sub edi, 1
// 008d3822  79dc                 jns 0x8d3800
// 008d3824  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d3828  50                   push eax
// 008d3829  56                   push esi
// 008d382a  8bcd                 mov ecx, ebp
// 008d382c  e8aff9ffff           call 0x8d31e0
// 008d3831  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d3835  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d3839  83ec10               sub esp, 0x10
// 008d383c  8bc4                 mov eax, esp
// 008d383e  8908                 mov dword ptr [eax], ecx
// 008d3840  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d3844  895004               mov dword ptr [eax + 4], edx
// 008d3847  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d384b  894808               mov dword ptr [eax + 8], ecx
// 008d384e  89500c               mov dword ptr [eax + 0xc], edx
// 008d3851  56                   push esi
// 008d3852  8d44243c             lea eax, [esp + 0x3c]
// 008d3856  50                   push eax
// 008d3857  8bcd                 mov ecx, ebp
// 008d3859  e892f0ffff           call 0x8d28f0
// 008d385e  837e1400             cmp dword ptr [esi + 0x14], 0
// 008d3862  8b08                 mov ecx, dword ptr [eax]
// 008d3864  894e24               mov dword ptr [esi + 0x24], ecx
// 008d3867  8b5004               mov edx, dword ptr [eax + 4]
// 008d386a  895628               mov dword ptr [esi + 0x28], edx
// 008d386d  8b4808               mov ecx, dword ptr [eax + 8]
// 008d3870  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d3873  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d3876  895630               mov dword ptr [esi + 0x30], edx
// 008d3879  7d71                 jge 0x8d38ec
// 008d387b  8bce                 mov ecx, esi
// 008d387d  e88ebbffff           call 0x8cf410
// 008d3882  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008d3885  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 008d3888  8b5614               mov edx, dword ptr [esi + 0x14]
// 008d388b  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008d388f  03d0                 add edx, eax
// 008d3891  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008d3895  3bd1                 cmp edx, ecx
// 008d3897  7d53                 jge 0x8d38ec
// 008d3899  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d389d  2bc8                 sub ecx, eax
// 008d389f  33c0                 xor eax, eax
// 008d38a1  85c9                 test ecx, ecx
// 008d38a3  0f9fc0               setg al
// 008d38a6  83ec10               sub esp, 0x10
// 008d38a9  48                   dec eax
// 008d38aa  23c1                 and eax, ecx
// 008d38ac  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d38b0  894614               mov dword ptr [esi + 0x14], eax
// 008d38b3  8bc4                 mov eax, esp
// 008d38b5  8908                 mov dword ptr [eax], ecx
// 008d38b7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d38bb  895004               mov dword ptr [eax + 4], edx
// 008d38be  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d38c2  894808               mov dword ptr [eax + 8], ecx
// 008d38c5  89500c               mov dword ptr [eax + 0xc], edx
// 008d38c8  56                   push esi
// 008d38c9  8d44243c             lea eax, [esp + 0x3c]
// 008d38cd  50                   push eax
// 008d38ce  8bcd                 mov ecx, ebp
// 008d38d0  e81bf0ffff           call 0x8d28f0
// 008d38d5  8b08                 mov ecx, dword ptr [eax]
// 008d38d7  894e24               mov dword ptr [esi + 0x24], ecx
// 008d38da  8b5004               mov edx, dword ptr [eax + 4]
// 008d38dd  895628               mov dword ptr [esi + 0x28], edx
// 008d38e0  8b4808               mov ecx, dword ptr [eax + 8]
// 008d38e3  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d38e6  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d38e9  895630               mov dword ptr [esi + 0x30], edx
// 008d38ec  8b7e24               mov edi, dword ptr [esi + 0x24]
// 008d38ef  037e14               add edi, dword ptr [esi + 0x14]
// 008d38f2  8bce                 mov ecx, esi
// 008d38f4  037c2418             add edi, dword ptr [esp + 0x18]
// 008d38f8  e863aaffff           call 0x8ce360
// 008d38fd  83f805               cmp eax, 5
// 008d3900  0f85b0000000         jne 0x8d39b6
// 008d3906  8b06                 mov eax, dword ptr [esi]
// 008d3908  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d390b  8bce                 mov ecx, esi
// 008d390d  ffd2                 call edx
// 008d390f  85c0                 test eax, eax
// 008d3911  750d                 jne 0x8d3920
// 008d3913  8b4630               mov eax, dword ptr [esi + 0x30]
// 008d3916  2b442424             sub eax, dword ptr [esp + 0x24]
// 008d391a  89442410             mov dword ptr [esp + 0x10], eax
// 008d391e  eb0b                 jmp 0x8d392b
// 008d3920  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d3923  03442424             add eax, dword ptr [esp + 0x24]
// 008d3927  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d392b  33ed                 xor ebp, ebp
// 008d392d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d3930  0f8e2c030000         jle 0x8d3c62
// 008d3936  8d041f               lea eax, [edi + ebx]
// 008d3939  89442440             mov dword ptr [esp + 0x40], eax
// 008d393d  8d4900               lea ecx, [ecx]
// 008d3940  85ed                 test ebp, ebp
// 008d3942  7c0d                 jl 0x8d3951
// 008d3944  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d3947  7d08                 jge 0x8d3951
// 008d3949  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d394c  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 008d394f  eb02                 jmp 0x8d3953
// 008d3951  33db                 xor ebx, ebx
// 008d3953  8b16                 mov edx, dword ptr [esi]
// 008d3955  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d3958  8bce                 mov ecx, esi
// 008d395a  ffd0                 call eax
// 008d395c  83ec10               sub esp, 0x10
// 008d395f  85c0                 test eax, eax
// 008d3961  8bc4                 mov eax, esp
// 008d3963  8938                 mov dword ptr [eax], edi
// 008d3965  7518                 jne 0x8d397f
// 008d3967  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d396b  8bca                 mov ecx, edx
// 008d396d  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 008d3970  894804               mov dword ptr [eax + 4], ecx
// 008d3973  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d3977  894808               mov dword ptr [eax + 8], ecx
// 008d397a  89500c               mov dword ptr [eax + 0xc], edx
// 008d397d  eb16                 jmp 0x8d3995
// 008d397f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d3983  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d3986  895004               mov dword ptr [eax + 4], edx
// 008d3989  03ca                 add ecx, edx
// 008d398b  8b542450             mov edx, dword ptr [esp + 0x50]
// 008d398f  895008               mov dword ptr [eax + 8], edx
// 008d3992  89480c               mov dword ptr [eax + 0xc], ecx
// 008d3995  8bcb                 mov ecx, ebx
// 008d3997  e864aeffff           call 0x8ce800
// 008d399c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d39a0  01442440             add dword ptr [esp + 0x40], eax
// 008d39a4  45                   inc ebp
// 008d39a5  03f8                 add edi, eax
// 008d39a7  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d39aa  7c94                 jl 0x8d3940
// 008d39ac  5f                   pop edi
// 008d39ad  5e                   pop esi
// 008d39ae  5d                   pop ebp
// 008d39af  5b                   pop ebx
// 008d39b0  83c428               add esp, 0x28
// 008d39b3  c21800               ret 0x18
// 008d39b6  33ed                 xor ebp, ebp
// 008d39b8  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d39bb  0f8ea1020000         jle 0x8d3c62
// 008d39c1  85ed                 test ebp, ebp
// 008d39c3  7c0d                 jl 0x8d39d2
// 008d39c5  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d39c8  7d08                 jge 0x8d39d2
// 008d39ca  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d39cd  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 008d39d0  eb02                 jmp 0x8d39d4
// 008d39d2  33db                 xor ebx, ebx
// 008d39d4  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d39d7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d39db  83ec10               sub esp, 0x10
// 008d39de  8bc4                 mov eax, esp
// 008d39e0  03cf                 add ecx, edi
// 008d39e2  8938                 mov dword ptr [eax], edi
// 008d39e4  895004               mov dword ptr [eax + 4], edx
// 008d39e7  894808               mov dword ptr [eax + 8], ecx
// 008d39ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d39ee  89480c               mov dword ptr [eax + 0xc], ecx
// 008d39f1  8bcb                 mov ecx, ebx
// 008d39f3  e808aeffff           call 0x8ce800
// 008d39f8  037b20               add edi, dword ptr [ebx + 0x20]
// 008d39fb  45                   inc ebp
// 008d39fc  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d39ff  7cc0                 jl 0x8d39c1
// 008d3a01  5f                   pop edi
// 008d3a02  5e                   pop esi
// 008d3a03  5d                   pop ebp
// 008d3a04  5b                   pop ebx
// 008d3a05  83c428               add esp, 0x28
// 008d3a08  c21800               ret 0x18
// 008d3a0b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d3a0f  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d3a13  8d3c10               lea edi, [eax + edx]
// 008d3a16  8b16                 mov edx, dword ptr [esi]
// 008d3a18  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d3a1b  8bce                 mov ecx, esi
// 008d3a1d  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d3a21  ffd0                 call eax
// 008d3a23  83f803               cmp eax, 3
// 008d3a26  750e                 jne 0x8d3a36
// 008d3a28  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008d3a2c  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 008d3a30  2bfb                 sub edi, ebx
// 008d3a32  897c243c             mov dword ptr [esp + 0x3c], edi
// 008d3a36  03fb                 add edi, ebx
// 008d3a38  8bce                 mov ecx, esi
// 008d3a3a  897c2410             mov dword ptr [esp + 0x10], edi
// 008d3a3e  e81da9ffff           call 0x8ce360
// 008d3a43  83f801               cmp eax, 1
// 008d3a46  754d                 jne 0x8d3a95
// 008d3a48  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d3a4c  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d3a50  8b7e70               mov edi, dword ptr [esi + 0x70]
// 008d3a53  2b442420             sub eax, dword ptr [esp + 0x20]
// 008d3a57  2b442448             sub eax, dword ptr [esp + 0x48]
// 008d3a5b  83ef01               sub edi, 1
// 008d3a5e  89442440             mov dword ptr [esp + 0x40], eax
// 008d3a62  7828                 js 0x8d3a8c
// 008d3a64  85ff                 test edi, edi
// 008d3a66  7c0d                 jl 0x8d3a75
// 008d3a68  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d3a6b  7d08                 jge 0x8d3a75
// 008d3a6d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d3a70  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 008d3a73  eb02                 jmp 0x8d3a77
// 008d3a75  33c9                 xor ecx, ecx
// 008d3a77  8b11                 mov edx, dword ptr [ecx]
// 008d3a79  8b5204               mov edx, dword ptr [edx + 4]
// 008d3a7c  8d442440             lea eax, [esp + 0x40]
// 008d3a80  50                   push eax
// 008d3a81  ffd2                 call edx
// 008d3a83  83ef01               sub edi, 1
// 008d3a86  79dc                 jns 0x8d3a64
// 008d3a88  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d3a8c  50                   push eax
// 008d3a8d  56                   push esi
// 008d3a8e  8bcd                 mov ecx, ebp
// 008d3a90  e84bf7ffff           call 0x8d31e0
// 008d3a95  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d3a99  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d3a9d  83ec10               sub esp, 0x10
// 008d3aa0  8bc4                 mov eax, esp
// 008d3aa2  8908                 mov dword ptr [eax], ecx
// 008d3aa4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d3aa8  895004               mov dword ptr [eax + 4], edx
// 008d3aab  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d3aaf  894808               mov dword ptr [eax + 8], ecx
// 008d3ab2  89500c               mov dword ptr [eax + 0xc], edx
// 008d3ab5  56                   push esi
// 008d3ab6  8d44243c             lea eax, [esp + 0x3c]
// 008d3aba  50                   push eax
// 008d3abb  8bcd                 mov ecx, ebp
// 008d3abd  e82eeeffff           call 0x8d28f0
// 008d3ac2  837e1400             cmp dword ptr [esi + 0x14], 0
// 008d3ac6  8b08                 mov ecx, dword ptr [eax]
// 008d3ac8  894e24               mov dword ptr [esi + 0x24], ecx
// 008d3acb  8b5004               mov edx, dword ptr [eax + 4]
// 008d3ace  895628               mov dword ptr [esi + 0x28], edx
// 008d3ad1  8b4808               mov ecx, dword ptr [eax + 8]
// 008d3ad4  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d3ad7  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d3ada  895630               mov dword ptr [esi + 0x30], edx
// 008d3add  7d71                 jge 0x8d3b50
// 008d3adf  8bce                 mov ecx, esi
// 008d3ae1  e82ab9ffff           call 0x8cf410
// 008d3ae6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008d3ae9  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 008d3aec  8b5614               mov edx, dword ptr [esi + 0x14]
// 008d3aef  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008d3af3  03d0                 add edx, eax
// 008d3af5  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008d3af9  3bd1                 cmp edx, ecx
// 008d3afb  7d53                 jge 0x8d3b50
// 008d3afd  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d3b01  2bc8                 sub ecx, eax
// 008d3b03  33c0                 xor eax, eax
// 008d3b05  85c9                 test ecx, ecx
// 008d3b07  0f9fc0               setg al
// 008d3b0a  83ec10               sub esp, 0x10
// 008d3b0d  48                   dec eax
// 008d3b0e  23c1                 and eax, ecx
// 008d3b10  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d3b14  894614               mov dword ptr [esi + 0x14], eax
// 008d3b17  8bc4                 mov eax, esp
// 008d3b19  8908                 mov dword ptr [eax], ecx
// 008d3b1b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d3b1f  895004               mov dword ptr [eax + 4], edx
// 008d3b22  8b542460             mov edx, dword ptr [esp + 0x60]
// 008d3b26  894808               mov dword ptr [eax + 8], ecx
// 008d3b29  89500c               mov dword ptr [eax + 0xc], edx
// 008d3b2c  56                   push esi
// 008d3b2d  8d44243c             lea eax, [esp + 0x3c]
// 008d3b31  50                   push eax
// 008d3b32  8bcd                 mov ecx, ebp
// 008d3b34  e8b7edffff           call 0x8d28f0
// 008d3b39  8b08                 mov ecx, dword ptr [eax]
// 008d3b3b  894e24               mov dword ptr [esi + 0x24], ecx
// 008d3b3e  8b5004               mov edx, dword ptr [eax + 4]
// 008d3b41  895628               mov dword ptr [esi + 0x28], edx
// 008d3b44  8b4808               mov ecx, dword ptr [eax + 8]
// 008d3b47  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008d3b4a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d3b4d  895630               mov dword ptr [esi + 0x30], edx
// 008d3b50  8b7e28               mov edi, dword ptr [esi + 0x28]
// 008d3b53  037e14               add edi, dword ptr [esi + 0x14]
// 008d3b56  8bce                 mov ecx, esi
// 008d3b58  037c2418             add edi, dword ptr [esp + 0x18]
// 008d3b5c  e8ffa7ffff           call 0x8ce360
// 008d3b61  83f805               cmp eax, 5
// 008d3b64  0f85b1000000         jne 0x8d3c1b
// 008d3b6a  8b06                 mov eax, dword ptr [esi]
// 008d3b6c  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3b6f  8bce                 mov ecx, esi
// 008d3b71  ffd2                 call edx
// 008d3b73  83f801               cmp eax, 1
// 008d3b76  750d                 jne 0x8d3b85
// 008d3b78  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d3b7b  2b442424             sub eax, dword ptr [esp + 0x24]
// 008d3b7f  89442410             mov dword ptr [esp + 0x10], eax
// 008d3b83  eb0b                 jmp 0x8d3b90
// 008d3b85  8b4624               mov eax, dword ptr [esi + 0x24]
// 008d3b88  03442424             add eax, dword ptr [esp + 0x24]
// 008d3b8c  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d3b90  33ed                 xor ebp, ebp
// 008d3b92  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d3b95  0f8ec7000000         jle 0x8d3c62
// 008d3b9b  8d041f               lea eax, [edi + ebx]
// 008d3b9e  89442440             mov dword ptr [esp + 0x40], eax
// 008d3ba2  85ed                 test ebp, ebp
// 008d3ba4  7c0d                 jl 0x8d3bb3
// 008d3ba6  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d3ba9  7d08                 jge 0x8d3bb3
// 008d3bab  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d3bae  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 008d3bb1  eb02                 jmp 0x8d3bb5
// 008d3bb3  33db                 xor ebx, ebx
// 008d3bb5  8b16                 mov edx, dword ptr [esi]
// 008d3bb7  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d3bba  8bce                 mov ecx, esi
// 008d3bbc  ffd0                 call eax
// 008d3bbe  83ec10               sub esp, 0x10
// 008d3bc1  83f801               cmp eax, 1
// 008d3bc4  8bc4                 mov eax, esp
// 008d3bc6  751a                 jne 0x8d3be2
// 008d3bc8  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d3bcc  8bca                 mov ecx, edx
// 008d3bce  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 008d3bd1  8908                 mov dword ptr [eax], ecx
// 008d3bd3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d3bd7  897804               mov dword ptr [eax + 4], edi
// 008d3bda  895008               mov dword ptr [eax + 8], edx
// 008d3bdd  89480c               mov dword ptr [eax + 0xc], ecx
// 008d3be0  eb18                 jmp 0x8d3bfa
// 008d3be2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d3be6  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d3be9  8910                 mov dword ptr [eax], edx
// 008d3beb  03ca                 add ecx, edx
// 008d3bed  8b542450             mov edx, dword ptr [esp + 0x50]
// 008d3bf1  897804               mov dword ptr [eax + 4], edi
// 008d3bf4  894808               mov dword ptr [eax + 8], ecx
// 008d3bf7  89500c               mov dword ptr [eax + 0xc], edx
// 008d3bfa  8bcb                 mov ecx, ebx
// 008d3bfc  e8ffabffff           call 0x8ce800
// 008d3c01  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d3c05  01442440             add dword ptr [esp + 0x40], eax
// 008d3c09  45                   inc ebp
// 008d3c0a  03f8                 add edi, eax
// 008d3c0c  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d3c0f  7c91                 jl 0x8d3ba2
// 008d3c11  5f                   pop edi
// 008d3c12  5e                   pop esi
// 008d3c13  5d                   pop ebp
// 008d3c14  5b                   pop ebx
// 008d3c15  83c428               add esp, 0x28
// 008d3c18  c21800               ret 0x18
// 008d3c1b  33ed                 xor ebp, ebp
// 008d3c1d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 008d3c20  7e40                 jle 0x8d3c62
// 008d3c22  85ed                 test ebp, ebp
// 008d3c24  7c0d                 jl 0x8d3c33
// 008d3c26  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d3c29  7d08                 jge 0x8d3c33
// 008d3c2b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d3c2e  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 008d3c31  eb02                 jmp 0x8d3c35
// 008d3c33  33db                 xor ebx, ebx
// 008d3c35  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d3c39  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008d3c3c  83ec10               sub esp, 0x10
// 008d3c3f  8bc4                 mov eax, esp
// 008d3c41  8910                 mov dword ptr [eax], edx
// 008d3c43  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d3c47  03cf                 add ecx, edi
// 008d3c49  897804               mov dword ptr [eax + 4], edi
// 008d3c4c  895008               mov dword ptr [eax + 8], edx
// 008d3c4f  89480c               mov dword ptr [eax + 0xc], ecx
// 008d3c52  8bcb                 mov ecx, ebx
// 008d3c54  e8a7abffff           call 0x8ce800
// 008d3c59  037b20               add edi, dword ptr [ebx + 0x20]
// 008d3c5c  45                   inc ebp
// 008d3c5d  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 008d3c60  7cc0                 jl 0x8d3c22
// 008d3c62  5f                   pop edi
// 008d3c63  5e                   pop esi
// 008d3c64  5d                   pop ebp
// 008d3c65  5b                   pop ebx
// 008d3c66  83c428               add esp, 0x28
// 008d3c69  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
