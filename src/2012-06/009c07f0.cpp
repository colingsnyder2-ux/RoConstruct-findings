// roc 2012-06 009c07f0  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c07f0
//
// 009c07f0  81ec88000000         sub esp, 0x88
// 009c07f6  53                   push ebx
// 009c07f7  55                   push ebp
// 009c07f8  56                   push esi
// 009c07f9  8bf1                 mov esi, ecx
// 009c07fb  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c07fe  c6463800             mov byte ptr [esi + 0x38], 0
// 009c0802  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0805  57                   push edi
// 009c0806  51                   push ecx
// 009c0807  ff15803ab200         call dword ptr [0xb23a80]
// 009c080d  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009c0813  6a45                 push 0x45
// 009c0815  33ed                 xor ebp, ebp
// 009c0817  ffd7                 call edi
// 009c0819  6a44                 push 0x44
// 009c081b  89442414             mov dword ptr [esp + 0x14], eax
// 009c081f  ffd7                 call edi
// 009c0821  8b1d343bb200         mov ebx, dword ptr [0xb23b34]
// 009c0827  8bf8                 mov edi, eax
// 009c0829  8da42400000000       lea esp, [esp]
// 009c0830  6a00                 push 0
// 009c0832  6a00                 push 0
// 009c0834  6a00                 push 0
// 009c0836  8d542420             lea edx, [esp + 0x20]
// 009c083a  52                   push edx
// 009c083b  ffd3                 call ebx
// 009c083d  85c0                 test eax, eax
// 009c083f  746e                 je 0x9c08af
// 009c0841  ff157c3ab200         call dword ptr [0xb23a7c]
// 009c0847  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c084a  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 009c084d  7560                 jne 0x9c08af
// 009c084f  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c0853  2d00020000           sub eax, 0x200
// 009c0858  741f                 je 0x9c0879
// 009c085a  83e802               sub eax, 2
// 009c085d  0f84d0000000         je 0x9c0933
// 009c0863  83e803               sub eax, 3
// 009c0866  0f84c7000000         je 0x9c0933
// 009c086c  8d542414             lea edx, [esp + 0x14]
// 009c0870  52                   push edx
// 009c0871  ff15a43ab200         call dword ptr [0xb23aa4]
// 009c0877  ebb7                 jmp 0x9c0830
// 009c0879  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009c087d  0fbfc1               movsx eax, cx
// 009c0880  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 009c0887  c1e910               shr ecx, 0x10
// 009c088a  99                   cdq 
// 009c088b  33c2                 xor eax, edx
// 009c088d  2bc2                 sub eax, edx
// 009c088f  3bc7                 cmp eax, edi
// 009c0891  0fbfc9               movsx ecx, cx
// 009c0894  7f14                 jg 0x9c08aa
// 009c0896  8bc1                 mov eax, ecx
// 009c0898  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 009c089f  99                   cdq 
// 009c08a0  33c2                 xor eax, edx
// 009c08a2  2bc2                 sub eax, edx
// 009c08a4  3b442410             cmp eax, dword ptr [esp + 0x10]
// 009c08a8  7e86                 jle 0x9c0830
// 009c08aa  bd02000000           mov ebp, 2
// 009c08af  ff15743ab200         call dword ptr [0xb23a74]
// 009c08b5  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c08b8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c08bb  894c2430             mov dword ptr [esp + 0x30], ecx
// 009c08bf  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c08c2  52                   push edx
// 009c08c3  ff15043db200         call dword ptr [0xb23d04]
// 009c08c9  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 009c08d0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c08d3  57                   push edi
// 009c08d4  89442438             mov dword ptr [esp + 0x38], eax
// 009c08d8  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 009c08e0  897c2470             mov dword ptr [esp + 0x70], edi
// 009c08e4  e8a321fcff           call 0x982a8c
// 009c08e9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c08ec  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 009c08f3  e8da8c0d00           call 0xa995d2
// 009c08f8  8bd8                 mov ebx, eax
// 009c08fa  83fd01               cmp ebp, 1
// 009c08fd  0f8581000000         jne 0x9c0984
// 009c0903  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 009c090a  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 009c0911  a804                 test al, 4
// 009c0913  753e                 jne 0x9c0953
// 009c0915  85db                 test ebx, ebx
// 009c0917  743a                 je 0x9c0953
// 009c0919  8bce                 mov ecx, esi
// 009c091b  a808                 test al, 8
// 009c091d  741e                 je 0x9c093d
// 009c091f  6a02                 push 2
// 009c0921  57                   push edi
// 009c0922  e8e9f9ffff           call 0x9c0310
// 009c0927  f7d0                 not eax
// 009c0929  83e002               and eax, 2
// 009c092c  6a03                 push 3
// 009c092e  0bc5                 or eax, ebp
// 009c0930  50                   push eax
// 009c0931  eb18                 jmp 0x9c094b
// 009c0933  bd01000000           mov ebp, 1
// 009c0938  e972ffffff           jmp 0x9c08af
// 009c093d  8b06                 mov eax, dword ptr [esi]
// 009c093f  8b5050               mov edx, dword ptr [eax + 0x50]
// 009c0942  57                   push edi
// 009c0943  6a00                 push 0
// 009c0945  ffd2                 call edx
// 009c0947  6a03                 push 3
// 009c0949  6a03                 push 3
// 009c094b  57                   push edi
// 009c094c  8bce                 mov ecx, esi
// 009c094e  e88df6ffff           call 0x9bffe0
// 009c0953  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0956  8b7820               mov edi, dword ptr [eax + 0x20]
// 009c0959  ff15e83bb200         call dword ptr [0xb23be8]
// 009c095f  3bc7                 cmp eax, edi
// 009c0961  7407                 je 0x9c096a
// 009c0963  57                   push edi
// 009c0964  ff15143cb200         call dword ptr [0xb23c14]
// 009c096a  8b16                 mov edx, dword ptr [esi]
// 009c096c  8b524c               mov edx, dword ptr [edx + 0x4c]
// 009c096f  f7db                 neg ebx
// 009c0971  1bdb                 sbb ebx, ebx
// 009c0973  83e303               and ebx, 3
// 009c0976  83c3fb               add ebx, -5
// 009c0979  8d442430             lea eax, [esp + 0x30]
// 009c097d  895c2438             mov dword ptr [esp + 0x38], ebx
// 009c0981  50                   push eax
// 009c0982  eb51                 jmp 0x9c09d5
// 009c0984  83fd02               cmp ebp, 2
// 009c0987  7554                 jne 0x9c09dd
// 009c0989  6a03                 push 3
// 009c098b  6a03                 push 3
// 009c098d  57                   push edi
// 009c098e  8bce                 mov ecx, esi
// 009c0990  e84bf6ffff           call 0x9bffe0
// 009c0995  f6c310               test bl, 0x10
// 009c0998  753f                 jne 0x9c09d9
// 009c099a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 009c09a1  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 009c09a8  33c0                 xor eax, eax
// 009c09aa  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 009c09b1  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 009c09b8  0f95c0               setne al
// 009c09bb  8d4c2430             lea ecx, [esp + 0x30]
// 009c09bf  89942494000000       mov dword ptr [esp + 0x94], edx
// 009c09c6  51                   push ecx
// 009c09c7  0568feffff           add eax, 0xfffffe68
// 009c09cc  8944243c             mov dword ptr [esp + 0x3c], eax
// 009c09d0  8b06                 mov eax, dword ptr [esi]
// 009c09d2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 009c09d5  8bce                 mov ecx, esi
// 009c09d7  ffd2                 call edx
// 009c09d9  c6463801             mov byte ptr [esi + 0x38], 1
// 009c09dd  5f                   pop edi
// 009c09de  5e                   pop esi
// 009c09df  5d                   pop ebp
// 009c09e0  5b                   pop ebx
// 009c09e1  81c488000000         add esp, 0x88
// 009c09e7  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
