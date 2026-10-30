// roc 2012-06 00a76350  unit: CXTPRibbonControlTab  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76350
//
// 00a76350  6aff                 push -1
// 00a76352  680090ae00           push 0xae9000
// 00a76357  64a100000000         mov eax, dword ptr fs:[0]
// 00a7635d  50                   push eax
// 00a7635e  83ec10               sub esp, 0x10
// 00a76361  53                   push ebx
// 00a76362  55                   push ebp
// 00a76363  56                   push esi
// 00a76364  57                   push edi
// 00a76365  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7636a  33c4                 xor eax, esp
// 00a7636c  50                   push eax
// 00a7636d  8d442424             lea eax, [esp + 0x24]
// 00a76371  64a300000000         mov dword ptr fs:[0], eax
// 00a76377  8be9                 mov ebp, ecx
// 00a76379  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a7637d  8b01                 mov eax, dword ptr [ecx]
// 00a7637f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a76385  33ff                 xor edi, edi
// 00a76387  6864d9c100           push 0xc1d964
// 00a7638c  397928               cmp dword ptr [ecx + 0x28], edi
// 00a7638f  0f85a1000000         jne 0xa76436
// 00a76395  8bb5e0010000         mov esi, dword ptr [ebp + 0x1e0]
// 00a7639b  89742420             mov dword ptr [esp + 0x20], esi
// 00a7639f  ffd2                 call edx
// 00a763a1  8bd8                 mov ebx, eax
// 00a763a3  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a763a7  8b03                 mov eax, dword ptr [ebx]
// 00a763a9  8b5004               mov edx, dword ptr [eax + 4]
// 00a763ac  57                   push edi
// 00a763ad  56                   push esi
// 00a763ae  8bcb                 mov ecx, ebx
// 00a763b0  897c2434             mov dword ptr [esp + 0x34], edi
// 00a763b4  ffd2                 call edx
// 00a763b6  89442418             mov dword ptr [esp + 0x18], eax
// 00a763ba  85f6                 test esi, esi
// 00a763bc  7e6f                 jle 0xa7642d
// 00a763be  85ff                 test edi, edi
// 00a763c0  7c15                 jl 0xa763d7
// 00a763c2  3bbde0010000         cmp edi, dword ptr [ebp + 0x1e0]
// 00a763c8  7d0d                 jge 0xa763d7
// 00a763ca  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 00a763d0  8d04b8               lea eax, [eax + edi*4]
// 00a763d3  8b00                 mov eax, dword ptr [eax]
// 00a763d5  eb02                 jmp 0xa763d9
// 00a763d7  33c0                 xor eax, eax
// 00a763d9  89442434             mov dword ptr [esp + 0x34], eax
// 00a763dd  8b13                 mov edx, dword ptr [ebx]
// 00a763df  8b5208               mov edx, dword ptr [edx + 8]
// 00a763e2  8d442418             lea eax, [esp + 0x18]
// 00a763e6  50                   push eax
// 00a763e7  8bcb                 mov ecx, ebx
// 00a763e9  ffd2                 call edx
// 00a763eb  8bf0                 mov esi, eax
// 00a763ed  89742420             mov dword ptr [esp + 0x20], esi
// 00a763f1  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00a763f6  e8f59cffff           call 0xa700f0
// 00a763fb  8b16                 mov edx, dword ptr [esi]
// 00a763fd  8b5264               mov edx, dword ptr [edx + 0x64]
// 00a76400  50                   push eax
// 00a76401  8d442438             lea eax, [esp + 0x38]
// 00a76405  50                   push eax
// 00a76406  8bce                 mov ecx, esi
// 00a76408  ffd2                 call edx
// 00a7640a  85c0                 test eax, eax
// 00a7640c  740c                 je 0xa7641a
// 00a7640e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a76412  8b01                 mov eax, dword ptr [ecx]
// 00a76414  8b5064               mov edx, dword ptr [eax + 0x64]
// 00a76417  56                   push esi
// 00a76418  ffd2                 call edx
// 00a7641a  8bce                 mov ecx, esi
// 00a7641c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00a76421  e864c2f0ff           call 0x98268a
// 00a76426  47                   inc edi
// 00a76427  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00a7642b  7c91                 jl 0xa763be
// 00a7642d  8b03                 mov eax, dword ptr [ebx]
// 00a7642f  8bcb                 mov ecx, ebx
// 00a76431  e9b0000000           jmp 0xa764e6
// 00a76436  ffd2                 call edx
// 00a76438  8bf8                 mov edi, eax
// 00a7643a  897c2420             mov dword ptr [esp + 0x20], edi
// 00a7643e  8b07                 mov eax, dword ptr [edi]
// 00a76440  8b5004               mov edx, dword ptr [eax + 4]
// 00a76443  6a00                 push 0
// 00a76445  6a00                 push 0
// 00a76447  8bcf                 mov ecx, edi
// 00a76449  c744243402000000     mov dword ptr [esp + 0x34], 2
// 00a76451  ffd2                 call edx
// 00a76453  8d9d84010000         lea ebx, [ebp + 0x184]
// 00a76459  8bcb                 mov ecx, ebx
// 00a7645b  89442414             mov dword ptr [esp + 0x14], eax
// 00a7645f  e82c64fdff           call 0xa4c890
// 00a76464  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a76469  7477                 je 0xa764e2
// 00a7646b  eb03                 jmp 0xa76470
// 00a7646d  8d4900               lea ecx, [ecx]
// 00a76470  8b07                 mov eax, dword ptr [edi]
// 00a76472  8b5008               mov edx, dword ptr [eax + 8]
// 00a76475  8d4c2414             lea ecx, [esp + 0x14]
// 00a76479  51                   push ecx
// 00a7647a  8bcf                 mov ecx, edi
// 00a7647c  ffd2                 call edx
// 00a7647e  8bf0                 mov esi, eax
// 00a76480  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a76484  896e24               mov dword ptr [esi + 0x24], ebp
// 00a76487  c644242c03           mov byte ptr [esp + 0x2c], 3
// 00a7648c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a76494  e8579cffff           call 0xa700f0
// 00a76499  8b16                 mov edx, dword ptr [esi]
// 00a7649b  8b5264               mov edx, dword ptr [edx + 0x64]
// 00a7649e  50                   push eax
// 00a7649f  8d442438             lea eax, [esp + 0x38]
// 00a764a3  50                   push eax
// 00a764a4  8bce                 mov ecx, esi
// 00a764a6  ffd2                 call edx
// 00a764a8  85c0                 test eax, eax
// 00a764aa  740c                 je 0xa764b8
// 00a764ac  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a764b0  8b01                 mov eax, dword ptr [ecx]
// 00a764b2  8b5064               mov edx, dword ptr [eax + 0x64]
// 00a764b5  56                   push esi
// 00a764b6  ffd2                 call edx
// 00a764b8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a764bc  85c9                 test ecx, ecx
// 00a764be  744a                 je 0xa7650a
// 00a764c0  8b85e0010000         mov eax, dword ptr [ebp + 0x1e0]
// 00a764c6  51                   push ecx
// 00a764c7  50                   push eax
// 00a764c8  8bcb                 mov ecx, ebx
// 00a764ca  e83164fdff           call 0xa4c900
// 00a764cf  8bce                 mov ecx, esi
// 00a764d1  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00a764d6  e8afc1f0ff           call 0x98268a
// 00a764db  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a764e0  758e                 jne 0xa76470
// 00a764e2  8b07                 mov eax, dword ptr [edi]
// 00a764e4  8bcf                 mov ecx, edi
// 00a764e6  8b10                 mov edx, dword ptr [eax]
// 00a764e8  6a01                 push 1
// 00a764ea  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00a764f2  ffd2                 call edx
// 00a764f4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a764f8  64890d00000000       mov dword ptr fs:[0], ecx
// 00a764ff  59                   pop ecx
// 00a76500  5f                   pop edi
// 00a76501  5e                   pop esi
// 00a76502  5d                   pop ebp
// 00a76503  5b                   pop ebx
// 00a76504  83c41c               add esp, 0x1c
// 00a76507  c20400               ret 4
// 00a7650a  6a00                 push 0
// 00a7650c  6a06                 push 6
// 00a7650e  e847c7f0ff           call 0x982c5a
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonControlTab@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp