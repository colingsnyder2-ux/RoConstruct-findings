// roc 2009-12 0080d510  unit: CXTPImageManagerIconSet  size: 696 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d510
//
// 0080d510  6aff                 push -1
// 0080d512  68089c9500           push 0x959c08
// 0080d517  64a100000000         mov eax, dword ptr fs:[0]
// 0080d51d  50                   push eax
// 0080d51e  83ec2c               sub esp, 0x2c
// 0080d521  53                   push ebx
// 0080d522  55                   push ebp
// 0080d523  56                   push esi
// 0080d524  57                   push edi
// 0080d525  a10052b600           mov eax, dword ptr [0xb65200]
// 0080d52a  33c4                 xor eax, esp
// 0080d52c  50                   push eax
// 0080d52d  8d442440             lea eax, [esp + 0x40]
// 0080d531  64a300000000         mov dword ptr fs:[0], eax
// 0080d537  8bf1                 mov esi, ecx
// 0080d539  8d4658               lea eax, [esi + 0x58]
// 0080d53c  50                   push eax
// 0080d53d  8d4c2418             lea ecx, [esp + 0x18]
// 0080d541  e8caee0200           call 0x83c410
// 0080d546  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0080d54a  8bcb                 mov ecx, ebx
// 0080d54c  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0080d554  e847d3ffff           call 0x80a8a0
// 0080d559  85c0                 test eax, eax
// 0080d55b  7418                 je 0x80d575
// 0080d55d  8d4c2414             lea ecx, [esp + 0x14]
// 0080d561  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0080d569  e8c2ee0200           call 0x83c430
// 0080d56e  33c0                 xor eax, eax
// 0080d570  e93d020000           jmp 0x80d7b2
// 0080d575  8d4c2424             lea ecx, [esp + 0x24]
// 0080d579  51                   push ecx
// 0080d57a  8bce                 mov ecx, esi
// 0080d57c  e84fbbffff           call 0x8090d0
// 0080d581  8b38                 mov edi, dword ptr [eax]
// 0080d583  8b6804               mov ebp, dword ptr [eax + 4]
// 0080d586  8d54241c             lea edx, [esp + 0x1c]
// 0080d58a  52                   push edx
// 0080d58b  8bcb                 mov ecx, ebx
// 0080d58d  e87ebbffff           call 0x809110
// 0080d592  3938                 cmp dword ptr [eax], edi
// 0080d594  75c7                 jne 0x80d55d
// 0080d596  396804               cmp dword ptr [eax + 4], ebp
// 0080d599  75c2                 jne 0x80d55d
// 0080d59b  833b00               cmp dword ptr [ebx], 0
// 0080d59e  7506                 jne 0x80d5a6
// 0080d5a0  837b0400             cmp dword ptr [ebx + 4], 0
// 0080d5a4  74b7                 je 0x80d55d
// 0080d5a6  8bce                 mov ecx, esi
// 0080d5a8  e823e9ffff           call 0x80bed0
// 0080d5ad  8bf8                 mov edi, eax
// 0080d5af  85ff                 test edi, edi
// 0080d5b1  74aa                 je 0x80d55d
// 0080d5b3  8b03                 mov eax, dword ptr [ebx]
// 0080d5b5  85c0                 test eax, eax
// 0080d5b7  0f848e010000         je 0x80d74b
// 0080d5bd  8d4c242c             lea ecx, [esp + 0x2c]
// 0080d5c1  51                   push ecx
// 0080d5c2  50                   push eax
// 0080d5c3  ff15ecc99800         call dword ptr [0x98c9ec]
// 0080d5c9  85c0                 test eax, eax
// 0080d5cb  0f84ad000000         je 0x80d67e
// 0080d5d1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080d5d5  8d54241c             lea edx, [esp + 0x1c]
// 0080d5d9  52                   push edx
// 0080d5da  8d44241c             lea eax, [esp + 0x1c]
// 0080d5de  50                   push eax
// 0080d5df  51                   push ecx
// 0080d5e0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0080d5e8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0080d5f0  e82beeffff           call 0x80c420
// 0080d5f5  8b542448             mov edx, dword ptr [esp + 0x48]
// 0080d5f9  8b1d3cb19800         mov ebx, dword ptr [0x98b13c]
// 0080d5ff  83c40c               add esp, 0xc
// 0080d602  8be8                 mov ebp, eax
// 0080d604  52                   push edx
// 0080d605  896c2428             mov dword ptr [esp + 0x28], ebp
// 0080d609  ffd3                 call ebx
// 0080d60b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0080d60f  50                   push eax
// 0080d610  ffd3                 call ebx
// 0080d612  837c241801           cmp dword ptr [esp + 0x18], 1
// 0080d617  755a                 jne 0x80d673
// 0080d619  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0080d61d  85ed                 test ebp, ebp
// 0080d61f  744e                 je 0x80d66f
// 0080d621  33db                 xor ebx, ebx
// 0080d623  395e28               cmp dword ptr [esi + 0x28], ebx
// 0080d626  7e31                 jle 0x80d659
// 0080d628  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080d62b  03c0                 add eax, eax
// 0080d62d  03c0                 add eax, eax
// 0080d62f  90                   nop 
// 0080d630  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0080d633  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0080d636  0fafcb               imul ecx, ebx
// 0080d639  034f04               add ecx, dword ptr [edi + 4]
// 0080d63c  50                   push eax
// 0080d63d  8d0c8a               lea ecx, [edx + ecx*4]
// 0080d640  55                   push ebp
// 0080d641  51                   push ecx
// 0080d642  e89f76feff           call 0x7f4ce6
// 0080d647  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080d64a  03c0                 add eax, eax
// 0080d64c  03c0                 add eax, eax
// 0080d64e  43                   inc ebx
// 0080d64f  83c40c               add esp, 0xc
// 0080d652  03e8                 add ebp, eax
// 0080d654  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 0080d657  7cd7                 jl 0x80d630
// 0080d659  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080d65d  50                   push eax
// 0080d65e  c70701000000         mov dword ptr [edi], 1
// 0080d664  ff153cb19800         call dword ptr [0x98b13c]
// 0080d66a  e930010000           jmp 0x80d79f
// 0080d66f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0080d673  85ed                 test ebp, ebp
// 0080d675  7403                 je 0x80d67a
// 0080d677  55                   push ebp
// 0080d678  ffd3                 call ebx
// 0080d67a  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0080d67e  8b06                 mov eax, dword ptr [esi]
// 0080d680  85c0                 test eax, eax
// 0080d682  7460                 je 0x80d6e4
// 0080d684  8d5e08               lea ebx, [esi + 8]
// 0080d687  50                   push eax
// 0080d688  8bcb                 mov ecx, ebx
// 0080d68a  e801c8ffff           call 0x809e90
// 0080d68f  6a00                 push 0
// 0080d691  8d6f04               lea ebp, [edi + 4]
// 0080d694  55                   push ebp
// 0080d695  8bcb                 mov ecx, ebx
// 0080d697  e8626ffeff           call 0x7f45fe
// 0080d69c  85db                 test ebx, ebx
// 0080d69e  7504                 jne 0x80d6a4
// 0080d6a0  33c0                 xor eax, eax
// 0080d6a2  eb03                 jmp 0x80d6a7
// 0080d6a4  8b4304               mov eax, dword ptr [ebx + 4]
// 0080d6a7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0080d6ab  8b11                 mov edx, dword ptr [ecx]
// 0080d6ad  8b4f08               mov ecx, dword ptr [edi + 8]
// 0080d6b0  6a03                 push 3
// 0080d6b2  6a00                 push 0
// 0080d6b4  6a00                 push 0
// 0080d6b6  6a00                 push 0
// 0080d6b8  6a00                 push 0
// 0080d6ba  52                   push edx
// 0080d6bb  8b5500               mov edx, dword ptr [ebp]
// 0080d6be  51                   push ecx
// 0080d6bf  52                   push edx
// 0080d6c0  50                   push eax
// 0080d6c1  ff1514cb9800         call dword ptr [0x98cb14]
// 0080d6c7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0080d6ca  85c0                 test eax, eax
// 0080d6cc  7412                 je 0x80d6e0
// 0080d6ce  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0080d6d1  50                   push eax
// 0080d6d2  51                   push ecx
// 0080d6d3  ff154cb19800         call dword ptr [0x98b14c]
// 0080d6d9  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0080d6e0  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0080d6e4  8b4604               mov eax, dword ptr [esi + 4]
// 0080d6e7  85c0                 test eax, eax
// 0080d6e9  7458                 je 0x80d743
// 0080d6eb  83c608               add esi, 8
// 0080d6ee  50                   push eax
// 0080d6ef  8bce                 mov ecx, esi
// 0080d6f1  e89ac7ffff           call 0x809e90
// 0080d6f6  6a00                 push 0
// 0080d6f8  8d6f04               lea ebp, [edi + 4]
// 0080d6fb  55                   push ebp
// 0080d6fc  8bce                 mov ecx, esi
// 0080d6fe  e8fb6efeff           call 0x7f45fe
// 0080d703  85f6                 test esi, esi
// 0080d705  7504                 jne 0x80d70b
// 0080d707  33c0                 xor eax, eax
// 0080d709  eb03                 jmp 0x80d70e
// 0080d70b  8b4604               mov eax, dword ptr [esi + 4]
// 0080d70e  8b0b                 mov ecx, dword ptr [ebx]
// 0080d710  8b5708               mov edx, dword ptr [edi + 8]
// 0080d713  6a01                 push 1
// 0080d715  6a00                 push 0
// 0080d717  6a00                 push 0
// 0080d719  6a00                 push 0
// 0080d71b  6a00                 push 0
// 0080d71d  51                   push ecx
// 0080d71e  8b4d00               mov ecx, dword ptr [ebp]
// 0080d721  52                   push edx
// 0080d722  51                   push ecx
// 0080d723  50                   push eax
// 0080d724  ff1514cb9800         call dword ptr [0x98cb14]
// 0080d72a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0080d72d  85c0                 test eax, eax
// 0080d72f  7412                 je 0x80d743
// 0080d731  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080d734  50                   push eax
// 0080d735  51                   push ecx
// 0080d736  ff154cb19800         call dword ptr [0x98b14c]
// 0080d73c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0080d743  c70700000000         mov dword ptr [edi], 0
// 0080d749  eb54                 jmp 0x80d79f
// 0080d74b  8bcb                 mov ecx, ebx
// 0080d74d  e8eef8ffff           call 0x80d040
// 0080d752  8be8                 mov ebp, eax
// 0080d754  85ed                 test ebp, ebp
// 0080d756  0f8401feffff         je 0x80d55d
// 0080d75c  33db                 xor ebx, ebx
// 0080d75e  395e28               cmp dword ptr [esi + 0x28], ebx
// 0080d761  7e36                 jle 0x80d799
// 0080d763  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080d766  03c0                 add eax, eax
// 0080d768  03c0                 add eax, eax
// 0080d76a  8d9b00000000         lea ebx, [ebx]
// 0080d770  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0080d773  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0080d776  0fafd3               imul edx, ebx
// 0080d779  035704               add edx, dword ptr [edi + 4]
// 0080d77c  50                   push eax
// 0080d77d  8d0c91               lea ecx, [ecx + edx*4]
// 0080d780  55                   push ebp
// 0080d781  51                   push ecx
// 0080d782  e85f75feff           call 0x7f4ce6
// 0080d787  8b4624               mov eax, dword ptr [esi + 0x24]
// 0080d78a  03c0                 add eax, eax
// 0080d78c  03c0                 add eax, eax
// 0080d78e  43                   inc ebx
// 0080d78f  83c40c               add esp, 0xc
// 0080d792  03e8                 add ebp, eax
// 0080d794  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 0080d797  7cd7                 jl 0x80d770
// 0080d799  c70701000000         mov dword ptr [edi], 1
// 0080d79f  8d4c2414             lea ecx, [esp + 0x14]
// 0080d7a3  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0080d7ab  e880ec0200           call 0x83c430
// 0080d7b0  8bc7                 mov eax, edi
// 0080d7b2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080d7b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0080d7bd  59                   pop ecx
// 0080d7be  5f                   pop edi
// 0080d7bf  5e                   pop esi
// 0080d7c0  5d                   pop ebp
// 0080d7c1  5b                   pop ebx
// 0080d7c2  83c438               add esp, 0x38
// 0080d7c5  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPImageManagerResource@@QAEPAUXTP_IMAGERESOURCE_INFO@@AAVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp