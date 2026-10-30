// roc 2009-12 008c7330  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7330
//
// 008c7330  53                   push ebx
// 008c7331  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008c7335  56                   push esi
// 008c7336  57                   push edi
// 008c7337  8bf1                 mov esi, ecx
// 008c7339  85db                 test ebx, ebx
// 008c733b  0f8cc4000000         jl 0x8c7405
// 008c7341  8d7e70               lea edi, [esi + 0x70]
// 008c7344  8bcf                 mov ecx, edi
// 008c7346  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c734c  3bd8                 cmp ebx, eax
// 008c734e  0f8db1000000         jge 0x8c7405
// 008c7354  53                   push ebx
// 008c7355  8bcf                 mov ecx, edi
// 008c7357  ff15c4d79800         call dword ptr [0x98d7c4]
// 008c735d  0fbec0               movsx eax, al
// 008c7360  83c0dd               add eax, -0x23
// 008c7363  83f841               cmp eax, 0x41
// 008c7366  0f8799000000         ja 0x8c7405
// 008c736c  0fb680bc758c00       movzx eax, byte ptr [eax + 0x8c75bc]
// 008c7373  ff248584758c00       jmp dword ptr [eax*4 + 0x8c7584]
// 008c737a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c737e  0fbe11               movsx edx, byte ptr [ecx]
// 008c7381  52                   push edx
// 008c7382  ff1528b79800         call dword ptr [0x98b728]
// 008c7388  83c404               add esp, 4
// 008c738b  5f                   pop edi
// 008c738c  5e                   pop esi
// 008c738d  5b                   pop ebx
// 008c738e  c20800               ret 8
// 008c7391  8b742410             mov esi, dword ptr [esp + 0x10]
// 008c7395  0fbe06               movsx eax, byte ptr [esi]
// 008c7398  50                   push eax
// 008c7399  ff1528b79800         call dword ptr [0x98b728]
// 008c739f  83c404               add esp, 4
// 008c73a2  85c0                 test eax, eax
// 008c73a4  0f85ad010000         jne 0x8c7557
// 008c73aa  0fbe0e               movsx ecx, byte ptr [esi]
// 008c73ad  51                   push ecx
// 008c73ae  ff1524b79800         call dword ptr [0x98b724]
// 008c73b4  83c404               add esp, 4
// 008c73b7  85c0                 test eax, eax
// 008c73b9  0f8598010000         jne 0x8c7557
// 008c73bf  5f                   pop edi
// 008c73c0  5e                   pop esi
// 008c73c1  5b                   pop ebx
// 008c73c2  c20800               ret 8
// 008c73c5  8b742410             mov esi, dword ptr [esp + 0x10]
// 008c73c9  0fbe16               movsx edx, byte ptr [esi]
// 008c73cc  52                   push edx
// 008c73cd  ff1528b79800         call dword ptr [0x98b728]
// 008c73d3  83c404               add esp, 4
// 008c73d6  85c0                 test eax, eax
// 008c73d8  0f8579010000         jne 0x8c7557
// 008c73de  0fbe06               movsx eax, byte ptr [esi]
// 008c73e1  50                   push eax
// 008c73e2  ff1524b79800         call dword ptr [0x98b724]
// 008c73e8  83c404               add esp, 4
// 008c73eb  85c0                 test eax, eax
// 008c73ed  0f8564010000         jne 0x8c7557
// 008c73f3  8a06                 mov al, byte ptr [esi]
// 008c73f5  3c2d                 cmp al, 0x2d
// 008c73f7  0f845a010000         je 0x8c7557
// 008c73fd  3c2b                 cmp al, 0x2b
// 008c73ff  0f8452010000         je 0x8c7557
// 008c7405  5f                   pop edi
// 008c7406  5e                   pop esi
// 008c7407  33c0                 xor eax, eax
// 008c7409  5b                   pop ebx
// 008c740a  c20800               ret 8
// 008c740d  8b742410             mov esi, dword ptr [esp + 0x10]
// 008c7411  0fbe0e               movsx ecx, byte ptr [esi]
// 008c7414  51                   push ecx
// 008c7415  ff1528b79800         call dword ptr [0x98b728]
// 008c741b  83c404               add esp, 4
// 008c741e  85c0                 test eax, eax
// 008c7420  0f8531010000         jne 0x8c7557
// 008c7426  0fbe16               movsx edx, byte ptr [esi]
// 008c7429  52                   push edx
// 008c742a  ff1524b79800         call dword ptr [0x98b724]
// 008c7430  83c404               add esp, 4
// 008c7433  85c0                 test eax, eax
// 008c7435  0f851c010000         jne 0x8c7557
// 008c743b  8a06                 mov al, byte ptr [esi]
// 008c743d  3c2d                 cmp al, 0x2d
// 008c743f  0f8412010000         je 0x8c7557
// 008c7445  3c2b                 cmp al, 0x2b
// 008c7447  0f840a010000         je 0x8c7557
// 008c744d  3c2e                 cmp al, 0x2e
// 008c744f  0f8402010000         je 0x8c7557
// 008c7455  3c2c                 cmp al, 0x2c
// 008c7457  eba6                 jmp 0x8c73ff
// 008c7459  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c745d  0fb611               movzx edx, byte ptr [ecx]
// 008c7460  8b06                 mov eax, dword ptr [esi]
// 008c7462  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008c7468  52                   push edx
// 008c7469  8bce                 mov ecx, esi
// 008c746b  ffd0                 call eax
// 008c746d  5f                   pop edi
// 008c746e  5e                   pop esi
// 008c746f  5b                   pop ebx
// 008c7470  c20800               ret 8
// 008c7473  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c7477  0fb607               movzx eax, byte ptr [edi]
// 008c747a  8b16                 mov edx, dword ptr [esi]
// 008c747c  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008c7482  50                   push eax
// 008c7483  8bce                 mov ecx, esi
// 008c7485  ffd2                 call edx
// 008c7487  85c0                 test eax, eax
// 008c7489  0f85c8000000         jne 0x8c7557
// 008c748f  0fbe07               movsx eax, byte ptr [edi]
// 008c7492  50                   push eax
// 008c7493  e916ffffff           jmp 0x8c73ae
// 008c7498  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c749c  0fbe0f               movsx ecx, byte ptr [edi]
// 008c749f  51                   push ecx
// 008c74a0  ff1520b79800         call dword ptr [0x98b720]
// 008c74a6  83c404               add esp, 4
// 008c74a9  85c0                 test eax, eax
// 008c74ab  0f85a6000000         jne 0x8c7557
// 008c74b1  0fb607               movzx eax, byte ptr [edi]
// 008c74b4  8b16                 mov edx, dword ptr [esi]
// 008c74b6  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008c74bc  50                   push eax
// 008c74bd  8bce                 mov ecx, esi
// 008c74bf  ffd2                 call edx
// 008c74c1  e9f1feffff           jmp 0x8c73b7
// 008c74c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c74ca  0fbe07               movsx eax, byte ptr [edi]
// 008c74cd  50                   push eax
// 008c74ce  ff1520b79800         call dword ptr [0x98b720]
// 008c74d4  83c404               add esp, 4
// 008c74d7  85c0                 test eax, eax
// 008c74d9  757c                 jne 0x8c7557
// 008c74db  eb9a                 jmp 0x8c7477
// 008c74dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c74e1  0fb608               movzx ecx, byte ptr [eax]
// 008c74e4  8b16                 mov edx, dword ptr [esi]
// 008c74e6  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008c74ec  51                   push ecx
// 008c74ed  8bce                 mov ecx, esi
// 008c74ef  ffd2                 call edx
// 008c74f1  5f                   pop edi
// 008c74f2  5e                   pop esi
// 008c74f3  5b                   pop ebx
// 008c74f4  c20800               ret 8
// 008c74f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c74fb  0fbe08               movsx ecx, byte ptr [eax]
// 008c74fe  51                   push ecx
// 008c74ff  ff1550b99800         call dword ptr [0x98b950]
// 008c7505  83c404               add esp, 4
// 008c7508  5f                   pop edi
// 008c7509  5e                   pop esi
// 008c750a  5b                   pop ebx
// 008c750b  c20800               ret 8
// 008c750e  8b742410             mov esi, dword ptr [esp + 0x10]
// 008c7512  0fbe16               movsx edx, byte ptr [esi]
// 008c7515  52                   push edx
// 008c7516  ff1550b99800         call dword ptr [0x98b950]
// 008c751c  83c404               add esp, 4
// 008c751f  85c0                 test eax, eax
// 008c7521  7534                 jne 0x8c7557
// 008c7523  0fbe06               movsx eax, byte ptr [esi]
// 008c7526  50                   push eax
// 008c7527  e982feffff           jmp 0x8c73ae
// 008c752c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c7530  0fb607               movzx eax, byte ptr [edi]
// 008c7533  8b16                 mov edx, dword ptr [esi]
// 008c7535  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008c753b  50                   push eax
// 008c753c  8bce                 mov ecx, esi
// 008c753e  ffd2                 call edx
// 008c7540  85c0                 test eax, eax
// 008c7542  0f84bdfeffff         je 0x8c7405
// 008c7548  6a01                 push 1
// 008c754a  0fb607               movzx eax, byte ptr [edi]
// 008c754d  50                   push eax
// 008c754e  8bce                 mov ecx, esi
// 008c7550  e8ebf6ffff           call 0x8c6c40
// 008c7555  8807                 mov byte ptr [edi], al
// 008c7557  5f                   pop edi
// 008c7558  5e                   pop esi
// 008c7559  b801000000           mov eax, 1
// 008c755e  5b                   pop ebx
// 008c755f  c20800               ret 8
// 008c7562  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c7566  0fb607               movzx eax, byte ptr [edi]
// 008c7569  8b16                 mov edx, dword ptr [esi]
// 008c756b  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008c7571  50                   push eax
// 008c7572  8bce                 mov ecx, esi
// 008c7574  ffd2                 call edx
// 008c7576  85c0                 test eax, eax
// 008c7578  0f8487feffff         je 0x8c7405
// 008c757e  6a00                 push 0
// 008c7580  ebc8                 jmp 0x8c754a
// 008c7582  8bff                 mov edi, edi
// 008c7584  c5738c               lds esi, ptr [ebx - 0x74]
// 008c7587  00dd                 add ch, bl
// 008c7589  748c                 je 0x8c7517
// 008c758b  007a73               add byte ptr [edx + 0x73], bh
// 008c758e  8c00                 mov word ptr [eax], es
// 008c7590  91                   xchg ecx, eax
// 008c7591  738c                 jae 0x8c751f
// 008c7593  006275               add byte ptr [edx + 0x75], ah
// 008c7596  8c00                 mov word ptr [eax], es
// 008c7598  2c75                 sub al, 0x75
// 008c759a  8c00                 mov word ptr [eax], es
// 008c759c  7374                 jae 0x8c7612
// 008c759e  8c00                 mov word ptr [eax], es
// 008c75a0  98                   cwde 
// 008c75a1  748c                 je 0x8c752f
// 008c75a3  00f7                 add bh, dh
// 008c75a5  748c                 je 0x8c7533
// 008c75a7  005974               add byte ptr [ecx + 0x74], bl
// 008c75aa  8c00                 mov word ptr [eax], es
// 008c75ac  0e                   push cs
// 008c75ad  758c                 jne 0x8c753b
// 008c75af  00c6                 add dh, al
// 008c75b1  748c                 je 0x8c753f
// 008c75b3  000d748c0005         add byte ptr [0x5008c74], cl
// 008c75b9  748c                 je 0x8c7547
// 008c75bb  0000                 add byte ptr [eax], al
// 008c75bd  0d0d010d0d           or eax, 0xd0d010d
// 008c75c2  0d0d0d0d0d           or eax, 0xd0d0d0d
// 008c75c7  0d0d020d0d           or eax, 0xd0d020d
// 008c75cc  0d0d0d0d0d           or eax, 0xd0d0d0d
// 008c75d1  0d030d0d04           or eax, 0x40d0d03
// 008c75d6  0d05060d07           or eax, 0x70d0605
// 008c75db  0d0d0d0d0d           or eax, 0xd0d0d0d
// 008c75e0  0d080d0d0d           or eax, 0xd0d0d08
// 008c75e5  090d0d0d0d0d         or dword ptr [0xd0d0d0d], ecx
// 008c75eb  0d0d0d0d0d           or eax, 0xd0d0d0d
// 008c75f0  0d0a0d0d0d           or eax, 0xd0d0d0a
// 008c75f5  0d0d0d0d0d           or eax, 0xd0d0d0d
// copied from an identical function in another client (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp