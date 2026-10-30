// roc 2009-06 007a3380  unit: XTPPaintThemes::CXTPDefaultTheme  size: 1636 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a3380
//
// 007a3380  6aff                 push -1
// 007a3382  6851c18700           push 0x87c151
// 007a3387  64a100000000         mov eax, dword ptr fs:[0]
// 007a338d  50                   push eax
// 007a338e  83ec68               sub esp, 0x68
// 007a3391  53                   push ebx
// 007a3392  55                   push ebp
// 007a3393  56                   push esi
// 007a3394  57                   push edi
// 007a3395  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a339a  33c4                 xor eax, esp
// 007a339c  50                   push eax
// 007a339d  8d44247c             lea eax, [esp + 0x7c]
// 007a33a1  64a300000000         mov dword ptr fs:[0], eax
// 007a33a7  8bf9                 mov edi, ecx
// 007a33a9  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007a33b0  85c0                 test eax, eax
// 007a33b2  7414                 je 0x7a33c8
// 007a33b4  8b4074               mov eax, dword ptr [eax + 0x74]
// 007a33b7  83787400             cmp dword ptr [eax + 0x74], 0
// 007a33bb  7506                 jne 0x7a33c3
// 007a33bd  83787800             cmp dword ptr [eax + 0x78], 0
// 007a33c1  7405                 je 0x7a33c8
// 007a33c3  83c074               add eax, 0x74
// 007a33c6  eb0c                 jmp 0x7a33d4
// 007a33c8  6a00                 push 0
// 007a33ca  8d442428             lea eax, [esp + 0x28]
// 007a33ce  50                   push eax
// 007a33cf  e8ccfdf7ff           call 0x7231a0
// 007a33d4  8b10                 mov edx, dword ptr [eax]
// 007a33d6  8b4004               mov eax, dword ptr [eax + 4]
// 007a33d9  8d4804               lea ecx, [eax + 4]
// 007a33dc  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 007a33e2  3bc8                 cmp ecx, eax
// 007a33e4  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a33e8  894c2418             mov dword ptr [esp + 0x18], ecx
// 007a33ec  7f04                 jg 0x7a33f2
// 007a33ee  89442418             mov dword ptr [esp + 0x18], eax
// 007a33f2  8d4a04               lea ecx, [edx + 4]
// 007a33f5  3bc8                 cmp ecx, eax
// 007a33f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 007a33fb  7f04                 jg 0x7a3401
// 007a33fd  89442414             mov dword ptr [esp + 0x14], eax
// 007a3401  83bc24ac00000000     cmp dword ptr [esp + 0xac], 0
// 007a3409  0f84ab050000         je 0x7a39ba
// 007a340f  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 007a3416  6a0f                 push 0xf
// 007a3418  8bcf                 mov ecx, edi
// 007a341a  e861f3f7ff           call 0x722780
// 007a341f  50                   push eax
// 007a3420  85ed                 test ebp, ebp
// 007a3422  7525                 jne 0x7a3449
// 007a3424  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007a342b  51                   push ecx
// 007a342c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a3433  e89863f7ff           call 0x7197d0
// 007a3438  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007a343f  8928                 mov dword ptr [eax], ebp
// 007a3441  896804               mov dword ptr [eax + 4], ebp
// 007a3444  e985050000           jmp 0x7a39ce
// 007a3449  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 007a3450  8d94249c000000       lea edx, [esp + 0x9c]
// 007a3457  52                   push edx
// 007a3458  8bce                 mov ecx, esi
// 007a345a  e87163f7ff           call 0x7197d0
// 007a345f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007a3466  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a346d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 007a3474  8b9dfc000000         mov ebx, dword ptr [ebp + 0xfc]
// 007a347a  48                   dec eax
// 007a347b  41                   inc ecx
// 007a347c  89442424             mov dword ptr [esp + 0x24], eax
// 007a3480  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007a3487  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007a348b  8bcd                 mov ecx, ebp
// 007a348d  89542460             mov dword ptr [esp + 0x60], edx
// 007a3491  89442468             mov dword ptr [esp + 0x68], eax
// 007a3495  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 007a349c  e8cfc1f7ff           call 0x71f670
// 007a34a1  85c0                 test eax, eax
// 007a34a3  7534                 jne 0x7a34d9
// 007a34a5  83fb02               cmp ebx, 2
// 007a34a8  7439                 je 0x7a34e3
// 007a34aa  ba01000000           mov edx, 1
// 007a34af  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 007a34b5  85c0                 test eax, eax
// 007a34b7  753c                 jne 0x7a34f5
// 007a34b9  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 007a34bf  85c0                 test eax, eax
// 007a34c1  7f32                 jg 0x7a34f5
// 007a34c3  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007a34c9  85c9                 test ecx, ecx
// 007a34cb  741a                 je 0x7a34e7
// 007a34cd  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007a34d0  85c0                 test eax, eax
// 007a34d2  7f21                 jg 0x7a34f5
// 007a34d4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007a34d7  eb14                 jmp 0x7a34ed
// 007a34d9  83f802               cmp eax, 2
// 007a34dc  74cc                 je 0x7a34aa
// 007a34de  83f803               cmp eax, 3
// 007a34e1  74c7                 je 0x7a34aa
// 007a34e3  33d2                 xor edx, edx
// 007a34e5  ebc8                 jmp 0x7a34af
// 007a34e7  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 007a34ed  85c0                 test eax, eax
// 007a34ef  0f841c010000         je 0x7a3611
// 007a34f5  85d2                 test edx, edx
// 007a34f7  0f8414010000         je 0x7a3611
// 007a34fd  8b5500               mov edx, dword ptr [ebp]
// 007a3500  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a3504  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 007a350a  50                   push eax
// 007a350b  8bcd                 mov ecx, ebp
// 007a350d  ffd2                 call edx
// 007a350f  8bd8                 mov ebx, eax
// 007a3511  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007a3515  85db                 test ebx, ebx
// 007a3517  0f84f4000000         je 0x7a3611
// 007a351d  8bcb                 mov ecx, ebx
// 007a351f  e88c99faff           call 0x74ceb0
// 007a3524  8be8                 mov ebp, eax
// 007a3526  0faf6c242c           imul ebp, dword ptr [esp + 0x2c]
// 007a352b  8bcb                 mov ecx, ebx
// 007a352d  e8ee4c0200           call 0x7c8220
// 007a3532  8bc8                 mov ecx, eax
// 007a3534  8bc5                 mov eax, ebp
// 007a3536  99                   cdq 
// 007a3537  f7f9                 idiv ecx
// 007a3539  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 007a3540  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007a3547  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a354b  6a05                 push 5
// 007a354d  6a01                 push 1
// 007a354f  6a00                 push 0
// 007a3551  6a00                 push 0
// 007a3553  6a01                 push 1
// 007a3555  6a00                 push 0
// 007a3557  8d1c2a               lea ebx, [edx + ebp]
// 007a355a  8b17                 mov edx, dword ptr [edi]
// 007a355c  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 007a3562  894c2468             mov dword ptr [esp + 0x68], ecx
// 007a3566  896c2464             mov dword ptr [esp + 0x64], ebp
// 007a356a  89442448             mov dword ptr [esp + 0x48], eax
// 007a356e  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 007a3575  89442470             mov dword ptr [esp + 0x70], eax
// 007a3579  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 007a3580  50                   push eax
// 007a3581  83ec10               sub esp, 0x10
// 007a3584  8bc4                 mov eax, esp
// 007a3586  8928                 mov dword ptr [eax], ebp
// 007a3588  894804               mov dword ptr [eax + 4], ecx
// 007a358b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007a3592  895808               mov dword ptr [eax + 8], ebx
// 007a3595  89480c               mov dword ptr [eax + 0xc], ecx
// 007a3598  56                   push esi
// 007a3599  8bcf                 mov ecx, edi
// 007a359b  ffd2                 call edx
// 007a359d  8b442458             mov eax, dword ptr [esp + 0x58]
// 007a35a1  2b442450             sub eax, dword ptr [esp + 0x50]
// 007a35a5  6a00                 push 0
// 007a35a7  99                   cdq 
// 007a35a8  2bc2                 sub eax, edx
// 007a35aa  8bc8                 mov ecx, eax
// 007a35ac  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a35b0  99                   cdq 
// 007a35b1  2bc2                 sub eax, edx
// 007a35b3  d1f8                 sar eax, 1
// 007a35b5  d1f9                 sar ecx, 1
// 007a35b7  2bc8                 sub ecx, eax
// 007a35b9  034c2454             add ecx, dword ptr [esp + 0x54]
// 007a35bd  8bc3                 mov eax, ebx
// 007a35bf  2bc5                 sub eax, ebp
// 007a35c1  99                   cdq 
// 007a35c2  2bc2                 sub eax, edx
// 007a35c4  6a00                 push 0
// 007a35c6  8be8                 mov ebp, eax
// 007a35c8  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a35cc  6a00                 push 0
// 007a35ce  6a01                 push 1
// 007a35d0  99                   cdq 
// 007a35d1  2bc2                 sub eax, edx
// 007a35d3  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 007a35da  6a00                 push 0
// 007a35dc  52                   push edx
// 007a35dd  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a35e1  52                   push edx
// 007a35e2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a35e6  52                   push edx
// 007a35e7  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a35eb  d1f8                 sar eax, 1
// 007a35ed  d1fd                 sar ebp, 1
// 007a35ef  2be8                 sub ebp, eax
// 007a35f1  036c246c             add ebp, dword ptr [esp + 0x6c]
// 007a35f5  8b07                 mov eax, dword ptr [edi]
// 007a35f7  52                   push edx
// 007a35f8  51                   push ecx
// 007a35f9  55                   push ebp
// 007a35fa  56                   push esi
// 007a35fb  8bcf                 mov ecx, edi
// 007a35fd  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 007a3603  ffd0                 call eax
// 007a3605  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 007a360c  43                   inc ebx
// 007a360d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 007a3611  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 007a3618  85db                 test ebx, ebx
// 007a361a  742f                 je 0x7a364b
// 007a361c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007a3620  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a3624  6a0d                 push 0xd
// 007a3626  6a0d                 push 0xd
// 007a3628  83ec10               sub esp, 0x10
// 007a362b  8bc4                 mov eax, esp
// 007a362d  8908                 mov dword ptr [eax], ecx
// 007a362f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a3633  895004               mov dword ptr [eax + 4], edx
// 007a3636  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007a363d  894808               mov dword ptr [eax + 8], ecx
// 007a3640  56                   push esi
// 007a3641  8bcf                 mov ecx, edi
// 007a3643  89500c               mov dword ptr [eax + 0xc], edx
// 007a3646  e8a501f8ff           call 0x7237f0
// 007a364b  33c0                 xor eax, eax
// 007a364d  85db                 test ebx, ebx
// 007a364f  0f94c0               sete al
// 007a3652  8bcf                 mov ecx, edi
// 007a3654  8d04850e000000       lea eax, [eax*4 + 0xe]
// 007a365b  50                   push eax
// 007a365c  89442428             mov dword ptr [esp + 0x28], eax
// 007a3660  e81bf1f7ff           call 0x722780
// 007a3665  8b16                 mov edx, dword ptr [esi]
// 007a3667  89842494000000       mov dword ptr [esp + 0x94], eax
// 007a366e  50                   push eax
// 007a366f  8b4238               mov eax, dword ptr [edx + 0x38]
// 007a3672  8bce                 mov ecx, esi
// 007a3674  ffd0                 call eax
// 007a3676  6a01                 push 1
// 007a3678  8bce                 mov ecx, esi
// 007a367a  e887880a00           call 0x84bf06
// 007a367f  8b5500               mov edx, dword ptr [ebp]
// 007a3682  8b5258               mov edx, dword ptr [edx + 0x58]
// 007a3685  8d8424ac000000       lea eax, [esp + 0xac]
// 007a368c  50                   push eax
// 007a368d  8bcd                 mov ecx, ebp
// 007a368f  ffd2                 call edx
// 007a3691  8d8424ac000000       lea eax, [esp + 0xac]
// 007a3698  50                   push eax
// 007a3699  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 007a36a4  e867f3f7ff           call 0x722a10
// 007a36a9  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007a36b0  83c404               add esp, 4
// 007a36b3  85c9                 test ecx, ecx
// 007a36b5  741d                 je 0x7a36d4
// 007a36b7  e8f45ff8ff           call 0x7296b0
// 007a36bc  85c0                 test eax, eax
// 007a36be  7414                 je 0x7a36d4
// 007a36c0  8b17                 mov edx, dword ptr [edi]
// 007a36c2  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 007a36c8  8d8424ac000000       lea eax, [esp + 0xac]
// 007a36cf  50                   push eax
// 007a36d0  8bcf                 mov ecx, edi
// 007a36d2  ffd2                 call edx
// 007a36d4  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007a36db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a36df  8d540104             lea edx, [ecx + eax + 4]
// 007a36e3  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 007a36ea  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007a36f1  89442440             mov dword ptr [esp + 0x40], eax
// 007a36f5  8d87f0000000         lea eax, [edi + 0xf0]
// 007a36fb  8954243c             mov dword ptr [esp + 0x3c], edx
// 007a36ff  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 007a3706  50                   push eax
// 007a3707  894c2448             mov dword ptr [esp + 0x48], ecx
// 007a370b  56                   push esi
// 007a370c  8d4c2474             lea ecx, [esp + 0x74]
// 007a3710  89542450             mov dword ptr [esp + 0x50], edx
// 007a3714  e847d1fcff           call 0x770860
// 007a3719  8b2e                 mov ebp, dword ptr [esi]
// 007a371b  6824880000           push 0x8824
// 007a3720  8d4c2440             lea ecx, [esp + 0x40]
// 007a3724  51                   push ecx
// 007a3725  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007a372c  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 007a3734  ff1554fb8900         call dword ptr [0x89fb54]
// 007a373a  50                   push eax
// 007a373b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 007a3742  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a3748  8b5570               mov edx, dword ptr [ebp + 0x70]
// 007a374b  50                   push eax
// 007a374c  8bce                 mov ecx, esi
// 007a374e  ffd2                 call edx
// 007a3750  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007a3757  83f802               cmp eax, 2
// 007a375a  740e                 je 0x7a376a
// 007a375c  83f803               cmp eax, 3
// 007a375f  7409                 je 0x7a376a
// 007a3761  83f804               cmp eax, 4
// 007a3764  0f858e000000         jne 0x7a37f8
// 007a376a  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007a3771  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007a3778  03c1                 add eax, ecx
// 007a377a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007a3781  99                   cdq 
// 007a3782  2bc2                 sub eax, edx
// 007a3784  d1f8                 sar eax, 1
// 007a3786  8d58fb               lea ebx, [eax - 5]
// 007a3789  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 007a3790  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 007a3797  53                   push ebx
// 007a3798  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 007a379f  83c1f9               add ecx, -7
// 007a37a2  8d6805               lea ebp, [eax + 5]
// 007a37a5  55                   push ebp
// 007a37a6  8d51fb               lea edx, [ecx - 5]
// 007a37a9  52                   push edx
// 007a37aa  53                   push ebx
// 007a37ab  52                   push edx
// 007a37ac  50                   push eax
// 007a37ad  51                   push ecx
// 007a37ae  56                   push esi
// 007a37af  e8fcdbfcff           call 0x7713b0
// 007a37b4  83c420               add esp, 0x20
// 007a37b7  83bc249000000004     cmp dword ptr [esp + 0x90], 4
// 007a37bf  7530                 jne 0x7a37f1
// 007a37c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a37c5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007a37cc  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007a37d3  52                   push edx
// 007a37d4  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007a37db  49                   dec ecx
// 007a37dc  51                   push ecx
// 007a37dd  83c0ec               add eax, -0x14
// 007a37e0  50                   push eax
// 007a37e1  42                   inc edx
// 007a37e2  52                   push edx
// 007a37e3  50                   push eax
// 007a37e4  56                   push esi
// 007a37e5  8bcf                 mov ecx, edi
// 007a37e7  e84404f8ff           call 0x723c30
// 007a37ec  e9ab010000           jmp 0x7a399c
// 007a37f1  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007a37f8  83f805               cmp eax, 5
// 007a37fb  7409                 je 0x7a3806
// 007a37fd  83f806               cmp eax, 6
// 007a3800  0f8596010000         jne 0x7a399c
// 007a3806  8d44243c             lea eax, [esp + 0x3c]
// 007a380a  50                   push eax
// 007a380b  ff15c8ee8900         call dword ptr [0x89eec8]
// 007a3811  8b1e                 mov ebx, dword ptr [esi]
// 007a3813  6820040000           push 0x420
// 007a3818  8d4c2440             lea ecx, [esp + 0x40]
// 007a381c  51                   push ecx
// 007a381d  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007a3824  ff1554fb8900         call dword ptr [0x89fb54]
// 007a382a  50                   push eax
// 007a382b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 007a3832  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a3838  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007a383b  50                   push eax
// 007a383c  8bce                 mov ecx, esi
// 007a383e  ffd2                 call edx
// 007a3840  8b4e08               mov ecx, dword ptr [esi + 8]
// 007a3843  8d44241c             lea eax, [esp + 0x1c]
// 007a3847  50                   push eax
// 007a3848  6a01                 push 1
// 007a384a  68f8338b00           push 0x8b33f8
// 007a384f  51                   push ecx
// 007a3850  ff1550e18900         call dword ptr [0x89e150]
// 007a3856  8b542444             mov edx, dword ptr [esp + 0x44]
// 007a385a  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 007a385e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a3865  03542414             add edx, dword ptr [esp + 0x14]
// 007a3869  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a386d  8d540a09             lea edx, [edx + ecx + 9]
// 007a3871  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007a3878  83c002               add eax, 2
// 007a387b  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 007a3882  8be9                 mov ebp, ecx
// 007a3884  2be8                 sub ebp, eax
// 007a3886  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007a388d  89442438             mov dword ptr [esp + 0x38], eax
// 007a3891  33c0                 xor eax, eax
// 007a3893  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 007a389a  6a05                 push 5
// 007a389c  0f94c0               sete al
// 007a389f  894c2438             mov dword ptr [esp + 0x38], ecx
// 007a38a3  8d44000d             lea eax, [eax + eax + 0xd]
// 007a38a7  50                   push eax
// 007a38a8  83ec10               sub esp, 0x10
// 007a38ab  8bc4                 mov eax, esp
// 007a38ad  8910                 mov dword ptr [eax], edx
// 007a38af  8bd3                 mov edx, ebx
// 007a38b1  895004               mov dword ptr [eax + 4], edx
// 007a38b4  894808               mov dword ptr [eax + 8], ecx
// 007a38b7  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 007a38be  89480c               mov dword ptr [eax + 0xc], ecx
// 007a38c1  56                   push esi
// 007a38c2  8bcf                 mov ecx, edi
// 007a38c4  e827fff7ff           call 0x7237f0
// 007a38c9  83bc249000000005     cmp dword ptr [esp + 0x90], 5
// 007a38d1  0f85c5000000         jne 0x7a399c
// 007a38d7  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 007a38df  6a0f                 push 0xf
// 007a38e1  7549                 jne 0x7a392c
// 007a38e3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007a38e7  2bc3                 sub eax, ebx
// 007a38e9  898424ac000000       mov dword ptr [esp + 0xac], eax
// 007a38f0  8b442438             mov eax, dword ptr [esp + 0x38]
// 007a38f4  2bc5                 sub eax, ebp
// 007a38f6  8bcf                 mov ecx, edi
// 007a38f8  89842494000000       mov dword ptr [esp + 0x94], eax
// 007a38ff  e87ceef7ff           call 0x722780
// 007a3904  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 007a390b  50                   push eax
// 007a390c  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007a3913  83c2fc               add edx, -4
// 007a3916  52                   push edx
// 007a3917  83c0fc               add eax, -4
// 007a391a  50                   push eax
// 007a391b  8d4b02               lea ecx, [ebx + 2]
// 007a391e  51                   push ecx
// 007a391f  8d5502               lea edx, [ebp + 2]
// 007a3922  52                   push edx
// 007a3923  8bce                 mov ecx, esi
// 007a3925  e806860a00           call 0x84bf30
// 007a392a  eb22                 jmp 0x7a394e
// 007a392c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a3930  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007a3934  6a0d                 push 0xd
// 007a3936  83ec10               sub esp, 0x10
// 007a3939  8bc4                 mov eax, esp
// 007a393b  8928                 mov dword ptr [eax], ebp
// 007a393d  895804               mov dword ptr [eax + 4], ebx
// 007a3940  894808               mov dword ptr [eax + 8], ecx
// 007a3943  56                   push esi
// 007a3944  8bcf                 mov ecx, edi
// 007a3946  89500c               mov dword ptr [eax + 0xc], edx
// 007a3949  e8a2fef7ff           call 0x7237f0
// 007a394e  b801000000           mov eax, 1
// 007a3953  29442434             sub dword ptr [esp + 0x34], eax
// 007a3957  29442438             sub dword ptr [esp + 0x38], eax
// 007a395b  03e8                 add ebp, eax
// 007a395d  03d8                 add ebx, eax
// 007a395f  8b07                 mov eax, dword ptr [edi]
// 007a3961  6a12                 push 0x12
// 007a3963  8bcf                 mov ecx, edi
// 007a3965  898424ac000000       mov dword ptr [esp + 0xac], eax
// 007a396c  e80feef7ff           call 0x722780
// 007a3971  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007a3975  8b542438             mov edx, dword ptr [esp + 0x38]
// 007a3979  50                   push eax
// 007a397a  83ec10               sub esp, 0x10
// 007a397d  8bc4                 mov eax, esp
// 007a397f  8928                 mov dword ptr [eax], ebp
// 007a3981  895804               mov dword ptr [eax + 4], ebx
// 007a3984  894808               mov dword ptr [eax + 8], ecx
// 007a3987  89500c               mov dword ptr [eax + 0xc], edx
// 007a398a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 007a3991  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 007a3997  56                   push esi
// 007a3998  8bcf                 mov ecx, edi
// 007a399a  ffd2                 call edx
// 007a399c  8d4c246c             lea ecx, [esp + 0x6c]
// 007a39a0  c684248400000000     mov byte ptr [esp + 0x84], 0
// 007a39a8  e833cffcff           call 0x7708e0
// 007a39ad  8d8c24ac000000       lea ecx, [esp + 0xac]
// 007a39b4  ff1510fd8900         call dword ptr [0x89fd10]
// 007a39ba  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007a39c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a39c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a39c9  8908                 mov dword ptr [eax], ecx
// 007a39cb  895004               mov dword ptr [eax + 4], edx
// 007a39ce  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007a39d2  64890d00000000       mov dword ptr fs:[0], ecx
// 007a39d9  59                   pop ecx
// 007a39da  5f                   pop edi
// 007a39db  5e                   pop esi
// 007a39dc  5d                   pop ebp
// 007a39dd  5b                   pop ebx
// 007a39de  83c474               add esp, 0x74
// 007a39e1  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDefaultTheme.cpp