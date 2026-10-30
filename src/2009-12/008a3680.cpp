// roc 2009-12 008a3680  unit: CXTPReportHyperlinks  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3680
//
// 008a3680  6aff                 push -1
// 008a3682  6832249600           push 0x962432
// 008a3687  64a100000000         mov eax, dword ptr fs:[0]
// 008a368d  50                   push eax
// 008a368e  83ec4c               sub esp, 0x4c
// 008a3691  53                   push ebx
// 008a3692  55                   push ebp
// 008a3693  56                   push esi
// 008a3694  57                   push edi
// 008a3695  a10052b600           mov eax, dword ptr [0xb65200]
// 008a369a  33c4                 xor eax, esp
// 008a369c  50                   push eax
// 008a369d  8d442460             lea eax, [esp + 0x60]
// 008a36a1  64a300000000         mov dword ptr fs:[0], eax
// 008a36a7  8bf1                 mov esi, ecx
// 008a36a9  33ed                 xor ebp, ebp
// 008a36ab  396e54               cmp dword ptr [esi + 0x54], ebp
// 008a36ae  7516                 jne 0x8a36c6
// 008a36b0  33c0                 xor eax, eax
// 008a36b2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008a36b6  64890d00000000       mov dword ptr fs:[0], ecx
// 008a36bd  59                   pop ecx
// 008a36be  5f                   pop edi
// 008a36bf  5e                   pop esi
// 008a36c0  5d                   pop ebp
// 008a36c1  5b                   pop ebx
// 008a36c2  83c458               add esp, 0x58
// 008a36c5  c3                   ret 
// 008a36c6  396e20               cmp dword ptr [esi + 0x20], ebp
// 008a36c9  74e5                 je 0x8a36b0
// 008a36cb  56                   push esi
// 008a36cc  8d4c2450             lea ecx, [esp + 0x50]
// 008a36d0  e80110f5ff           call 0x7f46d6
// 008a36d5  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a36d8  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008a36de  83c030               add eax, 0x30
// 008a36e1  50                   push eax
// 008a36e2  8d4c2450             lea ecx, [esp + 0x50]
// 008a36e6  51                   push ecx
// 008a36e7  8d4c2444             lea ecx, [esp + 0x44]
// 008a36eb  896c2470             mov dword ptr [esp + 0x70], ebp
// 008a36ef  e86c7ffaff           call 0x84b660
// 008a36f4  8b442454             mov eax, dword ptr [esp + 0x54]
// 008a36f8  8d542434             lea edx, [esp + 0x34]
// 008a36fc  52                   push edx
// 008a36fd  6a01                 push 1
// 008a36ff  6868619a00           push 0x9a6168
// 008a3704  50                   push eax
// 008a3705  c644247801           mov byte ptr [esp + 0x78], 1
// 008a370a  ff156cb19800         call dword ptr [0x98b16c]
// 008a3710  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a3713  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008a3717  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008a371d  55                   push ebp
// 008a371e  55                   push ebp
// 008a371f  68a1010000           push 0x1a1
// 008a3724  51                   push ecx
// 008a3725  83c705               add edi, 5
// 008a3728  ffd3                 call ebx
// 008a372a  3bc7                 cmp eax, edi
// 008a372c  7410                 je 0x8a373e
// 008a372e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a3731  0fb7d7               movzx edx, di
// 008a3734  52                   push edx
// 008a3735  55                   push ebp
// 008a3736  68a0010000           push 0x1a0
// 008a373b  50                   push eax
// 008a373c  ffd3                 call ebx
// 008a373e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008a3741  8bb9ec000000         mov edi, dword ptr [ecx + 0xec]
// 008a3747  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a374a  8b5730               mov edx, dword ptr [edi + 0x30]
// 008a374d  55                   push ebp
// 008a374e  55                   push ebp
// 008a374f  688b010000           push 0x18b
// 008a3754  50                   push eax
// 008a3755  897c242c             mov dword ptr [esp + 0x2c], edi
// 008a3759  89542438             mov dword ptr [esp + 0x38], edx
// 008a375d  896c2434             mov dword ptr [esp + 0x34], ebp
// 008a3761  ffd3                 call ebx
// 008a3763  8be8                 mov ebp, eax
// 008a3765  83ed01               sub ebp, 1
// 008a3768  7857                 js 0x8a37c1
// 008a376a  8d9b00000000         lea ebx, [ebx]
// 008a3770  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a3773  6a00                 push 0
// 008a3775  55                   push ebp
// 008a3776  6899010000           push 0x199
// 008a377b  51                   push ecx
// 008a377c  ffd3                 call ebx
// 008a377e  50                   push eax
// 008a377f  8bcf                 mov ecx, edi
// 008a3781  e8ba9cfcff           call 0x86d440
// 008a3786  8bf8                 mov edi, eax
// 008a3788  85ff                 test edi, edi
// 008a378a  7416                 je 0x8a37a2
// 008a378c  8bcf                 mov ecx, edi
// 008a378e  e82d030100           call 0x8b3ac0
// 008a3793  85c0                 test eax, eax
// 008a3795  750b                 jne 0x8a37a2
// 008a3797  8bcf                 mov ecx, edi
// 008a3799  e872e3e9ff           call 0x741b10
// 008a379e  85c0                 test eax, eax
// 008a37a0  7516                 jne 0x8a37b8
// 008a37a2  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a37a5  6a00                 push 0
// 008a37a7  55                   push ebp
// 008a37a8  6882010000           push 0x182
// 008a37ad  52                   push edx
// 008a37ae  ffd3                 call ebx
// 008a37b0  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008a37b8  83ed01               sub ebp, 1
// 008a37bb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a37bf  79af                 jns 0x8a3770
// 008a37c1  33c0                 xor eax, eax
// 008a37c3  39442428             cmp dword ptr [esp + 0x28], eax
// 008a37c7  89442418             mov dword ptr [esp + 0x18], eax
// 008a37cb  0f8e74010000         jle 0x8a3945
// 008a37d1  85c0                 test eax, eax
// 008a37d3  0f8c5d010000         jl 0x8a3936
// 008a37d9  3b4730               cmp eax, dword ptr [edi + 0x30]
// 008a37dc  0f8d54010000         jge 0x8a3936
// 008a37e2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008a37e5  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 008a37e8  8d0c81               lea ecx, [ecx + eax*4]
// 008a37eb  85ed                 test ebp, ebp
// 008a37ed  0f8443010000         je 0x8a3936
// 008a37f3  8bcd                 mov ecx, ebp
// 008a37f5  e8c6020100           call 0x8b3ac0
// 008a37fa  85c0                 test eax, eax
// 008a37fc  0f8530010000         jne 0x8a3932
// 008a3802  8bcd                 mov ecx, ebp
// 008a3804  e807e3e9ff           call 0x741b10
// 008a3809  85c0                 test eax, eax
// 008a380b  0f8421010000         je 0x8a3932
// 008a3811  8bcd                 mov ecx, ebp
// 008a3813  e85820c3ff           call 0x4d5870
// 008a3818  50                   push eax
// 008a3819  8bce                 mov ecx, esi
// 008a381b  e810feffff           call 0x8a3630
// 008a3820  85c0                 test eax, eax
// 008a3822  0f8d0a010000         jge 0x8a3932
// 008a3828  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008a382f  0f84ab000000         je 0x8a38e0
// 008a3835  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a3838  33ff                 xor edi, edi
// 008a383a  57                   push edi
// 008a383b  57                   push edi
// 008a383c  688b010000           push 0x18b
// 008a3841  52                   push edx
// 008a3842  ffd3                 call ebx
// 008a3844  85c0                 test eax, eax
// 008a3846  7e71                 jle 0x8a38b9
// 008a3848  57                   push edi
// 008a3849  8d442424             lea eax, [esp + 0x24]
// 008a384d  50                   push eax
// 008a384e  8bce                 mov ecx, esi
// 008a3850  e8bbfcffff           call 0x8a3510
// 008a3855  8d4c242c             lea ecx, [esp + 0x2c]
// 008a3859  51                   push ecx
// 008a385a  8bcd                 mov ecx, ebp
// 008a385c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 008a3861  e80a68f7ff           call 0x81a070
// 008a3866  8bc8                 mov ecx, eax
// 008a3868  c644246803           mov byte ptr [esp + 0x68], 3
// 008a386d  ff1580de9800         call dword ptr [0x98de80]
// 008a3873  50                   push eax
// 008a3874  8d4c2424             lea ecx, [esp + 0x24]
// 008a3878  ff1584de9800         call dword ptr [0x98de84]
// 008a387e  85c0                 test eax, eax
// 008a3880  8d4c242c             lea ecx, [esp + 0x2c]
// 008a3884  0f9f442417           setg byte ptr [esp + 0x17]
// 008a3889  ff15c0de9800         call dword ptr [0x98dec0]
// 008a388f  8d4c2420             lea ecx, [esp + 0x20]
// 008a3893  c644246801           mov byte ptr [esp + 0x68], 1
// 008a3898  ff15c0de9800         call dword ptr [0x98dec0]
// 008a389e  807c241700           cmp byte ptr [esp + 0x17], 0
// 008a38a3  7514                 jne 0x8a38b9
// 008a38a5  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a38a8  6a00                 push 0
// 008a38aa  6a00                 push 0
// 008a38ac  688b010000           push 0x18b
// 008a38b1  52                   push edx
// 008a38b2  47                   inc edi
// 008a38b3  ffd3                 call ebx
// 008a38b5  3bf8                 cmp edi, eax
// 008a38b7  7c8f                 jl 0x8a3848
// 008a38b9  8d442430             lea eax, [esp + 0x30]
// 008a38bd  50                   push eax
// 008a38be  8bcd                 mov ecx, ebp
// 008a38c0  e8ab67f7ff           call 0x81a070
// 008a38c5  8bc8                 mov ecx, eax
// 008a38c7  ff1580de9800         call dword ptr [0x98de80]
// 008a38cd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a38d0  50                   push eax
// 008a38d1  57                   push edi
// 008a38d2  6881010000           push 0x181
// 008a38d7  51                   push ecx
// 008a38d8  ffd3                 call ebx
// 008a38da  8d4c2430             lea ecx, [esp + 0x30]
// 008a38de  eb26                 jmp 0x8a3906
// 008a38e0  8d542434             lea edx, [esp + 0x34]
// 008a38e4  52                   push edx
// 008a38e5  8bcd                 mov ecx, ebp
// 008a38e7  e88467f7ff           call 0x81a070
// 008a38ec  8bc8                 mov ecx, eax
// 008a38ee  ff1580de9800         call dword ptr [0x98de80]
// 008a38f4  50                   push eax
// 008a38f5  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a38f8  6a00                 push 0
// 008a38fa  6880010000           push 0x180
// 008a38ff  50                   push eax
// 008a3900  ffd3                 call ebx
// 008a3902  8d4c2434             lea ecx, [esp + 0x34]
// 008a3906  8bf8                 mov edi, eax
// 008a3908  ff15c0de9800         call dword ptr [0x98dec0]
// 008a390e  85ff                 test edi, edi
// 008a3910  7c1c                 jl 0x8a392e
// 008a3912  8bcd                 mov ecx, ebp
// 008a3914  e8571fc3ff           call 0x4d5870
// 008a3919  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a391c  50                   push eax
// 008a391d  57                   push edi
// 008a391e  689a010000           push 0x19a
// 008a3923  51                   push ecx
// 008a3924  ffd3                 call ebx
// 008a3926  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008a392e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a3932  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a3936  40                   inc eax
// 008a3937  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008a393b  89442418             mov dword ptr [esp + 0x18], eax
// 008a393f  0f8c8cfeffff         jl 0x8a37d1
// 008a3945  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a3948  6a00                 push 0
// 008a394a  6a00                 push 0
// 008a394c  688b010000           push 0x18b
// 008a3951  52                   push edx
// 008a3952  ffd3                 call ebx
// 008a3954  33c9                 xor ecx, ecx
// 008a3956  85c0                 test eax, eax
// 008a3958  0f9fc1               setg cl
// 008a395b  51                   push ecx
// 008a395c  8bce                 mov ecx, esi
// 008a395e  e87b05f5ff           call 0x7f3ede
// 008a3963  837c242400           cmp dword ptr [esp + 0x24], 0
// 008a3968  740e                 je 0x8a3978
// 008a396a  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a396d  6a01                 push 1
// 008a396f  6a00                 push 0
// 008a3971  52                   push edx
// 008a3972  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008a3978  8d4c243c             lea ecx, [esp + 0x3c]
// 008a397c  c644246800           mov byte ptr [esp + 0x68], 0
// 008a3981  e85a7dfaff           call 0x84b6e0
// 008a3986  8d4c244c             lea ecx, [esp + 0x4c]
// 008a398a  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008a3992  e8390df5ff           call 0x7f46d0
// 008a3997  b801000000           mov eax, 1
// 008a399c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008a39a0  64890d00000000       mov dword ptr fs:[0], ecx
// 008a39a7  59                   pop ecx
// 008a39a8  5f                   pop edi
// 008a39a9  5e                   pop esi
// 008a39aa  5d                   pop ebp
// 008a39ab  5b                   pop ebx
// 008a39ac  83c458               add esp, 0x58
// 008a39af  c3                   ret 
// copied from an identical function in another client (function ?UpdateList@CXTPReportSubListControl@@QAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp