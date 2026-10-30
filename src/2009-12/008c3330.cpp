// roc 2009-12 008c3330  unit: CXTPImageEditorDlg  size: 1874 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3330
//
// 008c3330  81ec90010000         sub esp, 0x190
// 008c3336  53                   push ebx
// 008c3337  55                   push ebp
// 008c3338  33ed                 xor ebp, ebp
// 008c333a  b806000000           mov eax, 6
// 008c333f  bb01000000           mov ebx, 1
// 008c3344  56                   push esi
// 008c3345  57                   push edi
// 008c3346  8bf1                 mov esi, ecx
// 008c3348  bf02000000           mov edi, 2
// 008c334d  ba03000000           mov edx, 3
// 008c3352  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 008c3359  898424d8000000       mov dword ptr [esp + 0xd8], eax
// 008c3360  b807000000           mov eax, 7
// 008c3365  b905000000           mov ecx, 5
// 008c336a  c7442440af230000     mov dword ptr [esp + 0x40], 0x23af
// 008c3372  c7442444b0230000     mov dword ptr [esp + 0x44], 0x23b0
// 008c337a  c7442448b8230000     mov dword ptr [esp + 0x48], 0x23b8
// 008c3382  c744244cb9230000     mov dword ptr [esp + 0x4c], 0x23b9
// 008c338a  c7442450b1230000     mov dword ptr [esp + 0x50], 0x23b1
// 008c3392  c7442454b2230000     mov dword ptr [esp + 0x54], 0x23b2
// 008c339a  c7442458b5230000     mov dword ptr [esp + 0x58], 0x23b5
// 008c33a2  c744245cb6230000     mov dword ptr [esp + 0x5c], 0x23b6
// 008c33aa  c7442460b3230000     mov dword ptr [esp + 0x60], 0x23b3
// 008c33b2  c7442464b4230000     mov dword ptr [esp + 0x64], 0x23b4
// 008c33ba  c7442468b7230000     mov dword ptr [esp + 0x68], 0x23b7
// 008c33c2  c744246cba230000     mov dword ptr [esp + 0x6c], 0x23ba
// 008c33ca  c74424306b000000     mov dword ptr [esp + 0x30], 0x6b
// 008c33d2  c74424346c000000     mov dword ptr [esp + 0x34], 0x6c
// 008c33da  c74424386d000000     mov dword ptr [esp + 0x38], 0x6d
// 008c33e2  c744243c6e000000     mov dword ptr [esp + 0x3c], 0x6e
// 008c33ea  896c2470             mov dword ptr [esp + 0x70], ebp
// 008c33ee  c7442474ac260000     mov dword ptr [esp + 0x74], 0x26ac
// 008c33f6  896c2478             mov dword ptr [esp + 0x78], ebp
// 008c33fa  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008c33fe  c784248000000080000000 mov dword ptr [esp + 0x80], 0x80
// 008c3409  c7842484000000b4260000 mov dword ptr [esp + 0x84], 0x26b4
// 008c3414  89bc2488000000       mov dword ptr [esp + 0x88], edi
// 008c341b  89ac248c000000       mov dword ptr [esp + 0x8c], ebp
// 008c3422  c784249000000080800000 mov dword ptr [esp + 0x90], 0x8080
// 008c342d  c7842494000000b6260000 mov dword ptr [esp + 0x94], 0x26b6
// 008c3438  89942498000000       mov dword ptr [esp + 0x98], edx
// 008c343f  89ac249c000000       mov dword ptr [esp + 0x9c], ebp
// 008c3446  c78424a000000000008000 mov dword ptr [esp + 0xa0], 0x800000
// 008c3451  c78424a4000000b1260000 mov dword ptr [esp + 0xa4], 0x26b1
// 008c345c  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 008c3463  c78424b000000000800000 mov dword ptr [esp + 0xb0], 0x8000
// 008c346e  c78424b4000000b7260000 mov dword ptr [esp + 0xb4], 0x26b7
// 008c3479  c78424b800000004000000 mov dword ptr [esp + 0xb8], 4
// 008c3484  89ac24bc000000       mov dword ptr [esp + 0xbc], ebp
// 008c348b  c78424c000000000808000 mov dword ptr [esp + 0xc0], 0x808000
// 008c3496  c78424c4000000b8260000 mov dword ptr [esp + 0xc4], 0x26b8
// 008c34a1  898c24c8000000       mov dword ptr [esp + 0xc8], ecx
// 008c34a8  89ac24cc000000       mov dword ptr [esp + 0xcc], ebp
// 008c34af  c78424d00000000000ff00 mov dword ptr [esp + 0xd0], 0xff0000
// 008c34ba  c78424d4000000b9260000 mov dword ptr [esp + 0xd4], 0x26b9
// 008c34c5  899c24dc000000       mov dword ptr [esp + 0xdc], ebx
// 008c34cc  c78424e000000080808000 mov dword ptr [esp + 0xe0], 0x808080
// 008c34d7  c78424e4000000bb260000 mov dword ptr [esp + 0xe4], 0x26bb
// 008c34e2  899c24e8000000       mov dword ptr [esp + 0xe8], ebx
// 008c34e9  89ac24ec000000       mov dword ptr [esp + 0xec], ebp
// 008c34f0  c78424f0000000ff000000 mov dword ptr [esp + 0xf0], 0xff
// 008c34fb  c78424f4000000bc260000 mov dword ptr [esp + 0xf4], 0x26bc
// 008c3506  89bc24f8000000       mov dword ptr [esp + 0xf8], edi
// 008c350d  899c24fc000000       mov dword ptr [esp + 0xfc], ebx
// 008c3514  c784240001000080008000 mov dword ptr [esp + 0x100], 0x800080
// 008c351f  c7842404010000c2260000 mov dword ptr [esp + 0x104], 0x26c2
// 008c352a  89842408010000       mov dword ptr [esp + 0x108], eax
// 008c3531  89ac240c010000       mov dword ptr [esp + 0x10c], ebp
// 008c3538  c7842410010000ff00ff00 mov dword ptr [esp + 0x110], 0xff00ff
// 008c3543  c7842414010000c4260000 mov dword ptr [esp + 0x114], 0x26c4
// 008c354e  89842418010000       mov dword ptr [esp + 0x118], eax
// 008c3555  899c241c010000       mov dword ptr [esp + 0x11c], ebx
// 008c355c  c7842420010000ffff0000 mov dword ptr [esp + 0x120], 0xffff
// 008c3567  c7842424010000c6260000 mov dword ptr [esp + 0x124], 0x26c6
// 008c3572  89942428010000       mov dword ptr [esp + 0x128], edx
// 008c3579  899c242c010000       mov dword ptr [esp + 0x12c], ebx
// 008c3580  c784243001000000ff0000 mov dword ptr [esp + 0x130], 0xff00
// 008c358b  c7842434010000c7260000 mov dword ptr [esp + 0x134], 0x26c7
// 008c3596  c784243801000004000000 mov dword ptr [esp + 0x138], 4
// 008c35a1  899c243c010000       mov dword ptr [esp + 0x13c], ebx
// 008c35a8  c784244001000000ffff00 mov dword ptr [esp + 0x140], 0xffff00
// 008c35b3  898c2448010000       mov dword ptr [esp + 0x148], ecx
// 008c35ba  8bce                 mov ecx, esi
// 008c35bc  c7842444010000c8260000 mov dword ptr [esp + 0x144], 0x26c8
// 008c35c7  899c244c010000       mov dword ptr [esp + 0x14c], ebx
// 008c35ce  c7842450010000c0c0c000 mov dword ptr [esp + 0x150], 0xc0c0c0
// 008c35d9  c7842454010000cb260000 mov dword ptr [esp + 0x154], 0x26cb
// 008c35e4  899c2458010000       mov dword ptr [esp + 0x158], ebx
// 008c35eb  899c245c010000       mov dword ptr [esp + 0x15c], ebx
// 008c35f2  c7842460010000ffffff00 mov dword ptr [esp + 0x160], 0xffffff
// 008c35fd  c7842464010000d3260000 mov dword ptr [esp + 0x164], 0x26d3
// 008c3608  89ac2468010000       mov dword ptr [esp + 0x168], ebp
// 008c360f  899c246c010000       mov dword ptr [esp + 0x16c], ebx
// 008c3616  e8690bf3ff           call 0x7f4184
// 008c361b  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 008c3621  8d842490010000       lea eax, [esp + 0x190]
// 008c3628  50                   push eax
// 008c3629  51                   push ecx
// 008c362a  ff1570cc9800         call dword ptr [0x98cc70]
// 008c3630  8d942490010000       lea edx, [esp + 0x190]
// 008c3637  52                   push edx
// 008c3638  8bce                 mov ecx, esi
// 008c363a  e89911f3ff           call 0x7f47d8
// 008c363f  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008c3645  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008c364b  6800e80000           push 0xe800
// 008c3650  8dbe1c010000         lea edi, [esi + 0x11c]
// 008c3656  6812200050           push 0x50002012
// 008c365b  56                   push esi
// 008c365c  8bcf                 mov ecx, edi
// 008c365e  ffd2                 call edx
// 008c3660  55                   push ebp
// 008c3661  6800080000           push 0x800
// 008c3666  55                   push ebp
// 008c3667  8bcf                 mov ecx, edi
// 008c3669  e86c09f3ff           call 0x7f3fda
// 008c366e  6a0c                 push 0xc
// 008c3670  8d442444             lea eax, [esp + 0x44]
// 008c3674  50                   push eax
// 008c3675  8bcf                 mov ecx, edi
// 008c3677  e8ae360600           call 0x926d2a
// 008c367c  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 008c3682  55                   push ebp
// 008c3683  55                   push ebp
// 008c3684  6818040000           push 0x418
// 008c3689  51                   push ecx
// 008c368a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c3690  3bc5                 cmp eax, ebp
// 008c3692  89442420             mov dword ptr [esp + 0x20], eax
// 008c3696  896c2414             mov dword ptr [esp + 0x14], ebp
// 008c369a  7e46                 jle 0x8c36e2
// 008c369c  8d642400             lea esp, [esp]
// 008c36a0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c36a4  52                   push edx
// 008c36a5  8bcf                 mov ecx, edi
// 008c36a7  e878360600           call 0x926d24
// 008c36ac  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c36b0  8d4a01               lea ecx, [edx + 1]
// 008c36b3  894c2410             mov dword ptr [esp + 0x10], ecx
// 008c36b7  81e103000080         and ecx, 0x80000003
// 008c36bd  7905                 jns 0x8c36c4
// 008c36bf  49                   dec ecx
// 008c36c0  83c9fc               or ecx, 0xfffffffc
// 008c36c3  41                   inc ecx
// 008c36c4  7505                 jne 0x8c36cb
// 008c36c6  0d00002000           or eax, 0x200000
// 008c36cb  50                   push eax
// 008c36cc  52                   push edx
// 008c36cd  8bcf                 mov ecx, edi
// 008c36cf  e84a360600           call 0x926d1e
// 008c36d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c36d8  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008c36dc  89442414             mov dword ptr [esp + 0x14], eax
// 008c36e0  7cbe                 jl 0x8c36a0
// 008c36e2  8b07                 mov eax, dword ptr [edi]
// 008c36e4  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008c36ea  6a02                 push 2
// 008c36ec  55                   push ebp
// 008c36ed  8d4c2420             lea ecx, [esp + 0x20]
// 008c36f1  51                   push ecx
// 008c36f2  8bcf                 mov ecx, edi
// 008c36f4  ffd2                 call edx
// 008c36f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c36fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c36fe  8b942494010000       mov edx, dword ptr [esp + 0x194]
// 008c3705  55                   push ebp
// 008c3706  50                   push eax
// 008c3707  8b842498010000       mov eax, dword ptr [esp + 0x198]
// 008c370e  51                   push ecx
// 008c370f  8b0d80d79800         mov ecx, dword ptr [0x98d780]
// 008c3715  83c2fc               add edx, -4
// 008c3718  52                   push edx
// 008c3719  83c0f9               add eax, -7
// 008c371c  50                   push eax
// 008c371d  51                   push ecx
// 008c371e  8bcf                 mov ecx, edi
// 008c3720  e80705f3ff           call 0x7f3c2c
// 008c3725  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 008c372b  8d942480010000       lea edx, [esp + 0x180]
// 008c3732  52                   push edx
// 008c3733  50                   push eax
// 008c3734  ff1570cc9800         call dword ptr [0x98cc70]
// 008c373a  8d8c2480010000       lea ecx, [esp + 0x180]
// 008c3741  51                   push ecx
// 008c3742  8bce                 mov ecx, esi
// 008c3744  e88f10f3ff           call 0x7f47d8
// 008c3749  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 008c374f  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008c3755  6800e80000           push 0xe800
// 008c375a  8dbee0010000         lea edi, [esi + 0x1e0]
// 008c3760  6812200050           push 0x50002012
// 008c3765  56                   push esi
// 008c3766  8bcf                 mov ecx, edi
// 008c3768  ffd0                 call eax
// 008c376a  55                   push ebp
// 008c376b  6800080000           push 0x800
// 008c3770  55                   push ebp
// 008c3771  8bcf                 mov ecx, edi
// 008c3773  e86208f3ff           call 0x7f3fda
// 008c3778  6a04                 push 4
// 008c377a  8d4c2434             lea ecx, [esp + 0x34]
// 008c377e  51                   push ecx
// 008c377f  8bcf                 mov ecx, edi
// 008c3781  e8a4350600           call 0x926d2a
// 008c3786  e8d55af4ff           call 0x809260
// 008c378b  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 008c3791  85c0                 test eax, eax
// 008c3793  0f84c4000000         je 0x8c385d
// 008c3799  53                   push ebx
// 008c379a  55                   push ebp
// 008c379b  6a21                 push 0x21
// 008c379d  6a10                 push 0x10
// 008c379f  6a10                 push 0x10
// 008c37a1  e86408f3ff           call 0x7f400a
// 008c37a6  688d230000           push 0x238d
// 008c37ab  e88085f4ff           call 0x80bd30
// 008c37b0  83c404               add esp, 4
// 008c37b3  50                   push eax
// 008c37b4  89442414             mov dword ptr [esp + 0x14], eax
// 008c37b8  e8a70bf3ff           call 0x7f4364
// 008c37bd  3bc5                 cmp eax, ebp
// 008c37bf  7504                 jne 0x8c37c5
// 008c37c1  33c9                 xor ecx, ecx
// 008c37c3  eb03                 jmp 0x8c37c8
// 008c37c5  8b4804               mov ecx, dword ptr [eax + 4]
// 008c37c8  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 008c37ce  55                   push ebp
// 008c37cf  51                   push ecx
// 008c37d0  50                   push eax
// 008c37d1  e84803f3ff           call 0x7f3b1e
// 008c37d6  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008c37dc  8b0a                 mov ecx, dword ptr [edx]
// 008c37de  e82df8b4ff           call 0x413010
// 008c37e3  53                   push ebx
// 008c37e4  55                   push ebp
// 008c37e5  6a21                 push 0x21
// 008c37e7  6a10                 push 0x10
// 008c37e9  8d8e9c020000         lea ecx, [esi + 0x29c]
// 008c37ef  6a10                 push 0x10
// 008c37f1  e81408f3ff           call 0x7f400a
// 008c37f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c37fa  50                   push eax
// 008c37fb  e8640bf3ff           call 0x7f4364
// 008c3800  3bc5                 cmp eax, ebp
// 008c3802  7504                 jne 0x8c3808
// 008c3804  33c0                 xor eax, eax
// 008c3806  eb03                 jmp 0x8c380b
// 008c3808  8b4004               mov eax, dword ptr [eax + 4]
// 008c380b  8b8ea0020000         mov ecx, dword ptr [esi + 0x2a0]
// 008c3811  55                   push ebp
// 008c3812  50                   push eax
// 008c3813  51                   push ecx
// 008c3814  e80503f3ff           call 0x7f3b1e
// 008c3819  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 008c381f  8b09                 mov ecx, dword ptr [ecx]
// 008c3821  e8eaf7b4ff           call 0x413010
// 008c3826  c74424140c000000     mov dword ptr [esp + 0x14], 0xc
// 008c382e  8bff                 mov edi, edi
// 008c3830  8b86a0020000         mov eax, dword ptr [esi + 0x2a0]
// 008c3836  55                   push ebp
// 008c3837  50                   push eax
// 008c3838  e8e102f3ff           call 0x7f3b1e
// 008c383d  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008c3843  8b0a                 mov ecx, dword ptr [edx]
// 008c3845  e846dbffff           call 0x8c1390
// 008c384a  295c2414             sub dword ptr [esp + 0x14], ebx
// 008c384e  75e0                 jne 0x8c3830
// 008c3850  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c3854  50                   push eax
// 008c3855  ff153cb19800         call dword ptr [0x98b13c]
// 008c385b  eb53                 jmp 0x8c38b0
// 008c385d  68c0c0c000           push 0xc0c0c0
// 008c3862  53                   push ebx
// 008c3863  6a10                 push 0x10
// 008c3865  688c230000           push 0x238c
// 008c386a  e851320600           call 0x926ac0
// 008c386f  68c0c0c000           push 0xc0c0c0
// 008c3874  53                   push ebx
// 008c3875  6a10                 push 0x10
// 008c3877  8d8e9c020000         lea ecx, [esi + 0x29c]
// 008c387d  688c230000           push 0x238c
// 008c3882  e839320600           call 0x926ac0
// 008c3887  c74424100c000000     mov dword ptr [esp + 0x10], 0xc
// 008c388f  90                   nop 
// 008c3890  8b86a0020000         mov eax, dword ptr [esi + 0x2a0]
// 008c3896  55                   push ebp
// 008c3897  50                   push eax
// 008c3898  e88102f3ff           call 0x7f3b1e
// 008c389d  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 008c38a3  8b09                 mov ecx, dword ptr [ecx]
// 008c38a5  e8e6daffff           call 0x8c1390
// 008c38aa  295c2410             sub dword ptr [esp + 0x10], ebx
// 008c38ae  75e0                 jne 0x8c3890
// 008c38b0  8d86d8010000         lea eax, [esi + 0x1d8]
// 008c38b6  3bc5                 cmp eax, ebp
// 008c38b8  7504                 jne 0x8c38be
// 008c38ba  33c0                 xor eax, eax
// 008c38bc  eb03                 jmp 0x8c38c1
// 008c38be  8b4004               mov eax, dword ptr [eax + 4]
// 008c38c1  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 008c38c7  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c38cd  50                   push eax
// 008c38ce  55                   push ebp
// 008c38cf  6830040000           push 0x430
// 008c38d4  52                   push edx
// 008c38d5  ffd3                 call ebx
// 008c38d7  8d869c020000         lea eax, [esi + 0x29c]
// 008c38dd  3bc5                 cmp eax, ebp
// 008c38df  7504                 jne 0x8c38e5
// 008c38e1  33c0                 xor eax, eax
// 008c38e3  eb03                 jmp 0x8c38e8
// 008c38e5  8b4004               mov eax, dword ptr [eax + 4]
// 008c38e8  50                   push eax
// 008c38e9  8b8600020000         mov eax, dword ptr [esi + 0x200]
// 008c38ef  55                   push ebp
// 008c38f0  6830040000           push 0x430
// 008c38f5  50                   push eax
// 008c38f6  ffd3                 call ebx
// 008c38f8  8b17                 mov edx, dword ptr [edi]
// 008c38fa  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008c3900  6a02                 push 2
// 008c3902  55                   push ebp
// 008c3903  8d442428             lea eax, [esp + 0x28]
// 008c3907  50                   push eax
// 008c3908  8bcf                 mov ecx, edi
// 008c390a  ffd2                 call edx
// 008c390c  8b08                 mov ecx, dword ptr [eax]
// 008c390e  8b1580d79800         mov edx, dword ptr [0x98d780]
// 008c3914  894c2418             mov dword ptr [esp + 0x18], ecx
// 008c3918  8b4004               mov eax, dword ptr [eax + 4]
// 008c391b  55                   push ebp
// 008c391c  50                   push eax
// 008c391d  51                   push ecx
// 008c391e  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 008c3925  89442428             mov dword ptr [esp + 0x28], eax
// 008c3929  8b842490010000       mov eax, dword ptr [esp + 0x190]
// 008c3930  83c0fc               add eax, -4
// 008c3933  50                   push eax
// 008c3934  83c1f9               add ecx, -7
// 008c3937  51                   push ecx
// 008c3938  52                   push edx
// 008c3939  8bcf                 mov ecx, edi
// 008c393b  e8ec02f3ff           call 0x7f3c2c
// 008c3940  6a66                 push 0x66
// 008c3942  8bce                 mov ecx, esi
// 008c3944  e8e70df3ff           call 0x7f4730
// 008c3949  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c394c  8d8c2470010000       lea ecx, [esp + 0x170]
// 008c3953  51                   push ecx
// 008c3954  52                   push edx
// 008c3955  ff1570cc9800         call dword ptr [0x98cc70]
// 008c395b  8d842470010000       lea eax, [esp + 0x170]
// 008c3962  50                   push eax
// 008c3963  8bce                 mov ecx, esi
// 008c3965  e86e0ef3ff           call 0x7f47d8
// 008c396a  8d7c2478             lea edi, [esp + 0x78]
// 008c396e  8d9ea4020000         lea ebx, [esi + 0x2a4]
// 008c3974  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 008c397c  8d642400             lea esp, [esp]
// 008c3980  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 008c3987  8b17                 mov edx, dword ptr [edi]
// 008c3989  8b842474010000       mov eax, dword ptr [esp + 0x174]
// 008c3990  6bd20d               imul edx, edx, 0xd
// 008c3993  894c2420             mov dword ptr [esp + 0x20], ecx
// 008c3997  83c10b               add ecx, 0xb
// 008c399a  894c2428             mov dword ptr [esp + 0x28], ecx
// 008c399e  8b4f04               mov ecx, dword ptr [edi + 4]
// 008c39a1  6bc90d               imul ecx, ecx, 0xd
// 008c39a4  83c0fc               add eax, -4
// 008c39a7  89442424             mov dword ptr [esp + 0x24], eax
// 008c39ab  83c00b               add eax, 0xb
// 008c39ae  51                   push ecx
// 008c39af  89442430             mov dword ptr [esp + 0x30], eax
// 008c39b3  52                   push edx
// 008c39b4  8d442428             lea eax, [esp + 0x28]
// 008c39b8  50                   push eax
// 008c39b9  ff156ccc9800         call dword ptr [0x98cc6c]
// 008c39bf  8b47fc               mov eax, dword ptr [edi - 4]
// 008c39c2  8b13                 mov edx, dword ptr [ebx]
// 008c39c4  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008c39ca  50                   push eax
// 008c39cb  56                   push esi
// 008c39cc  8d4c2428             lea ecx, [esp + 0x28]
// 008c39d0  51                   push ecx
// 008c39d1  6800010050           push 0x50000100
// 008c39d6  55                   push ebp
// 008c39d7  8bcb                 mov ecx, ebx
// 008c39d9  ffd2                 call edx
// 008c39db  8b47f8               mov eax, dword ptr [edi - 8]
// 008c39de  50                   push eax
// 008c39df  8bcb                 mov ecx, ebx
// 008c39e1  e84ae5ffff           call 0x8c1f30
// 008c39e6  83c710               add edi, 0x10
// 008c39e9  83c35c               add ebx, 0x5c
// 008c39ec  836c241001           sub dword ptr [esp + 0x10], 1
// 008c39f1  758d                 jne 0x8c3980
// 008c39f3  8d86a4020000         lea eax, [esi + 0x2a4]
// 008c39f9  50                   push eax
// 008c39fa  8bce                 mov ecx, esi
// 008c39fc  e8dfedffff           call 0x8c27e0
// 008c3a01  56                   push esi
// 008c3a02  8dbec0080000         lea edi, [esi + 0x8c0]
// 008c3a08  6a69                 push 0x69
// 008c3a0a  8bcf                 mov ecx, edi
// 008c3a0c  e8292c0600           call 0x92663a
// 008c3a11  68fffeff00           push 0xfffeff
// 008c3a16  8bcf                 mov ecx, edi
// 008c3a18  e813e5ffff           call 0x8c1f30
// 008c3a1d  56                   push esi
// 008c3a1e  6a6a                 push 0x6a
// 008c3a20  8d8e64080000         lea ecx, [esi + 0x864]
// 008c3a26  e80f2c0600           call 0x92663a
// 008c3a2b  56                   push esi
// 008c3a2c  6a64                 push 0x64
// 008c3a2e  8d8e1c090000         lea ecx, [esi + 0x91c]
// 008c3a34  e807dbffff           call 0x8c1540
// 008c3a39  56                   push esi
// 008c3a3a  6a65                 push 0x65
// 008c3a3c  8d8ef4090000         lea ecx, [esi + 0x9f4]
// 008c3a42  e859d8ffff           call 0x8c12a0
// 008c3a47  39ae680a0000         cmp dword ptr [esi + 0xa68], ebp
// 008c3a4d  7423                 je 0x8c3a72
// 008c3a4f  68b0647f00           push 0x7f64b0
// 008c3a54  b9d0bab900           mov ecx, 0xb9bad0
// 008c3a59  e8de290600           call 0x92643c
// 008c3a5e  3bc5                 cmp eax, ebp
// 008c3a60  7505                 jne 0x8c3a67
// 008c3a62  e8a500f3ff           call 0x7f3b0c
// 008c3a67  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c3a6a  51                   push ecx
// 008c3a6b  8bc8                 mov ecx, eax
// 008c3a6d  e84ebcfaff           call 0x86f6c0
// 008c3a72  5f                   pop edi
// 008c3a73  5e                   pop esi
// 008c3a74  5d                   pop ebp
// 008c3a75  b801000000           mov eax, 1
// 008c3a7a  5b                   pop ebx
// 008c3a7b  81c490010000         add esp, 0x190
// 008c3a81  c3                   ret 
// copied from an identical function in another client (function ?OnInitDialog@CXTPImageEditorDlg@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp