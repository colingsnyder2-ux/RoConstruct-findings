// roc 2011-06 008f3560  unit: CXTCaptionPopupWnd  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3560
//
// 008f3560  6aff                 push -1
// 008f3562  6879eca000           push 0xa0ec79
// 008f3567  64a100000000         mov eax, dword ptr fs:[0]
// 008f356d  50                   push eax
// 008f356e  83ec20               sub esp, 0x20
// 008f3571  53                   push ebx
// 008f3572  55                   push ebp
// 008f3573  56                   push esi
// 008f3574  57                   push edi
// 008f3575  a12058c900           mov eax, dword ptr [0xc95820]
// 008f357a  33c4                 xor eax, esp
// 008f357c  50                   push eax
// 008f357d  8d442434             lea eax, [esp + 0x34]
// 008f3581  64a300000000         mov dword ptr fs:[0], eax
// 008f3587  8bf1                 mov esi, ecx
// 008f3589  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008f358d  33db                 xor ebx, ebx
// 008f358f  3bfb                 cmp edi, ebx
// 008f3591  0f84e4000000         je 0x8f367b
// 008f3597  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f359a  50                   push eax
// 008f359b  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f35a1  85c0                 test eax, eax
// 008f35a3  0f84d2000000         je 0x8f367b
// 008f35a9  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008f35ad  897e54               mov dword ptr [esi + 0x54], edi
// 008f35b0  3beb                 cmp ebp, ebx
// 008f35b2  0f84c3000000         je 0x8f367b
// 008f35b8  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008f35bb  51                   push ecx
// 008f35bc  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f35c2  85c0                 test eax, eax
// 008f35c4  0f84b1000000         je 0x8f367b
// 008f35ca  8b442444             mov eax, dword ptr [esp + 0x44]
// 008f35ce  53                   push ebx
// 008f35cf  53                   push ebx
// 008f35d0  896e58               mov dword ptr [esi + 0x58], ebp
// 008f35d3  8b5004               mov edx, dword ptr [eax + 4]
// 008f35d6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008f35d9  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 008f35dc  8b38                 mov edi, dword ptr [eax]
// 008f35de  8b4008               mov eax, dword ptr [eax + 8]
// 008f35e1  55                   push ebp
// 008f35e2  2bca                 sub ecx, edx
// 008f35e4  51                   push ecx
// 008f35e5  2bc7                 sub eax, edi
// 008f35e7  50                   push eax
// 008f35e8  52                   push edx
// 008f35e9  57                   push edi
// 008f35ea  6800004090           push 0x90400000
// 008f35ef  68cabea500           push 0xa5beca
// 008f35f4  6838a9ad00           push 0xada938
// 008f35f9  6880000000           push 0x80
// 008f35fe  8bce                 mov ecx, esi
// 008f3600  e8d16af1ff           call 0x80a0d6
// 008f3605  85c0                 test eax, eax
// 008f3607  7472                 je 0x8f367b
// 008f3609  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008f360c  56                   push esi
// 008f360d  e8ee76f5ff           call 0x84ad00
// 008f3612  8d4c2448             lea ecx, [esp + 0x48]
// 008f3616  89465c               mov dword ptr [esi + 0x5c], eax
// 008f3619  ff15b42da400         call dword ptr [0xa42db4]
// 008f361f  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008f3623  e818c9f8ff           call 0x87ff40
// 008f3628  8b10                 mov edx, dword ptr [eax]
// 008f362a  8b5208               mov edx, dword ptr [edx + 8]
// 008f362d  6883240000           push 0x2483
// 008f3632  8d4c244c             lea ecx, [esp + 0x4c]
// 008f3636  51                   push ecx
// 008f3637  8bc8                 mov ecx, eax
// 008f3639  ffd2                 call edx
// 008f363b  8b7e60               mov edi, dword ptr [esi + 0x60]
// 008f363e  8d6e60               lea ebp, [esi + 0x60]
// 008f3641  68ffff0000           push 0xffff
// 008f3646  8d4c2428             lea ecx, [esp + 0x28]
// 008f364a  e8a196f6ff           call 0x85ccf0
// 008f364f  50                   push eax
// 008f3650  6801020010           push 0x10000201
// 008f3655  6a02                 push 2
// 008f3657  8d4c2458             lea ecx, [esp + 0x58]
// 008f365b  ff15c82da400         call dword ptr [0xa42dc8]
// 008f3661  50                   push eax
// 008f3662  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 008f3668  56                   push esi
// 008f3669  8bcd                 mov ecx, ebp
// 008f366b  ffd0                 call eax
// 008f366d  85c0                 test eax, eax
// 008f366f  7522                 jne 0x8f3693
// 008f3671  8d4c2448             lea ecx, [esp + 0x48]
// 008f3675  ff15082ea400         call dword ptr [0xa42e08]
// 008f367b  33c0                 xor eax, eax
// 008f367d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f3681  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3688  59                   pop ecx
// 008f3689  5f                   pop edi
// 008f368a  5e                   pop esi
// 008f368b  5d                   pop ebp
// 008f368c  5b                   pop ebx
// 008f368d  83c42c               add esp, 0x2c
// 008f3690  c20c00               ret 0xc
// 008f3693  8b8ef0010000         mov ecx, dword ptr [esi + 0x1f0]
// 008f3699  8dbef0010000         lea edi, [esi + 0x1f0]
// 008f369f  6a64                 push 0x64
// 008f36a1  894c2450             mov dword ptr [esp + 0x50], ecx
// 008f36a5  56                   push esi
// 008f36a6  8d4c242c             lea ecx, [esp + 0x2c]
// 008f36aa  889ee1000000         mov byte ptr [esi + 0xe1], bl
// 008f36b0  e83b96f6ff           call 0x85ccf0
// 008f36b5  8b542454             mov edx, dword ptr [esp + 0x54]
// 008f36b9  50                   push eax
// 008f36ba  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008f36c0  684b0f0010           push 0x10000f4b
// 008f36c5  53                   push ebx
// 008f36c6  8bcf                 mov ecx, edi
// 008f36c8  ffd0                 call eax
// 008f36ca  85c0                 test eax, eax
// 008f36cc  74a3                 je 0x8f3671
// 008f36ce  8d4c2414             lea ecx, [esp + 0x14]
// 008f36d2  89ae9c020000         mov dword ptr [esi + 0x29c], ebp
// 008f36d8  e83171f1ff           call 0x80a80e
// 008f36dd  6a01                 push 1
// 008f36df  53                   push ebx
// 008f36e0  6a09                 push 9
// 008f36e2  6a0f                 push 0xf
// 008f36e4  6a10                 push 0x10
// 008f36e6  8d4c2428             lea ecx, [esp + 0x28]
// 008f36ea  c644245001           mov byte ptr [esp + 0x50], 1
// 008f36ef  e81471f1ff           call 0x80a808
// 008f36f4  895c2420             mov dword ptr [esp + 0x20], ebx
// 008f36f8  c744241c90e7a500     mov dword ptr [esp + 0x1c], 0xa5e790
// 008f3700  c644243c02           mov byte ptr [esp + 0x3c], 2
// 008f3705  e836c8f8ff           call 0x87ff40
// 008f370a  8b10                 mov edx, dword ptr [eax]
// 008f370c  8b5214               mov edx, dword ptr [edx + 0x14]
// 008f370f  6856240000           push 0x2456
// 008f3714  8d4c2420             lea ecx, [esp + 0x20]
// 008f3718  51                   push ecx
// 008f3719  8bc8                 mov ecx, eax
// 008f371b  ffd2                 call edx
// 008f371d  68ff00ff00           push 0xff00ff
// 008f3722  8d442420             lea eax, [esp + 0x20]
// 008f3726  50                   push eax
// 008f3727  8d4c241c             lea ecx, [esp + 0x1c]
// 008f372b  e8f01fb2ff           call 0x415720
// 008f3730  53                   push ebx
// 008f3731  8d4c2418             lea ecx, [esp + 0x18]
// 008f3735  e8f6cbf2ff           call 0x820330
// 008f373a  50                   push eax
// 008f373b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008f3741  e84afa0000           call 0x903190
// 008f3746  6a01                 push 1
// 008f3748  8d4c2418             lea ecx, [esp + 0x18]
// 008f374c  e8dfcbf2ff           call 0x820330
// 008f3751  50                   push eax
// 008f3752  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008f3758  e833fa0000           call 0x903190
// 008f375d  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 008f3763  8b8eac020000         mov ecx, dword ptr [esi + 0x2ac]
// 008f3769  8b1f                 mov ebx, dword ptr [edi]
// 008f376b  6a01                 push 1
// 008f376d  50                   push eax
// 008f376e  ba10000000           mov edx, 0x10
// 008f3773  51                   push ecx
// 008f3774  8d6aff               lea ebp, [edx - 1]
// 008f3777  55                   push ebp
// 008f3778  52                   push edx
// 008f3779  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 008f377f  8bcf                 mov ecx, edi
// 008f3781  ffd2                 call edx
// 008f3783  8d4c2414             lea ecx, [esp + 0x14]
// 008f3787  e88e950d00           call 0x9ccd1a
// 008f378c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f378f  6a00                 push 0
// 008f3791  6a0a                 push 0xa
// 008f3793  6a01                 push 1
// 008f3795  50                   push eax
// 008f3796  ff15741ca400         call dword ptr [0xa41c74]
// 008f379c  8d4c241c             lea ecx, [esp + 0x1c]
// 008f37a0  c644243c01           mov byte ptr [esp + 0x3c], 1
// 008f37a5  c744241c90e7a500     mov dword ptr [esp + 0x1c], 0xa5e790
// 008f37ad  e87e01b2ff           call 0x413930
// 008f37b2  8d4c2414             lea ecx, [esp + 0x14]
// 008f37b6  c644243c00           mov byte ptr [esp + 0x3c], 0
// 008f37bb  e83070f1ff           call 0x80a7f0
// 008f37c0  8d4c2448             lea ecx, [esp + 0x48]
// 008f37c4  ff15082ea400         call dword ptr [0xa42e08]
// 008f37ca  8d45f2               lea eax, [ebp - 0xe]
// 008f37cd  e9abfeffff           jmp 0x8f367d
// copied from an identical function in another client (function ?Create@CXTCaptionPopupWnd@@UAEHABVCRect@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp