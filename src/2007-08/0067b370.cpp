// from server: 100% by auto
// roc 2007-08 0067b370  unit: CXTPControls  size: 759 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067b370
//
// 0067b370  83ec1c               sub esp, 0x1c
// 0067b373  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0067b377  83e010               and eax, 0x10
// 0067b37a  890c24               mov dword ptr [esp], ecx
// 0067b37d  89442404             mov dword ptr [esp + 4], eax
// 0067b381  740a                 je 0x67b38d
// 0067b383  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067b387  2b542438             sub edx, dword ptr [esp + 0x38]
// 0067b38b  eb08                 jmp 0x67b395
// 0067b38d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067b391  2b542434             sub edx, dword ptr [esp + 0x34]
// 0067b395  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0067b398  53                   push ebx
// 0067b399  55                   push ebp
// 0067b39a  56                   push esi
// 0067b39b  83e801               sub eax, 1
// 0067b39e  57                   push edi
// 0067b39f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067b3a3  0f888e000000         js 0x67b437
// 0067b3a9  8bf0                 mov esi, eax
// 0067b3ab  c1e606               shl esi, 6
// 0067b3ae  03742430             add esi, dword ptr [esp + 0x30]
// 0067b3b2  837e2800             cmp dword ptr [esi + 0x28], 0
// 0067b3b6  746b                 je 0x67b423
// 0067b3b8  837e3000             cmp dword ptr [esi + 0x30], 0
// 0067b3bc  7565                 jne 0x67b423
// 0067b3be  85c0                 test eax, eax
// 0067b3c0  7c0d                 jl 0x67b3cf
// 0067b3c2  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0067b3c5  7d08                 jge 0x67b3cf
// 0067b3c7  8b7928               mov edi, dword ptr [ecx + 0x28]
// 0067b3ca  8b0487               mov eax, dword ptr [edi + eax*4]
// 0067b3cd  eb02                 jmp 0x67b3d1
// 0067b3cf  33c0                 xor eax, eax
// 0067b3d1  f680d400000001       test byte ptr [eax + 0xd4], 1
// 0067b3d8  745d                 je 0x67b437
// 0067b3da  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067b3df  8b06                 mov eax, dword ptr [esi]
// 0067b3e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067b3e4  8b6e08               mov ebp, dword ptr [esi + 8]
// 0067b3e7  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0067b3ea  7511                 jne 0x67b3fd
// 0067b3ec  2bc5                 sub eax, ebp
// 0067b3ee  8d3c10               lea edi, [eax + edx]
// 0067b3f1  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 0067b3f5  7c3c                 jl 0x67b433
// 0067b3f7  53                   push ebx
// 0067b3f8  52                   push edx
// 0067b3f9  51                   push ecx
// 0067b3fa  57                   push edi
// 0067b3fb  eb0f                 jmp 0x67b40c
// 0067b3fd  2bcb                 sub ecx, ebx
// 0067b3ff  8d3c11               lea edi, [ecx + edx]
// 0067b402  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 0067b406  7c2b                 jl 0x67b433
// 0067b408  52                   push edx
// 0067b409  55                   push ebp
// 0067b40a  57                   push edi
// 0067b40b  50                   push eax
// 0067b40c  56                   push esi
// 0067b40d  ff1578ed7700         call dword ptr [0x77ed78]
// 0067b413  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 0067b417  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067b41b  8bd7                 mov edx, edi
// 0067b41d  7518                 jne 0x67b437
// 0067b41f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0067b423  83e801               sub eax, 1
// 0067b426  83ee40               sub esi, 0x40
// 0067b429  85c0                 test eax, eax
// 0067b42b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067b42f  7d81                 jge 0x67b3b2
// 0067b431  eb04                 jmp 0x67b437
// 0067b433  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067b437  33ed                 xor ebp, ebp
// 0067b439  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0067b43d  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0067b445  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067b44d  740a                 je 0x67b459
// 0067b44f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0067b453  2b7c2448             sub edi, dword ptr [esp + 0x48]
// 0067b457  eb08                 jmp 0x67b461
// 0067b459  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0067b45d  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 0067b461  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0067b464  83c0ff               add eax, -1
// 0067b467  85c0                 test eax, eax
// 0067b469  89442420             mov dword ptr [esp + 0x20], eax
// 0067b46d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067b471  0f8ce6010000         jl 0x67b65d
// 0067b477  8d48ff               lea ecx, [eax - 1]
// 0067b47a  894c2424             mov dword ptr [esp + 0x24], ecx
// 0067b47e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067b482  8bd0                 mov edx, eax
// 0067b484  c1e206               shl edx, 6
// 0067b487  8d4c0a28             lea ecx, [edx + ecx + 0x28]
// 0067b48b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0067b48f  90                   nop 
// 0067b490  833900               cmp dword ptr [ecx], 0
// 0067b493  0f848e000000         je 0x67b527
// 0067b499  8b5908               mov ebx, dword ptr [ecx + 8]
// 0067b49c  85db                 test ebx, ebx
// 0067b49e  0f8583000000         jne 0x67b527
// 0067b4a4  85ed                 test ebp, ebp
// 0067b4a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067b4aa  7529                 jne 0x67b4d5
// 0067b4ac  85c0                 test eax, eax
// 0067b4ae  7c0d                 jl 0x67b4bd
// 0067b4b0  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0067b4b3  7d08                 jge 0x67b4bd
// 0067b4b5  8b5628               mov edx, dword ptr [esi + 0x28]
// 0067b4b8  8b1482               mov edx, dword ptr [edx + eax*4]
// 0067b4bb  eb02                 jmp 0x67b4bf
// 0067b4bd  33d2                 xor edx, edx
// 0067b4bf  f682d400000001       test byte ptr [edx + 0xd4], 1
// 0067b4c6  740d                 je 0x67b4d5
// 0067b4c8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067b4cc  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 0067b4cf  89542420             mov dword ptr [esp + 0x20], edx
// 0067b4d3  eb25                 jmp 0x67b4fa
// 0067b4d5  85c0                 test eax, eax
// 0067b4d7  7c0d                 jl 0x67b4e6
// 0067b4d9  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0067b4dc  7d08                 jge 0x67b4e6
// 0067b4de  8b5628               mov edx, dword ptr [esi + 0x28]
// 0067b4e1  8b1482               mov edx, dword ptr [edx + eax*4]
// 0067b4e4  eb02                 jmp 0x67b4e8
// 0067b4e6  33d2                 xor edx, edx
// 0067b4e8  f682d400000020       test byte ptr [edx + 0xd4], 0x20
// 0067b4ef  7409                 je 0x67b4fa
// 0067b4f1  bd01000000           mov ebp, 1
// 0067b4f6  016c2418             add dword ptr [esp + 0x18], ebp
// 0067b4fa  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 0067b4ff  751d                 jne 0x67b51e
// 0067b501  39442420             cmp dword ptr [esp + 0x20], eax
// 0067b505  7c17                 jl 0x67b51e
// 0067b507  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067b50c  7505                 jne 0x67b513
// 0067b50e  8b71e0               mov esi, dword ptr [ecx - 0x20]
// 0067b511  eb03                 jmp 0x67b516
// 0067b513  8b71e4               mov esi, dword ptr [ecx - 0x1c]
// 0067b516  8bd7                 mov edx, edi
// 0067b518  2bd6                 sub edx, esi
// 0067b51a  8954244c             mov dword ptr [esp + 0x4c], edx
// 0067b51e  85db                 test ebx, ebx
// 0067b520  7505                 jne 0x67b527
// 0067b522  395904               cmp dword ptr [ecx + 4], ebx
// 0067b525  7508                 jne 0x67b52f
// 0067b527  85c0                 test eax, eax
// 0067b529  0f8513010000         jne 0x67b642
// 0067b52f  837c241800           cmp dword ptr [esp + 0x18], 0
// 0067b534  0f8ed2000000         jle 0x67b60c
// 0067b53a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0067b53f  0f8ec7000000         jle 0x67b60c
// 0067b545  33ed                 xor ebp, ebp
// 0067b547  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0067b54b  89442430             mov dword ptr [esp + 0x30], eax
// 0067b54f  0f8fb7000000         jg 0x67b60c
// 0067b555  8d59e0               lea ebx, [ecx - 0x20]
// 0067b558  eb06                 jmp 0x67b560
// 0067b55a  8d9b00000000         lea ebx, [ebx]
// 0067b560  837b2000             cmp dword ptr [ebx + 0x20], 0
// 0067b564  0f848a000000         je 0x67b5f4
// 0067b56a  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0067b56e  0f8580000000         jne 0x67b5f4
// 0067b574  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067b579  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 0067b57c  8b53fc               mov edx, dword ptr [ebx - 4]
// 0067b57f  8b33                 mov esi, dword ptr [ebx]
// 0067b581  8b7b04               mov edi, dword ptr [ebx + 4]
// 0067b584  8d43f8               lea eax, [ebx - 8]
// 0067b587  7506                 jne 0x67b58f
// 0067b589  03f5                 add esi, ebp
// 0067b58b  03cd                 add ecx, ebp
// 0067b58d  eb04                 jmp 0x67b593
// 0067b58f  03fd                 add edi, ebp
// 0067b591  03d5                 add edx, ebp
// 0067b593  57                   push edi
// 0067b594  56                   push esi
// 0067b595  52                   push edx
// 0067b596  51                   push ecx
// 0067b597  50                   push eax
// 0067b598  ff1578ed7700         call dword ptr [0x77ed78]
// 0067b59e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067b5a2  85c9                 test ecx, ecx
// 0067b5a4  7c11                 jl 0x67b5b7
// 0067b5a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067b5aa  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 0067b5ad  7d08                 jge 0x67b5b7
// 0067b5af  8b4028               mov eax, dword ptr [eax + 0x28]
// 0067b5b2  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0067b5b5  eb02                 jmp 0x67b5b9
// 0067b5b7  33c0                 xor eax, eax
// 0067b5b9  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 0067b5c0  742a                 je 0x67b5ec
// 0067b5c2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0067b5c6  85f6                 test esi, esi
// 0067b5c8  7e22                 jle 0x67b5ec
// 0067b5ca  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0067b5ce  99                   cdq 
// 0067b5cf  f7fe                 idiv esi
// 0067b5d1  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067b5d6  7504                 jne 0x67b5dc
// 0067b5d8  0103                 add dword ptr [ebx], eax
// 0067b5da  eb03                 jmp 0x67b5df
// 0067b5dc  014304               add dword ptr [ebx + 4], eax
// 0067b5df  2944244c             sub dword ptr [esp + 0x4c], eax
// 0067b5e3  83ee01               sub esi, 1
// 0067b5e6  89742418             mov dword ptr [esp + 0x18], esi
// 0067b5ea  03e8                 add ebp, eax
// 0067b5ec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0067b5f0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067b5f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067b5f8  83c201               add edx, 1
// 0067b5fb  83c340               add ebx, 0x40
// 0067b5fe  3b542420             cmp edx, dword ptr [esp + 0x20]
// 0067b602  89542430             mov dword ptr [esp + 0x30], edx
// 0067b606  0f8e54ffffff         jle 0x67b560
// 0067b60c  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067b611  740a                 je 0x67b61d
// 0067b613  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0067b617  2b7c2448             sub edi, dword ptr [esp + 0x48]
// 0067b61b  eb08                 jmp 0x67b625
// 0067b61d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0067b621  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 0067b625  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067b629  bd01000000           mov ebp, 1
// 0067b62e  89542420             mov dword ptr [esp + 0x20], edx
// 0067b632  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0067b63a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067b642  836c242401           sub dword ptr [esp + 0x24], 1
// 0067b647  83e801               sub eax, 1
// 0067b64a  83e940               sub ecx, 0x40
// 0067b64d  85c0                 test eax, eax
// 0067b64f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067b653  894c2428             mov dword ptr [esp + 0x28], ecx
// 0067b657  0f8d33feffff         jge 0x67b490
// 0067b65d  5f                   pop edi
// 0067b65e  5e                   pop esi
// 0067b65f  5d                   pop ebp
// 0067b660  5b                   pop ebx
// 0067b661  83c41c               add esp, 0x1c
// 0067b664  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
